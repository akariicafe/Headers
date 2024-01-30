@interface NewsSubscription.PaywallViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
    void /* unknown type, empty encoding */ pluggableDelegate;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ paywallModel;
    void /* unknown type, empty encoding */ layoutOptionsProvider;
    void /* unknown type, empty encoding */ purchasingSpinnerViewControllerFactory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verificationSpinner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_purchasingSpinner;
    void /* unknown type, empty encoding */ purchasePresenter;
    void /* unknown type, empty encoding */ sceneStateManager;
    void /* unknown type, empty encoding */ webOptinFlowManager;
    void /* unknown type, empty encoding */ paidAccessChecker;
}

- (void)viewDidLoad;
- (void)handlePurchaseAddedNotificationWithNotification:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
