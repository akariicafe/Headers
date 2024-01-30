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

- (void)processISPMotionData:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)exportMotionSamples;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxHoldDuration;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })vitalityScoringSmartCameraPipelineVersion;
- (void)setVitalityScoringEnabled:(BOOL)a0;
- (void)processCountOfVisibleVitalityObjects:(int)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)stopMotionProcessing;
- (void)setBufferHistorySeconds:(double)a0;
- (void)setVitalityScoringSmartCameraPipelineVersion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a0;
- (void)setIntermediateLoggingEnabled:(BOOL)a0;
- (void)dealloc;
- (BOOL)vitalityScoringEnabled;
- (void)processInferences:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)startMotionProcessing;
- (BOOL)intermediateLoggingEnabled;
- (double)videoFrameRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })beginTrimmingForStillImageHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 minimumPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)emissionStatusForHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)init;
- (double)bufferHistorySeconds;
- (float)computeVitalityScoreForStillImageHostPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 movieRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)setMaxHoldDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setVideoFrameRate:(double)a0;

@end
