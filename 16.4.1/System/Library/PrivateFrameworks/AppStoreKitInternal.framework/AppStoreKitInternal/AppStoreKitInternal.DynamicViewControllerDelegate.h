@interface AppStoreKitInternal.DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate> {
    void /* unknown type, empty encoding */ subscriptionManager;
    void /* unknown type, empty encoding */ purchaseSuccessHandler;
    void /* unknown type, empty encoding */ purchaseFailureHandler;
    void /* unknown type, empty encoding */ carrierLinkSuccessHandler;
    void /* unknown type, empty encoding */ carrierLinkFailureHandler;
    void /* unknown type, empty encoding */ didDismissHandler;
    void /* unknown type, empty encoding */ contentViewConstructor;
}

- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (id)init;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)dynamicViewController:(id)a0 contentViewWithDictionary:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;

@end
