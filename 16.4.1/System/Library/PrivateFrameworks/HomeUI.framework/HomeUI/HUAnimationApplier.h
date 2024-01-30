@class NSMutableSet, HUAnimationSettings, CADisplayLink;

@interface HUAnimationApplier : HUApplier

@property (copy, nonatomic) HUAnimationSettings *animationSettings;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) NSMutableSet *relativeAnimations;
@property (readonly, nonatomic) NSMutableSet *effectiveProgressObservers;
@property (nonatomic) BOOL applyDynamically;
@property (readonly, nonatomic) double effectiveProgress;

+ (id)_applierWithAnimationSettings:(id)a0 applyDynamically:(BOOL)a1;
+ (id)_applyAnimationSettings:(id)a0 withApplier:(id /* block */)a1 completion:(id /* block */)a2 applyDynamically:(BOOL)a3;
+ (id)applyAnimationSettings:(id)a0 withDynamicApplier:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)applyAnimationSettings:(id)a0 withStaticApplier:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)dynamicApplierWithAnimationSettings:(id)a0;
+ (id)staticApplierWithAnimationSettings:(id)a0;

- (BOOL)cancel;
- (id)init;
- (BOOL)start;
- (void).cxx_destruct;
- (double)_effectiveDuration;
- (BOOL)complete:(BOOL)a0;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (double)_remainingTimeIntervalForEffectiveProgress:(double)a0;
- (void)_startEffectiveProgressTimerForObserver:(id)a0;
- (void)_updateDynamicProgress:(double)a0;
- (BOOL)addAlongsideAnimationApplier:(id)a0 relativeStart:(double)a1 relativeDuration:(double)a2;
- (id)initWithAnimationSettings:(id)a0;
- (BOOL)notifyUponEffectiveProgress:(double)a0 withBlock:(id /* block */)a1;

@end
