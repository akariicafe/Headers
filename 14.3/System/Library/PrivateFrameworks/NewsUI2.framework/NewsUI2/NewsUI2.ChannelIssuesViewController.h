@class NSArray;

@interface NewsUI2.ChannelIssuesViewController : UIViewController <TUPluggable, TSTabBarSplitViewAutoObserver, TUKeyCommandTraversable, TUDeselectable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ offlineAlertControllerFactory;
    void /* unknown type, empty encoding */ gradientView;
}

@property (nonatomic, readonly) long long pluginItemCount;
@property (nonatomic, readonly) long long pluginVisibleItemCount;
@property (nonatomic, readonly) NSArray *pluginItemIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pluggableDelegate;

- (void)deselect;
- (void)initializeWithCompletion:(id /* block */)a0;
- (void)relayoutWithCompletion:(id /* block */)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
