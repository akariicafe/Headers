@class NSArray;

@interface NewsUI2.MagazineFeedViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUPluggable, TUKeyCommandTraversable, TUDeselectable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ barCompressionManager;
    void /* unknown type, empty encoding */ alertPresenter;
    void /* unknown type, empty encoding */ offlineAlertControllerFactory;
    void /* unknown type, empty encoding */ mastheadStyleOptionsProvider;
    void /* unknown type, empty encoding */ feedPaywallConfigFactory;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ bundlePurchasePrewarmer;
    void /* unknown type, empty encoding */ heightChangeRelayoutThreshold;
    void /* unknown type, empty encoding */ viewportFromLastRelayout;
    void /* unknown type, empty encoding */ commandContainer;
    void /* unknown type, empty encoding */ newsActivityManager;
}

@property (nonatomic, readonly) long long pluginItemCount;
@property (nonatomic, readonly) long long pluginVisibleItemCount;
@property (nonatomic, readonly) NSArray *pluginItemIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pluggableDelegate;

- (void)deselect;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initializeWithCompletion:(id /* block */)a0;
- (void)relayoutWithCompletion:(id /* block */)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (void)tabBarSplitViewDidUnobsureView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
