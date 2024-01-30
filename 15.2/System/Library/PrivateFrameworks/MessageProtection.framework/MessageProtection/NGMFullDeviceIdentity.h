@class NSMutableArray, SigningKey;

@interface NGMFullDeviceIdentity : NSObject

@property (retain, nonatomic) SigningKey *deviceSigningKey;
@property (retain, nonatomic) NSMutableArray *devicePrekeys;

+ (id)identityWithAccess:(id)a0 error:(id *)a1;
+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (id)dataRepresentationWithError:(id *)a0;
- (id)description;
- (BOOL)shouldRollEncryptionIdentity;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;
- (id)initWithSigningKey:(id)a0 devicePrekeys:(id)a1;
- (id)keyRollingTicketWithError:(id *)a0;
- (BOOL)requiresMigration;
- (BOOL)eraseFromKeyChain:(id *)a0;
- (id)publicDeviceIdentityWithError:(id *)a0;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (BOOL)deleteKeyWithTag:(id)a0;
- (void)postMigrationKeychainCleanup;
- (void)unsealMessageAndAttributes:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;

@end
