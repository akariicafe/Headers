@class NSArray;

@interface NewsUI2.TodayViewController : UIViewController <TUPluggable, TUKeyCommandTraversable, TUDeselectable, TSTabBarSplitViewAutoObserver, UICollectionViewDelegate, TUScrollable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
    void /* unknown type, empty encoding */ barCompressionManager;
    void /* unknown type, empty encoding */ refreshStateMachine;
    void /* unknown type, empty encoding */ refreshControl;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ loadingGate;
}

@property (nonatomic, readonly) long long pluginItemCount;
@property (nonatomic, readonly) long long pluginVisibleItemCount;
@property (nonatomic, readonly) NSArray *pluginItemIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pluggableDelegate;

- (void)scrollToTopAnimated:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)deselect;
- (void)viewWillDisappear:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)initializeWithCompletion:(id /* block */)a0;
- (void)relayoutWithCompletion:(id /* block */)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didPullToRefreshWithSender:(id)a0;
- (void)significantTimeChangeDidOccur;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
