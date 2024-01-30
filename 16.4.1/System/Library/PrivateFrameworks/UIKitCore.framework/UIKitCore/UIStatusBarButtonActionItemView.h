@class CALayer, UIButton;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {
    UIButton *_button;
    UIButton *_externalButton;
}

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) CALayer *ringLayer;
@property (readonly, nonatomic) BOOL extendsHitTestingFrame;

- (long long)buttonType;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canBecomeFocused;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentsImageFrame;
- (id)_createButton;
- (void)_doubleTapButton:(id)a0;
- (void)_pressAndHoldButton:(id)a0;
- (void)_pressButton:(id)a0;
- (void)_triggerButtonWithAction:(long long)a0;
- (BOOL)allowsUserInteraction;
- (id)highlightImage;
- (void)setLayerHighlightImage:(id)a0;
- (BOOL)showsTouchWhenHighlighted;
- (double)updateContentsAndWidth;
- (BOOL)usesAdvancedActions;

@end
