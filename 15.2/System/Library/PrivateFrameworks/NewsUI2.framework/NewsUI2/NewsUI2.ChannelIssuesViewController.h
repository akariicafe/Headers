@interface NewsUI2.ChannelIssuesViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUKeyCommandTraversable, TUDeselectable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ offlineAlertControllerFactory;
    void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
    void /* unknown type, empty encoding */ pluggableDelegate;
}

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)deselect;
- (void)traitCollectionDidChange:(id)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)a0 action:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
