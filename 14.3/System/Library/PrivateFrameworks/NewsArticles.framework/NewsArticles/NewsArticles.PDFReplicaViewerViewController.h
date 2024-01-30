@class NSArray;

@interface NewsArticles.PDFReplicaViewerViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ issue;
    void /* unknown type, empty encoding */ pageViewController;
    void /* unknown type, empty encoding */ pageBlueprintProvider;
    void /* unknown type, empty encoding */ toolbarCoverFactory;
    void /* unknown type, empty encoding */ paywallFactory;
    void /* unknown type, empty encoding */ navigationItemStyle;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ paywallViewController;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ sharingActivityItemFactory;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ backButton;
    void /* unknown type, empty encoding */ nextButton;
    void /* unknown type, empty encoding */ barVisibilityAnimator;
    void /* unknown type, empty encoding */ pageSheetPresentationObserver;
    void /* unknown type, empty encoding */ commands;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;

- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)previousPageKeyCommand;
- (void)nextPageKeyCommand;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
