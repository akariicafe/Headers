@interface _PXValueDefaultAnimation : _PXValueAnimation {
    double _initialValue;
    long long _curve;
}

- (id)initWithFromValue:(double)a0 currentMediaTime:(double)a1 spec:(struct _PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; })a2;
- (id)initWithDuration:(double)a0 currentMediaTime:(double)a1 spec:(struct _PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; })a2;
- (double)currentValue;

@end
