@class HUShapeLayerView, UIViewPropertyAnimator, UIView, HUVisualEffectContainerView;

@interface HUSwitchIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) HUShapeLayerView *frameView;
@property (retain, nonatomic) HUVisualEffectContainerView *frameContainerView;
@property (retain, nonatomic) UIView *switchBackgroundView;
@property (retain, nonatomic) UIView *visibleSwitchView;
@property (retain, nonatomic) HUShapeLayerView *switchTopIndicatorView;
@property (retain, nonatomic) HUVisualEffectContainerView *switchTopIndicatorContainerView;
@property (retain, nonatomic) HUShapeLayerView *switchBottomIndicatorView;
@property (retain, nonatomic) HUVisualEffectContainerView *switchBottomIndicatorContainerView;
@property (retain, nonatomic) UIViewPropertyAnimator *switchAnimator;

- (void).cxx_destruct;
- (void)_setIconState:(long long)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIconFromState:(long long)a0 toState:(long long)a1 animated:(BOOL)a2;
- (void)updateColorsForDisplayStyle:(unsigned long long)a0;
- (BOOL)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switchTopIndicatorFrameForVisibleSwitchBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 switchOn:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switchBottomIndicatorFrameForVisibleSwitchBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 switchOn:(BOOL)a1;

@end
