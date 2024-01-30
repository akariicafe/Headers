@interface PKRefreshVPANPaymentCredentialRequest : PKRetrieveVPANPaymentCredentialRequest

- (id)endpointComponents;
- (id)initWithPaymentPass:(id)a0 vpanIdentifier:(id)a1 deviceIdentifier:(id)a2 nonce:(id)a3 encryptionFields:(id)a4;

@end
