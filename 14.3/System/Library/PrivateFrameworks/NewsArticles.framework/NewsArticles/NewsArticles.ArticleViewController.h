@class NSArray;

@interface NewsArticles.ArticleViewController : UIViewController <TSTabBarSplitViewAutoObserver, NULoadingDelegate, NUArticleViewControllerLoadingListener, NAArticleFooterDelegate, NUArticleHardPaywallPresentationReporting, UIScrollViewDelegate, NAZoomable, FCBundleSubscriptionChangeObserver, NUURLHandlerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ observableScrollView;
    void /* unknown type, empty encoding */ modalHostStyle;
    void /* unknown type, empty encoding */ isImpressionable;
    void /* unknown type, empty encoding */ pageDelegate;
    void /* unknown type, empty encoding */ contentBackgroundColor;
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ articleViewController;
    void /* unknown type, empty encoding */ presentationContext;
    void /* unknown type, empty encoding */ keyCommandManager;
    void /* unknown type, empty encoding */ documentSectionBlueprintProvider;
    void /* unknown type, empty encoding */ hardPaywallViewController;
    void /* unknown type, empty encoding */ deferredHardPaywallViewController;
    void /* unknown type, empty encoding */ footerProvider;
    void /* unknown type, empty encoding */ footers;
    void /* unknown type, empty encoding */ headerProvider;
    void /* unknown type, empty encoding */ headers;
    void /* unknown type, empty encoding */ urlHandler;
    void /* unknown type, empty encoding */ paywallPreparationEventManager;
    void /* unknown type, empty encoding */ deferredHardPaywallIsVisible;
    void /* unknown type, empty encoding */ deferredHardPaywallHeightProvider;
    void /* unknown type, empty encoding */ destinationViewSize;
    void /* unknown type, empty encoding */ viewingSessionID;
    void /* unknown type, empty encoding */ scrollDebounce;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ keyboardInputMonitor;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (BOOL)isPreviewing;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)zoomOut;
- (void)scrollViewDidScroll:(id)a0;
- (void)URLHandler:(id)a0 wantsToPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)resetZoom;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)zoomIn;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (BOOL)shouldOccludeAccessibilityElement:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)footerNeedsLayout:(id)a0;
- (void)footerResignsAsFirstResponder:(id)a0;
- (BOOL)canIncreaseTextSize;
- (BOOL)canDecreaseTextSize;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)increaseTextSize;
- (void)decreaseTextSize;
- (BOOL)canResetZoom;
- (void)handleKeyCommandWithKeyCommand:(id)a0;
- (void)loadingDidFinishWithError:(id)a0;
- (void)didLoadArticle:(id)a0 withContext:(id)a1;
- (BOOL)isShowingHardPaywall;
- (BOOL)accessibilityShouldScroll:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)accessibilityShouldScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
