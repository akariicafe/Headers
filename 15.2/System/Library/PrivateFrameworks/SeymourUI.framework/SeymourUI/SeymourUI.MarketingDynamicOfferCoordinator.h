@interface SeymourUI.MarketingDynamicOfferCoordinator : NSObject <AMSUIDynamicViewControllerDelegate> {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ purchaseHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;

@end
