@class MovementStateEstimatorOptions;

@interface MovementStateEstimator : NSObject {
    struct Measurement { float x0; float x1; } *_measurementHistory;
    unsigned long long _historySize;
    unsigned long long _historyTailInd;
    unsigned long long _historyMaxSize;
    MovementStateEstimatorOptions *_options;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastMovingStateStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastStillStartTime;
    float _sumSpeeds;
}

@property (readonly, nonatomic) long long state;

- (id)initWithOptions:(id)a0;
- (float)averageSpeed;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)processMeasurementWithPosition:(float)a0 referenceLength:(float)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (long long)_estimateNewStateForMeasurement:(struct Measurement { float x0; float x1; })a0 oldState:(long long)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
