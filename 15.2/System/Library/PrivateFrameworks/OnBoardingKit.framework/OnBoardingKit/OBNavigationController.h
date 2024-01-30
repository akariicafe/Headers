@interface OBNavigationController : UINavigationController

@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)setViewControllers:(id)a0;

@end
