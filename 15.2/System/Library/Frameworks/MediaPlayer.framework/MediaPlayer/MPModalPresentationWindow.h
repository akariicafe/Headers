@interface MPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (BOOL)isInternalWindow;
- (id)init;
- (id)_presentationViewController;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
