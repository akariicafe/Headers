@class NSString;

@interface PKAMPCardInfoForMerchantRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithMerchantIdentifier:(id)a0;

@end
