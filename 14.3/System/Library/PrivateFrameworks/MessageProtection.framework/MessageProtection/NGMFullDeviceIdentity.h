@class NSMutableArray, SigningKey;

@interface NGMFullDeviceIdentity : NSObject

@property (retain, nonatomic) SigningKey *deviceSigningKey;
@property (retain, nonatomic) NSMutableArray *devicePrekeys;

+ (id)identityWithAccess:(id)a0 error:(id *)a1;
+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (BOOL)shouldRollEncryptionIdentity;
- (BOOL)requiresMigration;
- (void).cxx_destruct;
- (id)initWithSigningKey:(id)a0 devicePrekeys:(id)a1;
- (void)postMigrationKeychainCleanup;
- (void)unsealMessageAndAttributes:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (id)dataRepresentationWithError:(id *)a0;
- (BOOL)deleteKeyWithTag:(id)a0;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (id)keyRollingTicketWithError:(id *)a0;
- (id)publicDeviceIdentityWithError:(id *)a0;
- (BOOL)eraseFromKeyChain:(id *)a0;

@end
