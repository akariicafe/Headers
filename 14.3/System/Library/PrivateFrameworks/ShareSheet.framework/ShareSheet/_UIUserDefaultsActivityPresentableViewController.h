@class UIViewController;

@interface _UIUserDefaultsActivityPresentableViewController : UIViewController

@property (retain, nonatomic) UIViewController *navigationController;
@property (retain, nonatomic) UIViewController *userDefaultsViewController;

- (void).cxx_destruct;
- (void)_loadNavigationController;
- (id)initWithUserDefaultsViewController:(id)a0;
- (void)viewDidLoad;

@end
