@interface ICQRemoteUINavigationController : UINavigationController

@property (nonatomic) BOOL shouldSignalDelegateOnDismiss;

- (id)initWithRootViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
