@class NSString, CALayer, NSMutableArray, BSAnimationSettings;

@interface SBReversibleLayerPropertyAnimator : NSObject <CAAnimationDelegate, BSInvalidatable>

@property (nonatomic) BOOL invalidated;
@property (copy, nonatomic) BSAnimationSettings *currentAnimationSettings;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic, getter=hasStarted) BOOL started;
@property (readonly, nonatomic, getter=isGoingForward) BOOL goingForward;
@property (nonatomic) unsigned long long reversalCount;
@property (nonatomic, getter=hasReversedWithNewSettings) BOOL reversedWithNewSettings;
@property (nonatomic) unsigned long long outstandingCAAnimationCompletionCount;
@property (copy, nonatomic) NSString *forwardAnimationKey;
@property (copy, nonatomic) NSString *forwardOffsetAnimationKey;
@property (retain, nonatomic) NSMutableArray *reversalAnimationKeys;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) double initialValue;
@property (readonly, nonatomic) double targetValue;
@property (readonly, nonatomic, getter=hasReversed) BOOL reversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)reverse;
- (void)invalidate;
- (void)_fireCompletionIfNecessary;
- (void)_animateFromRelativeValue:(double)a0 toRelativeValue:(double)a1 withSettings:(id)a2 beginTime:(id)a3;
- (void)_animateFromValue:(double)a0 toValue:(double)a1 withSettings:(id)a2 beginTime:(id)a3;
- (void)_reverseWithSettings:(id)a0 directionChangeSettings:(id)a1 headStart:(double)a2;
- (double)_percentCompleteForAnimation:(id)a0 time:(double)a1;
- (id)_animationWithSettings:(id)a0;
- (double)_inputPercentCompleteForAnimation:(id)a0 outputPercentComplete:(double)a1 precision:(double)a2;
- (id)_additiveAnimationForKeyPath:(id)a0 withSettings:(id)a1 beginTime:(id)a2 fromRelativeValue:(double)a3 toRelativeValue:(double)a4;
- (double)_outputPercentCompleteForAnimation:(id)a0 inputPercentComplete:(double)a1;
- (id)initWithLayer:(id)a0 keyPath:(id)a1 initialValue:(double)a2 targetValue:(double)a3;
- (void)animateWithSettings:(id)a0 completion:(id /* block */)a1;
- (void)reverseWithSettings:(id)a0 directionChangeSettings:(id)a1 headStart:(double)a2;

@end
