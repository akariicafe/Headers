@class UISearchController;

@interface UISearchContainerViewController : UIViewController

@property (retain, nonatomic) UISearchController *searchController;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_prepareForContainerTransition:(id)a0;
- (void)_presentSearchControllerIfNecessary;
- (BOOL)_transitionsChildViewControllers;
- (id)initWithSearchController:(id)a0;
- (void)setTabBarObservedScrollView:(id)a0;

@end
