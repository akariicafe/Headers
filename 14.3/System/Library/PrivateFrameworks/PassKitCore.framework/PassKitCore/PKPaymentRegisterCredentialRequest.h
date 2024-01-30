@class NSString, NSDictionary, PKAppletSubcredential;

@interface PKPaymentRegisterCredentialRequest : PKPaymentWebServiceRequest {
    NSString *_credentialIdentifier;
    NSDictionary *_metadata;
    NSDictionary *_registrationData;
}

@property (retain, nonatomic) PKAppletSubcredential *credential;

+ (id)requestRegistrationDataFromRegistrationData:(id)a0;
+ (id)requestMetadataFromCarKeyRegistrationMetadata:(id)a0 withPartnerIdentifier:(id)a1;
+ (id)requestMetadataFromRegistrationMetadata:(id)a0 withPartnerIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)requestBody;
- (id)initWithCredential:(id)a0 registrationData:(id)a1 metadata:(id)a2;

@end
