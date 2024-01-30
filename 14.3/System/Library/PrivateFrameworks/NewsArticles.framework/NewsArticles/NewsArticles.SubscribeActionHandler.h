@interface NewsArticles.SubscribeActionHandler : NSObject <SXSubscribeActionHandler> {
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ actionModel;
    void /* unknown type, empty encoding */ purchaseStarter;
    void /* unknown type, empty encoding */ purchasingSpinnerViewControllerFactory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_purchasingSpinnerViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verifyingSpinnerViewController;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ familySharingLandingPageLauncher;
    void /* unknown type, empty encoding */ offerManager;
    void /* unknown type, empty encoding */ presenter;
}

- (void)handleSubscribeActionOnPresenter:(id)a0 completionBlock:(id /* block */)a1;
- (void)handleAMSPurchaseCompletion;
- (id)init;
- (void).cxx_destruct;

@end
