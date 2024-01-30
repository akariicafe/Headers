@interface RPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (BOOL)isInternalWindow;
- (id)init;
- (void)dealloc;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_presentationViewController;
- (id)mainWindow;

@end
