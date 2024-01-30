@interface _PXValueSpringAnimation : _PXValueAnimation {
    double _A;
    double _B;
    double _omega0;
}

+ (double)durationOfSpringAnimationWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 velocity:(double)a3 epsilon:(double)a4;

- (id)initWithFromValue:(double)a0 currentMediaTime:(double)a1 spec:(struct _PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; })a2;
- (double)approximateVelocity;
- (double)currentValue;
- (id)initWithDuration:(double)a0 currentMediaTime:(double)a1 spec:(struct _PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; })a2;

@end
