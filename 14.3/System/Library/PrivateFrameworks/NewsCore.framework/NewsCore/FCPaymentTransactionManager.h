@class FCPaymentTransactionObserver, NSMutableDictionary, NSString;
@protocol FCPaymentTransactionManagerDelegate;

@interface FCPaymentTransactionManager : NSObject <FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager>

@property (retain, nonatomic) FCPaymentTransactionObserver *paymentTransactionObserver;
@property (retain, nonatomic) NSMutableDictionary *paymentQueueByProductID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCPaymentTransactionManagerDelegate> delegate;

- (id)init;
- (void)paymentTransactionObserver:(id)a0 didFinishPurchaseTransactionWithProductID:(id)a1;
- (BOOL)canMakePayments;
- (void).cxx_destruct;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)a0;
- (void)paymentTransactionObserver:(id)a0 didFailPurchaseTransactionWithTransaction:(id)a1;
- (void)startPurchaseWithTagID:(id)a0 productID:(id)a1 purchaseID:(id)a2 appAdamID:(id)a3 storeExternalVersion:(id)a4 price:(id)a5 webAccessOptIn:(BOOL)a6 payment:(id)a7;
- (id)createPaymentQueueWithProductID:(id)a0 purchaseID:(id)a1 webAccessOptIn:(BOOL)a2 appAdamID:(id)a3 storeExternalVersion:(id)a4;

@end
