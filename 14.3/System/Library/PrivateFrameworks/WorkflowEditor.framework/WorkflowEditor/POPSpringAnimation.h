@interface POPSpringAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (nonatomic) double springBounciness;
@property (nonatomic) double springSpeed;
@property (nonatomic) double dynamicsTension;
@property (nonatomic) double dynamicsFriction;
@property (nonatomic) double dynamicsMass;

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)a0;
+ (void)convertBounciness:(double)a0 speed:(double)a1 toTension:(double *)a2 friction:(double *)a3 mass:(double *)a4;
+ (void)convertTension:(double)a0 friction:(double)a1 toBounciness:(double *)a2 speed:(double *)a3;

- (void)setSolver:(struct SpringSolver<POP::Vector4<double> > { double x0; double x1; double x2; double x3; double x4; double x5; double x6; struct SSState<POP::Vector4<double> > { struct Vector4<double> { double x0; double x1; double x2; double x3; } x0; struct Vector4<double> { double x0; double x1; double x2; double x3; } x1; } x7; struct Vector4<double> { double x0; double x1; double x2; double x3; } x8; BOOL x9; } *)a0;
- (struct SpringSolver<POP::Vector4<double> > { double x0; double x1; double x2; double x3; double x4; double x5; double x6; struct SSState<POP::Vector4<double> > { struct Vector4<double> { double x0; double x1; double x2; double x3; } x0; struct Vector4<double> { double x0; double x1; double x2; double x3; } x1; } x7; struct Vector4<double> { double x0; double x1; double x2; double x3; } x8; BOOL x9; } *)solver;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_initState;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (void)_updatedDynamicsTension;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsMass;

@end
