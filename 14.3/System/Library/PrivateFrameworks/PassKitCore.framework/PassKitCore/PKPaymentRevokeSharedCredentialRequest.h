@class NSString, NSDictionary;

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {
    NSString *_credentialIdentifier;
    NSDictionary *_revocationAttestation;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)requestBody;
- (id)initWithCredential:(id)a0 revocationAttestation:(id)a1;

@end
