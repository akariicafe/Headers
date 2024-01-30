@class NSString, NSDictionary, PKAppletSubcredential;

@interface PKPaymentRegisterCredentialRequest : PKPaymentWebServiceRequest {
    NSString *_credentialIdentifier;
    NSDictionary *_metadata;
}

@property (retain, nonatomic) PKAppletSubcredential *credential;

+ (id)requestMetadataFromCarKeyRegistrationMetadata:(id)a0 withCredential:(id)a1;
+ (id)requestMetadataFromRegistrationMetadata:(id)a0 withCredential:(id)a1;
+ (id)requestRegistrationDataFromRegistrationData:(id)a0;

- (id)requestBody;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void)buildRequestBody:(id)a0;
- (id)initWithCredential:(id)a0 metadata:(id)a1;

@end
