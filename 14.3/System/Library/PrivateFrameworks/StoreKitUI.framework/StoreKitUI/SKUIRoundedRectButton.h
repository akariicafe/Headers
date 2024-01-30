@class UILabel, UIView;

@interface SKUIRoundedRectButton : UIButton {
    UIView *_borderView;
    UILabel *_subtitleLabel;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)_basicAnimationWithKeyPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_reloadColors;
- (void)_reloadFonts;
- (void)setSubtitleWithLabel:(id)a0;

@end
