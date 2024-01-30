@class NSDictionary;

@interface PKPaymentRegisterTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
    NSDictionary *_registrationData;
}

- (void).cxx_destruct;
- (void)buildRequestBody:(id)a0;
- (id)initWithCredential:(id)a0 registrationData:(id)a1 metadata:(id)a2;

@end
