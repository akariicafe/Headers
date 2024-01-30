@interface ChronoCore.ZStackContainerViewController : UIViewController

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
