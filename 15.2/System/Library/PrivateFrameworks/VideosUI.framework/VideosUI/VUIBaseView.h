@interface VUIBaseView : UIView

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)didMoveToWindow;
- (void)vui_traitCollectionDidChange:(id)a0;
- (BOOL)vuiIsUserInteractionEnabled;
- (void)setVuiUserInteractionEnabled:(BOOL)a0;

@end
