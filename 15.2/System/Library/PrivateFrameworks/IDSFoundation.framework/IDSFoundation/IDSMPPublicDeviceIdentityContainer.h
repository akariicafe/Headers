@class IDSMPPublicLegacyIdentity, IDSNGMPublicDeviceIdentity, NSNumber;

@interface IDSMPPublicDeviceIdentityContainer : NSObject

@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyPublicIdentity;
@property (readonly, nonatomic) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

+ (id)identityWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2 error:(id *)a3;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)initWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2;
- (id)dataRepresentationWithError:(id *)a0;
- (id)_ngmSealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedWithFullIdentity:(id)a2 error:(id *)a3;
- (id)description;
- (id)_legacySealMessage:(id)a0 signedWithFullIdentity:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 usedIdentityWithIdentifier:(id *)a3 error:(id *)a4;
- (unsigned long long)hash;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 usingIdentitiesWithIdentifier:(id)a3 error:(id *)a4;
- (id)debugDescription;

@end
