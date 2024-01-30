@interface NewsSubscription.DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate> {
    void /* unknown type, empty encoding */ purchaseContext;
    void /* unknown type, empty encoding */ resultDelegate;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ router;
}

- (void).cxx_destruct;
- (id)init;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;

@end
