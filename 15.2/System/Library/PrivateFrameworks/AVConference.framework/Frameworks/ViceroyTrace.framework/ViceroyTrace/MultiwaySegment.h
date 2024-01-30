@class NSString, NSMutableDictionary, VCHistogram, NSDate, NSObject;
@protocol SegmentStatsDelegate, OS_nw_activity;

@interface MultiwaySegment : NSObject {
    int _interval;
    int _frequency;
    double _averageTargetBitrateSum;
    unsigned int _averageTargetBitrateReportCounter;
    double _roundTripTimeSum;
    unsigned int _roundTripTimeReportCounter;
    BOOL _hasReported;
    NSDate *_conversationTimeBase;
    int _startDate;
    id<SegmentStatsDelegate> _delegate;
    BOOL _useNwActivitySubmitMetrics;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _isNWActivityReportingEnabled;
}

@property (readonly) NSString *segmentName;
@property (readonly) NSString *previousSegmentName;
@property (readonly) unsigned int segmentStreamGroups;
@property (readonly) unsigned int previousSegmentStreamGroups;
@property (readonly) NSMutableDictionary *activeTemporalTiersBitmapStreams;
@property int duration;
@property int adjustedDuration;
@property (readonly) double averageTargetBitrate;
@property unsigned int totalPacketsReceived;
@property unsigned int totalPacketsLost;
@property unsigned int totalPacketsSent;
@property unsigned long long totalBytesSent;
@property unsigned long long totalBytesReceived;
@property BOOL is5GHz;
@property (readonly) VCHistogram *RTT;
@property (readonly) VCHistogram *PLR;
@property (readonly) VCHistogram *TBR;
@property unsigned int localSwitches;

- (double)packetLossRate;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)dealloc;
- (unsigned int)RTPeriod;
- (id)segmentReport;
- (void)setNWActivityReportingEnabled:(BOOL)a0;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 segmentStreamGroups:(unsigned int)a2 previousSegmentStreamGroups:(unsigned int)a3 nwActivity:(id)a4 localSwitches:(unsigned int)a5 conversationTimeBase:(id)a6 delegate:(id)a7;
- (void)processTargetBitrate:(unsigned int)a0;
- (void)processRoundTripTime:(unsigned int)a0;
- (double)averageRoundTripTime;
- (void)complete_and_release_nw_activity:(int)a0;

@end
