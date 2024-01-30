@interface DHKey : FullKey

- (id)publicKey;
- (id)description;
- (id)keyAgreementWithPublicKey:(id)a0 error:(id *)a1;

@end
