@class HUShapeLayerView, UIVisualEffectView, UIViewPropertyAnimator, HUVisualEffectContainerView;

@interface HUDoorIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) HUShapeLayerView *frameView;
@property (retain, nonatomic) HUVisualEffectContainerView *frameContainerView;
@property (retain, nonatomic) HUShapeLayerView *doorView;
@property (retain, nonatomic) UIVisualEffectView *doorContainerView;
@property (retain, nonatomic) UIViewPropertyAnimator *doorAnimator;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIconFromState:(long long)a0 toState:(long long)a1 animated:(BOOL)a2;
- (void)updateColorsForDisplayStyle:(unsigned long long)a0;
- (BOOL)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })doorTransformForAngle:(double)a0;

@end
