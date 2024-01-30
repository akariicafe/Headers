@class PKPaymentMerchantSession, NSString, NSDecimalNumber;

@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (copy, nonatomic) NSString *currencyCode;

+ (id)paramWithMerchantSession:(id)a0 secureElementIdentifier:(id)a1 transactionAmount:(id)a2 currencyCode:(id)a3;

- (void).cxx_destruct;
- (id)description;

@end
