@class HUShapeLayerView, NSArray, HUAnimationApplier, UIView, HUVisualEffectContainerView;

@interface HUGenericSensorIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) HUShapeLayerView *bodyView;
@property (retain, nonatomic) HUVisualEffectContainerView *bodyContainerView;
@property (retain, nonatomic) NSArray *indicatorViews;
@property (retain, nonatomic) NSArray *indicatorContainerViews;
@property (retain, nonatomic) UIView *indicatorClippingView;
@property (retain, nonatomic) HUAnimationApplier *animationApplier;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateIconFromState:(long long)a0 toState:(long long)a1 animated:(BOOL)a2;
- (void)updateColorsForDisplayStyle:(unsigned long long)a0;
- (BOOL)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (void)_updateIndicatorAlpha;
- (void)_layoutIndicatorViewsShowingIndicators:(BOOL)a0;
- (id)_animationSettingsForShowingIndicators:(BOOL)a0;
- (BOOL)showIndicators;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndicatorContainerViewInPosition:(unsigned long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForIndicatorContainerViewInPosition:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndicatorViewInPosition:(unsigned long long)a0 showIndicators:(BOOL)a1;

@end
