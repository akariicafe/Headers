@class PKPaymentMerchantSession;

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;

- (id)endpointComponents;
- (void).cxx_destruct;
- (id)bodyDictionary;

@end
