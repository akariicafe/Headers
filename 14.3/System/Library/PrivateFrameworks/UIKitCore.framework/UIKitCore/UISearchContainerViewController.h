@class UISearchController;

@interface UISearchContainerViewController : UIViewController

@property (retain, nonatomic) UISearchController *searchController;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)_presentSearchControllerIfNecessary;
- (void)setTabBarObservedScrollView:(id)a0;
- (id)initWithSearchController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_prepareForContainerTransition:(id)a0;
- (BOOL)_transitionsChildViewControllers;
- (void)viewDidLoad;
- (void)encodeWithCoder:(id)a0;

@end
