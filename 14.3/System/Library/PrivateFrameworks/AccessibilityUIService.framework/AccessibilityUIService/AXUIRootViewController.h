@interface AXUIRootViewController : UIViewController

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (BOOL)accessibilityPostScreenChangedForChildViewController:(id)a0 isAddition:(BOOL)a1;

@end
