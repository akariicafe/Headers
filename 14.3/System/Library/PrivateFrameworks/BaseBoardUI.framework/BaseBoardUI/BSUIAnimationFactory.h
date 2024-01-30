@class NSString, BSAnimationSettings;

@interface BSUIAnimationFactory : NSObject <_UIBasicAnimationFactory, NSCopying>

@property (readonly, copy, nonatomic) BSAnimationSettings *settings;
@property (readonly, copy, nonatomic) BSAnimationSettings *effectiveSettings;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double delay;
@property (nonatomic) BOOL allowsAdditiveAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)animateWithFactory:(id)a0 options:(unsigned long long)a1 actions:(id /* block */)a2;
+ (id)factoryWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3;
+ (void)animateWithFactory:(id)a0 actions:(id /* block */)a1;
+ (void)animateWithFactory:(id)a0 additionalDelay:(double)a1 options:(unsigned long long)a2 actions:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)factoryWithAnimationAttributes:(id)a0;
+ (void)animateWithFactory:(id)a0 additionalDelay:(double)a1 actions:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)animateWithSettings:(id)a0 options:(unsigned long long)a1 actions:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)animateWithFactory:(id)a0 options:(unsigned long long)a1 actions:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)animateWithFactory:(id)a0 additionalDelay:(double)a1 options:(unsigned long long)a2 actions:(id /* block */)a3;
+ (id)factoryWithDuration:(double)a0 delay:(double)a1 timingFunction:(id)a2;
+ (id)factoryWithSettings:(id)a0;
+ (id)factoryWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 timingFunction:(id)a3;
+ (id)factoryWithSettings:(id)a0 timingFunction:(id)a1;
+ (id)factoryWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3 timingFunction:(id)a4;
+ (double)globalSlowDownFactor;
+ (void)animateWithSettings:(id)a0 actions:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)factoryWithDuration:(double)a0 timingFunction:(id)a1;
+ (id)factoryWithDuration:(double)a0;
+ (void)animateWithSettings:(id)a0 actions:(id /* block */)a1;
+ (void)addAlongsideAnimations:(id /* block */)a0 completion:(id /* block */)a1;
+ (void)animateWithFactory:(id)a0 actions:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)factoryWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2;
+ (id)factoryWithDuration:(double)a0 delay:(double)a1;
+ (void)animateWithFactory:(id)a0 additionalDelay:(double)a1 actions:(id /* block */)a2;
+ (id)factoryWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3 initialVelocity:(double)a4;
+ (void)animateWithSettings:(id)a0 options:(unsigned long long)a1 actions:(id /* block */)a2;

- (BOOL)_shouldAnimateAdditivelyForView:(id)a0 withKeyPath:(id)a1;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_timingFunctionForAnimation;
- (id)factoryWithTimingFunction:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)applySettingsToCAAnimation:(id)a0;

@end
