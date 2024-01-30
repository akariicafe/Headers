@interface AXUIPasscodePaneContainingNavigationController : UINavigationController

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;

@end
