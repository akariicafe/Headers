@interface ICQRemoteUINavigationController : UINavigationController

@property (nonatomic) BOOL shouldSignalDelegateOnDismiss;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
