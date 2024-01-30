@class IDSMPFullLegacyIdentity, IDSNGMFullDeviceIdentity, NSData, NSNumber;

@interface IDSMPFullDeviceIdentityContainer : NSObject

@property (retain, nonatomic) NSData *cachedLegacySerializedData;
@property (readonly, nonatomic) IDSMPFullLegacyIdentity *legacyFullIdentity;
@property (readonly, nonatomic) IDSNGMFullDeviceIdentity *ngmFullDeviceIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

+ (id)_identityWithLegacyFullIdentity:(id)a0 ngmFullDeviceIdentity:(id)a1 ngmVersion:(id)a2 legacyFullIdentitySerializedData:(id)a3 error:(id *)a4;
+ (id)identityWithLegacyFullIdentity:(id)a0 ngmFullDeviceIdentity:(id)a1 ngmVersion:(id)a2 error:(id *)a3;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)dataRepresentationWithError:(id *)a0;
- (id)_legacyUnsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (id)initWithFullLegacyIdentity:(id)a0 ngmFullDeviceidentity:(id)a1 ngmVersion:(id)a2 legacyFullIdentitySerializedData:(id)a3;
- (id)_ngmValidateEncryptingAndSigningIdentity:(id)a0 forMessage:(id)a1;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 usingIdentityWithIdentifier:(id)a2;
- (id)description;
- (id)_ngmSynchronouslyUnsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)publicIdentityWithError:(id *)a0;
- (unsigned long long)hash;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 usingIdentityWithIdentifier:(id)a2 error:(id *)a3;
- (id)debugDescription;
- (id)_ngmUnsealMessage:(id)a0 signedByPublicIdentity:(id)a1;

@end
