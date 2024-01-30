@interface SBBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

+ (BOOL)layoutContentViewControllerWithConstraints;

- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)_canBecomeKeyWindow;
- (id)init;
- (void)setHidden:(BOOL)a0;

@end
