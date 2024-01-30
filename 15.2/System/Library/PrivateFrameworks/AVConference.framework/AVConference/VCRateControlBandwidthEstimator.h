@class VCRateControlServerBag, SuddenChangeParameters;

@interface VCRateControlBandwidthEstimator : NSObject {
    unsigned int _totalBytesInProbingSequence;
    unsigned int _totalPacketsInProbingSequence;
    double _lastPacketInProbingSequenceArrivalTime;
    double _earlyProbingPacketArrivalTime;
    unsigned int _earlyBytesInProbingSequence;
    unsigned int _earlyPacketsInProbingSequence;
    unsigned int _referencePacketDataSize;
    BOOL _isInitialized;
    BOOL _isFirstBWEstimationReleased;
    unsigned int _lastProbingSequenceTimestamp;
    unsigned int _lastProbingSequenceReferenceTimestamp;
    double _firstDivergeTime;
    int _bandwidthDivergeCount;
    int _suddenChangeBandwidthBufferIndex;
    double _suddenChangeBandwidthBuffer[30];
    unsigned int _overRangePacketsCount;
    double _totalBandwidth;
    SuddenChangeParameters *_suddenChangeParameters;
    unsigned int _minPacketsCount;
    double _minEstimationWindowDuration;
    double _maxDetectableBandwidth;
    unsigned int _maxOverRangePacketsCount;
    unsigned int _minProbingSequenceSize;
    void *_logBWEDump;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (readonly, nonatomic) int bandwidthEstimationState;
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled;
@property (retain, nonatomic) VCRateControlServerBag *serverBag;
@property (readonly, nonatomic) double lastProbingArrivalTime;

- (id)init;
- (void)dealloc;
- (void)enableBWELogDump:(void *)a0;
- (void)calculateBandwidthEstimationForBandwidthSample:(double)a0 arrivalTime:(double)a1;
- (void)calculateBandwidthEstimationAtTime:(double)a0 mediaTimestamp:(unsigned int)a1 mediaDataSize:(unsigned int)a2 probingSequence:(BOOL)a3 probingSequenceID:(unsigned int)a4;
- (void)updateQualificationParameters;
- (void)initializeBandwidthEstimationAtTime:(double)a0 mediaTimestamp:(unsigned int)a1 probingSequence:(BOOL)a2 probingSequenceID:(unsigned int)a3;
- (BOOL)isPacketProcessedLateWithArrivalTime:(double)a0;
- (double)resetBandwidthWithParameters:(double)a0 probingSequenceDuration:(double)a1 probingSequenceSize:(unsigned int)a2 packetsInProbingSequence:(unsigned int)a3;
- (double)updateBandwidthEstimation:(double)a0 arrivalTime:(double)a1;
- (void)updateInitialBandwidthEstimationForCellularAtTime:(double)a0 bandwidth:(double)a1;
- (void)detectSuddenChangeWithBandwidth:(double)a0 suddenChangeAbove:(BOOL *)a1 suddenChangeBelow:(BOOL *)a2;
- (void)compensateSuddenChangeBandwidths;
- (void)recordSuddenChangeBandwidth:(double)a0;
- (BOOL)isSuddenChangeDurationMetAtArrivalTime:(double)a0;
- (void)updateBandwidthDivergeCountAtArrivalTime:(double)a0 suddenChangeAbove:(BOOL)a1 suddenChangeBelow:(BOOL)a2;

@end
