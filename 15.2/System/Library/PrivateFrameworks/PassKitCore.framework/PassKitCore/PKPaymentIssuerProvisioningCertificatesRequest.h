@class NSString;

@interface PKPaymentIssuerProvisioningCertificatesRequest : PKPaymentWebServiceRequest {
    NSString *_encryptionScheme;
}

- (id)initWithEncryptionScheme:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
