@class NSString, NSDictionary, SKPaymentDiscount, NSData;

@interface SKMutablePayment : SKPayment

@property (nonatomic) BOOL isStoreOriginated;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *partnerTransactionIdentifier;
@property (copy, nonatomic) NSDictionary *requestParameters;
@property (copy, nonatomic) NSString *applicationUsername;
@property (copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) long long quantity;
@property (copy, nonatomic) NSData *requestData;
@property (nonatomic) BOOL simulatesAskToBuyInSandbox;

- (void)setQuantity:(long long)a0;
- (void)setProductIdentifier:(id)a0;
- (void)setPartnerIdentifier:(id)a0;
- (void)setRequestData:(id)a0;
- (void)setRequestParameters:(id)a0;
- (void)setApplicationUsername:(id)a0;
- (void)setIsStoreOriginated:(BOOL)a0;
- (void)setSimulatesAskToBuyInSandbox:(BOOL)a0;
- (void)setPaymentDiscount:(id)a0;
- (void)setPartnerTransactionIdentifier:(id)a0;

@end
