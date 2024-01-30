@interface NPPurchaseManager : NSObject {
    void /* unknown type, empty encoding */ purchaseManager;
    void /* unknown type, empty encoding */ transactionObservers;
    void /* unknown type, empty encoding */ purchaseObservers;
}

- (BOOL)startBundlePurchaseWithPurchaseModel:(id)a0 purchaseContext:(id)a1 error:(id *)a2;
- (id)init;
- (void)removePurchaseObserver:(id)a0;
- (id)purchaseMetadataWithPurchaseID:(id)a0 restorePurchase:(BOOL)a1;
- (void)addTransactionObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)startPurchaseWithPurchaseModel:(id)a0 purchaseContext:(id)a1 error:(id *)a2;
- (void)removeTransactionObserver:(id)a0;
- (void)addPurchaseObserver:(id)a0;

@end
