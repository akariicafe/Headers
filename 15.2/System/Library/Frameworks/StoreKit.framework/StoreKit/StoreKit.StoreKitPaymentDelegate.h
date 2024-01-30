@interface StoreKit.StoreKitPaymentDelegate : SwiftNativeNSObject <ASDStoreKitPaymentProtocol> {
    void /* unknown type, empty encoding */ handler;
}

- (id)init;
- (void)shouldContinueTransactionWithNewStorefront:(id)a0 replyBlock:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 replyBlock:(id /* block */)a1;

@end
