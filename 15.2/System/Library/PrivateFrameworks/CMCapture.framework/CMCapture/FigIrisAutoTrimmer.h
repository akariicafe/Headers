@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {
    BOOL _motionAvailable;
    struct { double w; double x; double y; double z; } _captureMotionDelta;
    double _captureMotionDeltaPeriod;
    BOOL _haveCaptureMotionDelta;
    struct { double w; double x; double y; double z; } _lastAttitude;
    struct { double w; double x; double y; double z; } _lastDelta;
    double _lastCheckedTimestamp;
    int _lastStatus;
    int _svmKernelType;
    int _svmVectorCount;
    int _svmParamCount;
    float _svmRBFRho;
    float _svmRBFGamma;
    NSArray *_svmKeys;
    NSData *_svmNormalization;
    NSData *_svmVectors;
    NSMutableArray *_motionSamples;
    unsigned long long _estimatedIntermediatesCount;
    BOOL _intermediateLoggingEnabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _maxHoldDuration;
    long long _maxHoldFrames;
    double _bufferHistorySeconds;
    double _motionSampleRate;
    unsigned long long _nominalHistorySize;
    BOOL _vitalityScoringEnabled;
    float _vitalityDocumentThreshold;
    unsigned int _vitalityScoringVersion;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _vitalityScoringSmartCameraPipelineVersion;
}

@property (readonly, nonatomic) BOOL trimmingActive;
@property (readonly, nonatomic) unsigned int vitalityScoringVersion;

+ (void)initialize;

- (void)setMaxHoldDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)processISPMotionData:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)vitalityScoringEnabled;
- (void)processCountOfVisibleVitalityObjects:(int)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (double)_getHostTime;
- (long long)_findClosestIndexToHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromIndex:(long long)a1 limitIndex:(long long)a2;
- (void)_updateStorageStats;
- (int)emissionStatusForHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setVideoFrameRate:(double)a0;
- (void)stopMotionProcessing;
- (void)processInferences:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)_shouldCut:(id)a0 withLookahead:(id)a1 withLookback:(id)a2;
- (void)setIntermediateLoggingEnabled:(BOOL)a0;
- (void)setBufferHistorySeconds:(double)a0;
- (double)_directionalWeightForSample:(id)a0;
- (BOOL)_shouldCutUnstable:(id)a0 withLookahead:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxHoldDuration;
- (id)exportMotionSamples;
- (BOOL)_shouldCutSVM:(id)a0;
- (id)init;
- (BOOL)_checkSamplesContainHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)startMotionProcessing;
- (void)_initSVM:(id)a0 fromFile:(id)a1;
- (double)videoFrameRate;
- (long long)_findClosestIndexToTimestamp:(double)a0 fromIndex:(long long)a1 limitIndex:(long long)a2;
- (BOOL)intermediateLoggingEnabled;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })vitalityScoringSmartCameraPipelineVersion;
- (float)_computeVitalityFrom:(long long)a0 to:(long long)a1;
- (BOOL)_isUnstable:(id)a0 withLookback:(id)a1;
- (void)_processMotionSample:(const struct { double x0; double x1; double x2; double x3; } *)a0 gravity:(const struct { float x0; float x1; float x2; } *)a1 motionTimestamp:(double)a2 frameTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 metadata:(id)a4;
- (void)dealloc;
- (double)bufferHistorySeconds;
- (double)_timeoutThreshold;
- (float)computeVitalityScoreForStillImageHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 movieRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })beginTrimmingForStillImageHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 minimumPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setVitalityScoringSmartCameraPipelineVersion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a0;
- (void)setVitalityScoringEnabled:(BOOL)a0;
- (long long)_findClosestIndexToOffset:(double)a0 atLeastOneFromIndex:(long long)a1 limitIndex:(long long)a2;

@end
