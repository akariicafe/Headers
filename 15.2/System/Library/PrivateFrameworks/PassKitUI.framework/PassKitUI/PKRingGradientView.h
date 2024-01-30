@class UIColor, CAGradientLayer, CAShapeLayer;

@interface PKRingGradientView : UIView {
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_gradientMaskLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_backgroundCap;
    CAShapeLayer *_gradientCap;
    struct CGColor { } *_effectiveFillColor;
    struct CGColor { } *_effectiveStrokeColor;
    BOOL _gradientCapIsFillColor;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *gradientStartColor;
@property (copy, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double minimumAngle;
@property (readonly, nonatomic) double totalWidth;
@property (nonatomic) double currentAngle;
@property (readonly, nonatomic) double radius;

- (double)strokeWidth;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)_radius;
- (struct CGPoint { double x0; double x1; })_center;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)ringWidth;
- (void)_updateEffectiveColors;
- (double)_maskRadius;
- (double)_offsetStartAngle;
- (double)_offsetEndAngle;
- (struct CGPoint { double x0; double x1; })_centerPointForMaskViewWithAngle:(double)a0 adjustToCover:(BOOL)a1;
- (void)_updateGradient;

@end
