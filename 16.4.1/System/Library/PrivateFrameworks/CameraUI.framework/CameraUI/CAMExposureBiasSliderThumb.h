@interface CAMExposureBiasSliderThumb : UIView

@property (nonatomic) float normalizedExposureValue;
@property (readonly, nonatomic) double maxRadius;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_interpolatedValueWithMin:(double)a0 mid:(double)a1 max:(double)a2;
- (double)_sunRadius;
- (double)_sunRayLength;
- (double)_sunRaySpacing;

@end
