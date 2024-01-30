@class UIView, _UIFloatingContentView, PXGFocusEffectViewConfiguration;

@interface PXGFocusEffectView : PXGFocusableView {
    _UIFloatingContentView *_floatingContentView;
    UIView *_hostedContentView;
    int _activeSelectPressesCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _clippingRect;
}

@property (copy, nonatomic) PXGFocusEffectViewConfiguration *userData;
@property (readonly, nonatomic) UIView *hostedContentView;
@property (readonly, nonatomic) UIView *contentView;

- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingRect;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)addHostedLayer:(id)a0;
- (void)addHostedView:(id)a0;
- (struct CGPoint { double x0; double x1; })convertHostedChildCenter:(struct CGPoint { double x0; double x1; })a0 fromGlobalLayer:(id)a1;
- (void)_handleSelectTap:(id)a0;
- (void)_updatePressedAppearance;

@end
