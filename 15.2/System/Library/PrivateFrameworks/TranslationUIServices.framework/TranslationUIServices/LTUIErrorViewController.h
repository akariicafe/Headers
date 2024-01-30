@interface LTUIErrorViewController : UINavigationController

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithError:(id)a0;
- (void)_updateBackground;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)drawCloseButton;

@end
