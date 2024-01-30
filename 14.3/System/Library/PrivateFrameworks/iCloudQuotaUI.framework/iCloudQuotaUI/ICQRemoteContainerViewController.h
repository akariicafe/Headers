@class UIViewController;

@interface ICQRemoteContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController *rootViewController;

- (long long)preferredStatusBarStyle;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
