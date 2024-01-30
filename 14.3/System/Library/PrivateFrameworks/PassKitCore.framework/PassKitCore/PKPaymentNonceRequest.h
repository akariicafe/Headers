@class NSString;

@interface PKPaymentNonceRequest : PKPaymentAugmentBaseRequest

@property (nonatomic) BOOL useLegacyGetAPI;
@property (copy, nonatomic) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)_legacyGetURLRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)endpointName;

@end
