@class NSString;

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *domainName;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0;
- (id)initWithMerchantIdentifier:(id)a0 domainName:(id)a1;

@end
