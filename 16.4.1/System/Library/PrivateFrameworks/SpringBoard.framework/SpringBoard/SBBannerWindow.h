@interface SBBannerWindow : SBFSecureWindow

- (id)initWithWindowScene:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)setHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)_canBecomeKeyWindow;

@end
