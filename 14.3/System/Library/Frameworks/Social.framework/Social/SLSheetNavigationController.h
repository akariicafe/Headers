@interface SLSheetNavigationController : UINavigationController

- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)setSheetNavigationBarStyle;
- (void)setDefaultNavigationBarStyle;

@end
