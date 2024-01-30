@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)identityData;
- (id)dataRepresentationWithError:(id *)a0;
- (id)prekeyData;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;

@end
