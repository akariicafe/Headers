@class VCVideoStreamRateController, VCMediaStreamStats;

@interface VCVideoStreamRateAdaptation : NSObject {
    unsigned int _receivedTmmbnBitrate;
    BOOL _rateAdaptationEnabled;
    BOOL _downlinkQualityDidChange;
    double _tmmbrSendTime;
    double _tmmbnReceiveTime;
    double _adaptationTime;
    double _averageBitrateWindowDuration;
    struct opaqueRTCReporting { } *_reportingAgent;
    int _reportingModuleID;
    VCVideoStreamRateController *_rateController;
    VCMediaStreamStats *_stats;
}

@property (readonly, nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (readonly, nonatomic) double packetLossPercentage;
@property (readonly, nonatomic) double roundTripTime;
@property (readonly, nonatomic) double owrd;
@property (readonly, nonatomic) double nowrd;
@property (readonly, nonatomic) double nowrdShort;
@property (readonly, nonatomic) double nowrdAcc;
@property (readonly, nonatomic) unsigned int operatingBitrate;
@property (readonly, nonatomic) unsigned int sendTmmbrBitrate;
@property (readonly, nonatomic) BOOL isOperatingAtMaxBitrate;
@property (readonly, nonatomic) BOOL isOperatingAtMinBitrate;
@property (nonatomic) double maxOWRD;

- (void)dealloc;
- (id)className;
- (void)reportingVideoStreamEvent:(unsigned short)a0;
- (id)initWithRTPHandle:(struct tagHANDLE { int x0; } *)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1 receiverStats:(id)a2 dumpID:(unsigned int)a3 reportingParentID:(int)a4;
- (void)setEnableRateAdaptation:(BOOL)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2 size:(unsigned int)a3 endOfFrame:(BOOL)a4;
- (BOOL)runVideoStreamRateAdaptation;
- (void)receivedTMMBN:(unsigned int)a0;
- (void)updateVideoStall:(BOOL)a0 withStallDuration:(unsigned int)a1;
- (void)scheduleTMMBR:(unsigned int)a0;
- (void)setOperatingBitrate:(unsigned int)a0;
- (unsigned int)averageReceivedBitrate;

@end
