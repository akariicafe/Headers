@class NSString, UIPageViewController, NSArray;

@interface OKNavigatorOriginalLinearViewControllerProxy : OKNavigatorViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource> {
    UIPageViewController *_pagesViewController;
    NSArray *_orderedPagesNames;
    long long _transitionStyle;
    long long _navigationOrientation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)willMoveToParentViewController:(id)a0;
- (BOOL)prepareForDisplay;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)commonInit;
- (void)dealloc;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)prepareForWarmup;
- (BOOL)prepareForUnload;
- (void)applySettings;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)reloadPagesViewController;
- (void)gotoNext:(id)a0;
- (void)gotoPrevious:(id)a0;
- (void)prepareAdjacentPageViewControllers;
- (void)updatePagesViewController;
- (id)nameForPageBeforePage:(id)a0;
- (id)nameForPageAfterPage:(id)a0;
- (void)setSettingTransition:(unsigned long long)a0;
- (void)setSettingOrientation:(unsigned long long)a0;

@end
