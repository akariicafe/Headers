@class NSString;

@interface PKPaymentNonceRequest : PKPaymentAugmentBaseRequest

@property (nonatomic) BOOL useLegacyGetAPI;
@property (copy, nonatomic) NSString *merchantIdentifier;

+ (id)nonceRequestWithBaseRequest:(id)a0;

- (id)endpointComponents;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)_legacyGetURLRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
