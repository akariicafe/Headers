@interface AXUIRootViewController : UIViewController

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)accessibilityPostScreenChangedForChildViewController:(id)a0 isAddition:(BOOL)a1;

@end
