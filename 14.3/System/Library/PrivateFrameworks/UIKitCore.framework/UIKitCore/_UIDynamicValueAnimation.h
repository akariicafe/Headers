@class NSMutableArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {
    id /* block */ _applier;
    id /* block */ _viewApplier;
    double _unitSize;
    double _decelerationFactor;
    double _decelerationLnFactor;
    double _multiplier;
    void *_stepFunction;
}

@property (nonatomic) double value;
@property (nonatomic) double velocity;
@property (nonatomic) double friction;
@property (copy, nonatomic) NSMutableArray *activeValues;

+ (id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)a0 stiffness:(double)a1 damping:(float)a2 velocity:(float)a3 fromValue:(double)a4 toValue:(double)a5;

- (id)init;
- (void)runWithValueApplier:(id /* block */)a0 completion:(id /* block */)a1 forScreen:(id)a2 runLoopMode:(id)a3;
- (void)dealloc;
- (void)_setVelocity:(double)a0;
- (double)_multiplier;
- (void)_appendSubclassDescription:(id)a0 atLevel:(int)a1;
- (double)settlingDuration;
- (id)initWithValue:(double)a0 velocity:(double)a1 unitSize:(double)a2;
- (void)runWithValueApplier:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_stopAnimation;
- (void)addActiveValue:(id)a0;
- (void)_setMultiplier:(double)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_animateForInterval:(double)a0;
- (void)_setDecelerationFactor:(double)a0;
- (void)runWithCompletion:(id /* block */)a0;
- (void)removeActiveValue:(id)a0;
- (void)_updateStepFunction;

@end
