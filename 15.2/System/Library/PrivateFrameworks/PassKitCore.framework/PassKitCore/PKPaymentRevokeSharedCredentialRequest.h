@class NSString, NSDictionary;

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {
    NSString *_credentialIdentifier;
    NSDictionary *_revocationAttestation;
}

- (id)requestBody;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 revocationAttestation:(id)a1;

@end
