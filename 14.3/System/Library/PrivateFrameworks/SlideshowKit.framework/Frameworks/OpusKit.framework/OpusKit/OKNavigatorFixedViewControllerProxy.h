@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

@property (retain, nonatomic) OKPageViewController *pageViewController;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)willMoveToParentViewController:(id)a0;
- (BOOL)prepareForDisplay;
- (void)commonInit;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)resolutionDidChange;
- (BOOL)prepareForWarmup;
- (BOOL)prepareForUnload;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updatePageViewController;

@end
