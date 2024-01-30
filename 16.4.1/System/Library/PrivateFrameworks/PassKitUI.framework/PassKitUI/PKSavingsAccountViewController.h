@class PKDashboardMoreMenuFactory, _PKAccountSavingsViewController;

@interface PKSavingsAccountViewController : UIViewController {
    _PKAccountSavingsViewController *_viewController;
    PKDashboardMoreMenuFactory *_moreMenuFactory;
}

- (id)initWithConfiguration:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;

@end
