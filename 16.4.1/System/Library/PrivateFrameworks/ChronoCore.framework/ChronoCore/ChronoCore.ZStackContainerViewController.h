@interface ChronoCore.ZStackContainerViewController : UIViewController

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)init;
- (id)_childViewControllersForAlwaysOnTimelines;
- (void)loadView;

@end
