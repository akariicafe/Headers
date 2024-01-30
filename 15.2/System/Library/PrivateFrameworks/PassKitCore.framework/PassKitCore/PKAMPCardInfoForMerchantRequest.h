@class NSString;

@interface PKAMPCardInfoForMerchantRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *merchantIdentifier;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithMerchantIdentifier:(id)a0;

@end
