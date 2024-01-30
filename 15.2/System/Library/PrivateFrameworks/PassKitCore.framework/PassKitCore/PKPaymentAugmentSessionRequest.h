@class PKPaymentMerchantSession;

@interface PKPaymentAugmentSessionRequest : PKPaymentAugmentBaseRequest

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;

+ (id)augmentSessionRequestWithBaseRequest:(id)a0;

- (id)endpointComponents;
- (void).cxx_destruct;
- (id)bodyDictionary;

@end
