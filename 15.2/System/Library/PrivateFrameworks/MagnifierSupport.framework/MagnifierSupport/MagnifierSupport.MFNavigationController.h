@interface MagnifierSupport.MFNavigationController : UINavigationController

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (BOOL)_canShowWhileLocked;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
