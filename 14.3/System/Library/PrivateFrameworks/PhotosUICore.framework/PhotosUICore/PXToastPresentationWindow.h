@interface PXToastPresentationWindow : UIApplicationRotationFollowingWindow

- (BOOL)isInternalWindow;
- (id)init;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithWindowScene:(id)a0;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_presentationViewController;

@end
