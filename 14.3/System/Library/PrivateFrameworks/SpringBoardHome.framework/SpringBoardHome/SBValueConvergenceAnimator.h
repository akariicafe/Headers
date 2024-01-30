@interface SBValueConvergenceAnimator : NSObject {
    double _previousForce;
    double _diff;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastFireTime;
@property (readonly, nonatomic) double elapsedTime;
@property (nonatomic) double currentValue;
@property (nonatomic) double targetValue;
@property (nonatomic) BOOL finishesOnValueConvergence;
@property (copy, nonatomic) id /* block */ convergenceFunction;
@property (copy, nonatomic) id /* block */ applier;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long frameInterval;

- (void)_reset;
- (BOOL)isRunning;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_convergeValue;
- (void)stop;
- (void)_invokeApplier;
- (void)setConvergenceFunctionWithConstant:(long long)a0;
- (void)start;
- (void)_invokeCompletionWithFinished:(BOOL)a0;

@end
