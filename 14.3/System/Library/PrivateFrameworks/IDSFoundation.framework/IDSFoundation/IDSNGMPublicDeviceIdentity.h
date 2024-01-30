@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)dataRepresentationWithError:(id *)a0;
- (id)prekeyData;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)identityData;

@end
