@class NSString;

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)endpointName;

@end
