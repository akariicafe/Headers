@class IDSMPPublicLegacyIdentity, IDSNGMPublicDeviceIdentity, NSNumber;

@interface IDSMPPublicDeviceIdentityContainer : NSObject

@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyPublicIdentity;
@property (readonly, nonatomic) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

+ (id)identityWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2 error:(id *)a3;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2;
- (id)_legacySealMessage:(id)a0 signedWithFullIdentity:(id)a1 error:(id *)a2;
- (id)_ngmSealMessage:(id)a0 signedWithFullIdentity:(id)a1 error:(id *)a2;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 usingIdentitiesWithIdentifier:(id)a2 error:(id *)a3;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 usedIdentityWithIdentifier:(id *)a2 error:(id *)a3;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
