@class NSString;
@protocol SegmentStatsDelegate;

@interface MultiwaySegment : NSObject {
    int _interval;
    int _frequency;
    double _averageTargetBitrateSum;
    unsigned int _averageTargetBitrateReportCounter;
    double _roundTripTimeSum;
    unsigned int _roundTripTimeReportCounter;
    id<SegmentStatsDelegate> _delegate;
}

@property (readonly) NSString *segmentName;
@property (readonly) NSString *previousSegmentName;
@property int duration;
@property int adjustedDuration;
@property (readonly) double averageTargetBitrate;
@property unsigned int totalPacketsReceived;
@property unsigned int totalPacketsLost;
@property unsigned int totalPacketsSent;
@property unsigned long long totalBytesSent;
@property unsigned long long totalBytesReceived;
@property BOOL is5GHz;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (double)packetLossRate;
- (id)delegate;
- (unsigned int)RTPeriod;
- (id)segmentReport;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 delegate:(id)a2;
- (void)processTargetBitrate:(unsigned int)a0;
- (void)processRoundTripTime:(unsigned int)a0;
- (double)averageRoundTripTime;

@end
