@interface SBBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

+ (id)_traitsArbiterOrientationActuationRole;
+ (BOOL)layoutContentViewControllerWithConstraints;

- (BOOL)canResignFirstResponder;
- (BOOL)_canBecomeKeyWindow;
- (void)setHidden:(BOOL)a0;
- (id)init;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;

@end
