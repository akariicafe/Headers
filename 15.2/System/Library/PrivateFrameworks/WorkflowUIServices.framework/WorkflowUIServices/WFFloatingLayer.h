@class WFGradient, CAGradientLayer, UITraitCollection;

@interface WFFloatingLayer : CALayer

@property (nonatomic) BOOL colorizesShadow;
@property (nonatomic) BOOL usePillCornerRadius;
@property (nonatomic) double scalingFactor;
@property (weak, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (void)updateBackgroundColor;
- (void)layoutSublayers;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)applyConfiguration:(id)a0;
- (void)updateShadowColor;

@end
