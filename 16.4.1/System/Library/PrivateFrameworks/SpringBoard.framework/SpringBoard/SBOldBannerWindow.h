@interface SBOldBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

+ (id)_traitsArbiterOrientationActuationRole;
+ (BOOL)layoutContentViewControllerWithConstraints;

- (id)initWithWindowScene:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)setHidden:(BOOL)a0;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)_canBecomeKeyWindow;

@end
