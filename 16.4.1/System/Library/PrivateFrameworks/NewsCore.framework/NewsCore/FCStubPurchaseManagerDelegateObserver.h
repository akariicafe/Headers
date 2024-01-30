@interface FCStubPurchaseManagerDelegateObserver : NSObject <FCPurchaseManagerDelegate>

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failedBlock;
@property (copy, nonatomic) id /* block */ failedWithInvalidReceiptBlock;

- (void).cxx_destruct;
- (void)addPurchaseFailedBlock:(id /* block */)a0;
- (void)addPurchaseFailedWithInvalidReceiptBlock:(id /* block */)a0;
- (void)addPurchaseSuccessBlock:(id /* block */)a0;
- (void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)a0 ongoingPurchaseEntry:(id)a1;
- (void)purchaseFailedWithProductID:(id)a0 transactionState:(long long)a1 transactionError:(id)a2 ongoingPurchaseEntry:(id)a3;
- (void)purchaseSuccessWithProductID:(id)a0 transaction:(id)a1 chargeCurrencyCode:(id)a2 ongoingPurchaseEntry:(id)a3;

@end
