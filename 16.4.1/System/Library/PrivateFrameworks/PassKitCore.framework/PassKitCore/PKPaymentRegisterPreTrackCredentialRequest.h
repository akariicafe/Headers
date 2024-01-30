@class NSDictionary;

@interface PKPaymentRegisterPreTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
    NSDictionary *_encryptedVehicleDataRequest;
}

- (void).cxx_destruct;
- (void)buildRequestBody:(id)a0;
- (id)initWithCredential:(id)a0 encryptedVehicleDataRequest:(id)a1 metadata:(id)a2;
- (id)initWithCredential:(id)a0 metadata:(id)a1;

@end
