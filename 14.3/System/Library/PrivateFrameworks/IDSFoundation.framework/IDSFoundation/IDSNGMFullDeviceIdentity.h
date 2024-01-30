@interface IDSNGMFullDeviceIdentity : NSObject

+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (BOOL)shouldRollEncryptionIdentity;
- (id)dataRepresentationWithError:(id *)a0;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (id)keyRollingTicketWithError:(id *)a0;
- (id)publicDeviceIdentityWithError:(id *)a0;
- (BOOL)eraseFromKeyChain:(id *)a0;

@end
