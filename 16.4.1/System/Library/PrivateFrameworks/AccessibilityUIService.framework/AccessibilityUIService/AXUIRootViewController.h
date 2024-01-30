@interface AXUIRootViewController : UIViewController

- (BOOL)_canShowWhileLocked;
- (id)description;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (BOOL)accessibilityPostScreenChangedForChildViewController:(id)a0 isAddition:(BOOL)a1;

@end
