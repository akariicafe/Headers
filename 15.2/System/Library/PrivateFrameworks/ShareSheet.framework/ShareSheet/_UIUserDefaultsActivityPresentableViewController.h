@class UIViewController;

@interface _UIUserDefaultsActivityPresentableViewController : UIViewController

@property (retain, nonatomic) UIViewController *navigationController;
@property (retain, nonatomic) UIViewController *userDefaultsViewController;

- (void)viewDidLoad;
- (void)_loadNavigationController;
- (id)initWithUserDefaultsViewController:(id)a0;
- (void).cxx_destruct;

@end
