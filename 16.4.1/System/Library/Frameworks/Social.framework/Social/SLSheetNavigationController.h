@interface SLSheetNavigationController : UINavigationController

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)loadView;
- (void)setDefaultNavigationBarStyle;
- (void)setSheetNavigationBarStyle;

@end
