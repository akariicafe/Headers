@interface _UIStatusBarRadarView : _UIStatusBarImageView

- (BOOL)canBecomeFocused;
- (void)applyStyleAttributes:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_tintColor;
- (void)traitCollectionDidChange:(id)a0;

@end
