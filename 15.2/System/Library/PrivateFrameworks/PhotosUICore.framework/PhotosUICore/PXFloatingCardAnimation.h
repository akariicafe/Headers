@interface PXFloatingCardAnimation : NSObject {
    unsigned long long _type;
    union { struct { long long curve; } basic; struct { double mass; double stiffness; double damping; double initialVelocity; } spring; struct { double initialVelocity; } defaultSpring; } _typeParameters;
    double _duration;
    double _delay;
    PXFloatingCardAnimation *_coordinatedUnitAnimation;
}

@property (readonly, nonatomic) PXFloatingCardAnimation *coordinatedUnitAnimation;

+ (id)animationWithDuration:(double)a0 curve:(long long)a1 delay:(double)a2;
+ (id)animationWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 initialVelocity:(double)a3 delay:(double)a4;
+ (id)animationUsingDefaultSpringWithInitialVelocity:(double)a0 delay:(double)a1;
+ (id)drawerReleaseAnimationWithInitialVelocity:(double)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDuration:(double)a0 curve:(long long)a1 delay:(double)a2;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 initialVelocity:(double)a3 delay:(double)a4;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 initialVelocity:(double)a3 delay:(double)a4 calculateCoordinatedAnimation:(BOOL)a5;
- (id)initUsingDefaultSpringWithInitialVelocity:(double)a0 delay:(double)a1;
- (void)applyAnimations:(id /* block */)a0 completion:(id /* block */)a1;

@end
