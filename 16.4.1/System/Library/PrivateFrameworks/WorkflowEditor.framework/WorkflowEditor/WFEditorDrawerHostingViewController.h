@interface WFEditorDrawerHostingViewController : UIViewController {
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ resultsController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ navigationStyle;
@property (nonatomic, weak) void /* unknown type, empty encoding */ scrollViewObserver;
@property (nonatomic) void /* unknown type, empty encoding */ headerHeight;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)loadView;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (void)clearSearchBar;
- (void)didTransitionToVisibility:(unsigned long long)a0;
- (void)focusSearchBar;
- (id)initWithResultsController:(id)a0;
- (void)performScrollingTest:(id)a0;

@end
