@interface _UIStatusBarRadarView : _UIStatusBarImageView

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isUserInteractionEnabled;
- (id)_tintColor;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)applyStyleAttributes:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
