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

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (BOOL)prepareForDisplay;
- (void)willMoveToParentViewController:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)commonInit;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)applySettings;
- (void)gotoNext:(id)a0;
- (void)gotoPrevious:(id)a0;
- (id)nameForPageAfterPage:(id)a0;
- (id)nameForPageBeforePage:(id)a0;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareAdjacentPageViewControllers;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)reloadPagesViewController;
- (void)setSettingOrientation:(unsigned long long)a0;
- (void)setSettingTransition:(unsigned long long)a0;
- (void)updatePagesViewController;

@end
