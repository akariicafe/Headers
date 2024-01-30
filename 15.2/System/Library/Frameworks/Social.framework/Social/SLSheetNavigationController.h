@interface SLSheetNavigationController : UINavigationController

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setSheetNavigationBarStyle;
- (void)setDefaultNavigationBarStyle;

@end
