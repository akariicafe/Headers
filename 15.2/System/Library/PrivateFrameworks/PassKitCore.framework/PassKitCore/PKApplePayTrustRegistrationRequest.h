@class PKApplePayTrustKey;

@interface PKApplePayTrustRegistrationRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKApplePayTrustKey *applePayTrustKey;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;

@end
