@interface LTUIErrorViewController : UINavigationController

- (void)_updateBackground;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)initWithError:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)drawCloseButton;

@end
