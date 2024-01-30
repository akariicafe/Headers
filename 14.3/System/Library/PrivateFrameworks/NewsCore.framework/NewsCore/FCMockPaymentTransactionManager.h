@class NSString, NSError;
@protocol FCPaymentTransactionManagerDelegate;

@interface FCMockPaymentTransactionManager : NSObject <FCPaymentTransactionManager>

@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long transactionState;
@property (copy, nonatomic) NSError *transactionError;
@property (nonatomic) unsigned long long transactionExpectation;
@property (weak, nonatomic) id<FCPaymentTransactionManagerDelegate> delegate;

+ (id)mockPaymentTransactionWithSuccessForProductID:(id)a0;
+ (id)mockPaymentTransactionWithFailForProductID:(id)a0 transactionState:(long long)a1 transactionError:(id)a2;

- (BOOL)canMakePayments;
- (void).cxx_destruct;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)a0;
- (void)startPurchaseWithTagID:(id)a0 productID:(id)a1 purchaseID:(id)a2 appAdamID:(id)a3 storeExternalVersion:(id)a4 price:(id)a5 webAccessOptIn:(BOOL)a6 payment:(id)a7;

@end
