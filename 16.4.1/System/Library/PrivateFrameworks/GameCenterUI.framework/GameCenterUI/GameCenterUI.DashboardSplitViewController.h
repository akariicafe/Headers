@interface GameCenterUI.DashboardSplitViewController : GameCenterUI.BaseDoubleColumnSplitViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissHandler;
    void /* unknown type, empty encoding */ launchContext;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sidebarViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryNavigationController;
    void /* unknown type, empty encoding */ cacheSecondaryNavigationControllers;
}

- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (long long)splitViewController:(id)a0 displayModeForExpandingToProposedDisplayMode:(long long)a1;
- (long long)splitViewController:(id)a0 topColumnForCollapsingToProposedTopColumn:(long long)a1;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;

@end
