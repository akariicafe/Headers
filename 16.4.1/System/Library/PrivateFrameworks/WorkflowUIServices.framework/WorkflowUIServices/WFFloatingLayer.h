@class WFGradient, CAGradientLayer, UITraitCollection;

@interface WFFloatingLayer : CALayer

@property (nonatomic) BOOL colorizesShadow;
@property (nonatomic) BOOL usePillCornerRadius;
@property (nonatomic) double scalingFactor;
@property (nonatomic) double highlightedCornerRadius;
@property (nonatomic) BOOL appliesCornerRadiusDuringTouchDownOnly;
@property (weak, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (void)updateBackgroundColor;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (id)baseColor;
- (void)applyConfiguration:(id)a0;
- (void)updateShadowColor;

@end
