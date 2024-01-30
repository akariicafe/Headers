@interface SBSystemApertureViewControllerRotationTransitionContext : _UIViewControllerTransitionContext {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _targetTransform;
}

+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRotationToInterfaceOrientation:(long long)a0;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransform;
- (id)initWithTargetOrientation:(long long)a0;

@end
