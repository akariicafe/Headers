@interface SeymourUI.TrainerDetailViewController : UIViewController {
    void /* unknown type, empty encoding */ contentInsetInitialBehavior;
    void /* unknown type, empty encoding */ currentContentInsetBehavior;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ sortOptionsDataProvider;
    void /* unknown type, empty encoding */ currentStatusBarStyle;
    void /* unknown type, empty encoding */ navigationBarTintColor;
    void /* unknown type, empty encoding */ lastNavigationBarTintColor;
    void /* unknown type, empty encoding */ subscriptionToken;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleMoreOptionsButton:(id)a0;

@end
