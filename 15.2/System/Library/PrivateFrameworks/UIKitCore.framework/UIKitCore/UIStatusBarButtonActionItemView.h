@class CALayer, UIButton;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {
    UIButton *_button;
    UIButton *_externalButton;
}

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) CALayer *ringLayer;
@property (readonly, nonatomic) BOOL extendsHitTestingFrame;

- (void)layoutSubviews;
- (long long)buttonType;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBecomeFocused;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)updateContentsAndWidth;
- (id)highlightImage;
- (void)_pressButton:(id)a0;
- (void).cxx_destruct;
- (BOOL)showsTouchWhenHighlighted;
- (id)_createButton;
- (BOOL)usesAdvancedActions;
- (void)_doubleTapButton:(id)a0;
- (void)_pressAndHoldButton:(id)a0;
- (void)setLayerHighlightImage:(id)a0;
- (void)_triggerButtonWithAction:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentsImageFrame;
- (BOOL)allowsUserInteraction;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
