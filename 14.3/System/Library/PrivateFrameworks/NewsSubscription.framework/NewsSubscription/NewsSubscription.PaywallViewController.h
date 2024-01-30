@class NSArray;

@interface NewsSubscription.PaywallViewController : UIViewController <TUPluggable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewProvider;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ paywallModel;
    void /* unknown type, empty encoding */ paywallViewportSizeProvider;
    void /* unknown type, empty encoding */ paywallHeightProvider;
    void /* unknown type, empty encoding */ purchasingSpinnerViewControllerFactory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verificationSpinner;
    void /* unknown type, empty encoding */ purchasePresenter;
    void /* unknown type, empty encoding */ sceneStateManager;
    void /* unknown type, empty encoding */ webOptinFlowManager;
}

@property (nonatomic, readonly) long long pluginItemCount;
@property (nonatomic, readonly) long long pluginVisibleItemCount;
@property (nonatomic, readonly) NSArray *pluginItemIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pluggableDelegate;

- (void)initializeWithCompletion:(id /* block */)a0;
- (void)relayoutWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
