@interface WFEditorDrawerHostingViewController : UIViewController {
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ resultsController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ navigationStyle;
@property (nonatomic, weak) void /* unknown type, empty encoding */ scrollViewObserver;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (void)performScrollingTest:(id)a0;
- (id)initWithResultsController:(id)a0;
- (void)focusSearchBar;
- (void)clearSearchBar;

@end
