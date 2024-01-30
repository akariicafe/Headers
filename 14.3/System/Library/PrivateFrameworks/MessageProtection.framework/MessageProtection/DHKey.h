@interface DHKey : FullKey

- (id)publicKey;
- (id)keyAgreementWithPublicKey:(id)a0 error:(id *)a1;
- (id)description;

@end
