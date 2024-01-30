@interface MagnifierSupport.MFNavigationController : UINavigationController

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;

@end
