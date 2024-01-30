@class UIVisualEffectView, UIView;

@interface CSEnhancedModalButton : UIButton {
    UIVisualEffectView *_effectView;
    UIView *_highlightedView;
}

- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_buttonReleased:(id)a0;
- (void)_addVisualEffect;
- (void)_addBackgroundHighlightView;

@end
