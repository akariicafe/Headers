@class ISAVPlayer;

@interface ISRateCurveRequest : NSObject {
    double _startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startVideoTime;
    BOOL _cancelled;
    id _boundaryObserver;
    double _stepInterval;
    long long _stepIndex;
}

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float initialRate;
@property (readonly, weak, nonatomic) ISAVPlayer *avPlayer;
@property (readonly, copy, nonatomic) id /* block */ progressHandler;

- (void)cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)_didReachTargetTime;
- (void)_stepDownRate;
- (void)_stopObservingPlayer;
- (id)initWithTargetTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(double)a1 initialRate:(float)a2 avPlayer:(id)a3 progressHandler:(id /* block */)a4;

@end
