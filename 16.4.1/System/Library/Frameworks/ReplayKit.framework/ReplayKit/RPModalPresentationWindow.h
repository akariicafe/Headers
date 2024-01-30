@interface RPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (BOOL)isInternalWindow;
- (void)dealloc;
- (id)init;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_presentationViewController;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)mainWindow;

@end
