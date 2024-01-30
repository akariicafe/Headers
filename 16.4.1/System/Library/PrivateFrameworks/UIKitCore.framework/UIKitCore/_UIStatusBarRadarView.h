@interface _UIStatusBarRadarView : _UIStatusBarImageView

- (BOOL)isUserInteractionEnabled;
- (void)applyStyleAttributes:(id)a0;
- (id)_tintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
