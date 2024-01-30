@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSString *preferredLanguage;
@property (nonatomic) BOOL ignoreCache;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithPreferredLanguage:(id)a0;

@end
