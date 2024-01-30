@class UIImage, CAGradientLayer, CAShapeLayer;

@interface HUNaturalLightColorSwatchView : UIView

@property (retain, nonatomic) CAShapeLayer *circleMaskLayer;
@property (retain, nonatomic) CAGradientLayer *circleGradientLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleMaskLayer;
@property (retain, nonatomic) CAGradientLayer *selectedCircleGradientLayer;
@property (retain, nonatomic) CAShapeLayer *selectedCircleInnerLayer;
@property (retain, nonatomic) CAShapeLayer *circleOuterLayer;
@property (retain, nonatomic) UIImage *truetoneIcon;
@property (nonatomic) unsigned long long selectionState;

+ (id)_createGradientLayer;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_updateLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_buildMaskFromImage:(id)a0;

@end
