@class NSObject;
@protocol OS_dispatch_queue, VCVideoStreamRateControlProtocol;

@interface VCVideoStreamRateController : NSObject {
    id<VCVideoStreamRateControlProtocol> _rateControl;
    int _algorithm;
    unsigned short _maxTierIndex;
    unsigned short _minTierIndex;
    unsigned short _operatingTierIndex;
    double _rateControlTime;
    double _rateControlInterval;
    unsigned int _previousRTPTimestamp;
    unsigned int _averageTargetBitrate;
    unsigned long long _accumulatedTargetDataSize;
    double _totalTime;
    double _videoFrozenDuration;
    BOOL _didVideoStall;
    void *_logDump;
    NSObject<OS_dispatch_queue> *_videoStreamRateControllerQueue;
}

@property (readonly, nonatomic) unsigned int minBitrate;
@property (readonly, nonatomic) unsigned int maxBitrate;
@property (readonly, nonatomic) unsigned int targetBitrate;
@property (readonly, nonatomic) double owrd;
@property (readonly, nonatomic) double nowrd;
@property (readonly, nonatomic) double nowrdShort;
@property (readonly, nonatomic) double nowrdAcc;

- (id)className;
- (void)dealloc;
- (id)initWithDumpID:(unsigned int)a0;
- (void)createLogDumpFile:(unsigned int)a0;
- (void)doRateControlWithTime:(double)a0 roundTripTime:(double)a1 packetLossRate:(double)a2 operatingBitrate:(unsigned int)a3 averageReceivedBitrate:(unsigned int)a4;
- (unsigned short)maxTierIndex:(unsigned int)a0;
- (unsigned short)minTierIndex:(unsigned int)a0;
- (void)releaseLogDumpFile;
- (void)setMaxTargetBitrate:(unsigned int)a0 minTargetBitrate:(unsigned int)a1;
- (void)setOperatingTierIndexWithBitrate:(unsigned int)a0;
- (void)setRateControlInterval:(double)a0;
- (void)updateAverageTargetBitrate:(unsigned int)a0 interval:(double)a1;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2;
- (void)updateVideoStall:(BOOL)a0 withStallDuration:(unsigned int)a1;

@end
