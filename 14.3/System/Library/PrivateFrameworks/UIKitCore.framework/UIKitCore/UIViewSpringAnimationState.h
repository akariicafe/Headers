@interface UIViewSpringAnimationState : UIViewAnimationState {
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
}

+ (void)computeDerivedSpringParameters:(double)a0 zeta:(double)a1 mass:(double)a2 velocity:(double)a3 epsilon:(double)a4 stiffness:(double *)a5 damping:(double *)a6 debugging:(id *)a7;
+ (id)defaultSpringAnimationForKey:(id)a0 mass:(double)a1 stiffness:(double)a2 damping:(double)a3 velocity:(double)a4;
+ (void)computeDerivedSpringParameters:(double)a0 zeta:(double)a1 mass:(double)a2 velocity:(double)a3 epsilon:(double)a4 stiffness:(double *)a5 damping:(double *)a6;

- (void)setupWithDuration:(double)a0 delay:(double)a1 view:(id)a2 options:(unsigned long long)a3 factory:(id)a4 parentState:(id)a5 start:(id /* block */)a6 completion:(id /* block */)a7;
- (void)generateSpringPropertiesForDuration:(double)a0 damping:(double)a1 velocity:(double)a2;
- (id)_defaultAnimationForKey:(id)a0;
- (id)animationForLayer:(id)a0 forKey:(id)a1 forView:(id)a2;

@end
