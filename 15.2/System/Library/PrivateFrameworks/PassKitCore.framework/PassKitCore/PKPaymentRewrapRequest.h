@class NSString;

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *merchantDisplayName;

- (id)endpointComponents;
- (void).cxx_destruct;
- (id)bodyDictionary;

@end
