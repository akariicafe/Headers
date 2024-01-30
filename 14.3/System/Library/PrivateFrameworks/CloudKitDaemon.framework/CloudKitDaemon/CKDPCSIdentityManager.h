@class NSString, CKDAccount, NSMutableDictionary;

@interface CKDPCSIdentityManager : NSObject

@property (retain) CKDAccount *account;
@property (readonly, nonatomic) BOOL isSiloed;
@property (readonly, nonatomic) BOOL forceEnableReadOnlyManatee;
@property (retain) NSString *cachedAccountDSID;
@property (retain) NSMutableDictionary *PCSIdentityWrappersByServiceName;
@property (nonatomic) struct _PCSIdentityData { } *debugIdentity;
@property (nonatomic) BOOL forceSecurityErrorOnIdentityValidation;
@property (nonatomic) BOOL forceManateeUnavailableForUnitTests;
@property (nonatomic) BOOL serviceIsManateeForUnitTests;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL currentServiceIsManatee;

+ (id)overrideKeys;
+ (id)sharedFakeIdentitySetsByServiceByUsername;
+ (struct _PCSIdentitySetData { } *)_copyStingrayIdentitiesForService:(id)a0 forBackingFakeAccount:(id)a1 withError:(id *)a2;
+ (struct _PCSIdentitySetData { } *)_getTestAccountIdentitySetForService:(id)a0 forBackingFakeAccount:(id)a1 withError:(id *)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateAccount:(id)a0;
- (void)clearOverrides;
- (struct _PCSIdentityData { } *)createRandomSharingIdentityWithError:(id *)a0;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData { } *)a0 error:(id *)a1;
- (id)initWithAccount:(id)a0 serviceName:(id)a1 isSiloed:(BOOL)a2 forceEnableReadOnlyManatee:(BOOL)a3;
- (void)identitiesChanged;
- (struct _PCSIdentitySetData { } *)createFullKeychainIdentitySetWithError:(id *)a0;
- (struct _PCSIdentityData { } *)debugSharingIdentity;
- (id)PCSServiceStringFromCKServiceType:(unsigned long long)a0;
- (id)copyPublicKeyForService:(unsigned long long)a0 withError:(id *)a1;
- (id)copyAllPublicKeysForService:(unsigned long long)a0 withError:(id *)a1;
- (struct _PCSPublicIdentityData { } *)copyDiversifiedIdentityForService:(unsigned long long)a0 userIDEntropy:(id)a1 withError:(id *)a2;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)a0 userIDEntropy:(id)a1 withError:(id *)a2;
- (struct _PCSIdentityData { } *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)a0 publicSharingIdentity:(id)a1;
- (struct _PCSPublicIdentityData { } *)createPublicSharingIdentityFromPublicKey:(id)a0 error:(id *)a1;
- (struct _PCSIdentityData { } *)createSharingIdentityFromData:(id)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)copyIdentitySetWithType:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)identitySet:(struct _PCSIdentitySetData { } *)a0 containsPublicKey:(id)a1 error:(id *)a2;
- (BOOL)_checkAndClearPCSTestOverrideForKey:(id)a0;
- (id)internalServicesToCombineWithLiverpoolKey;
- (id)liverpoolPublicKey;
- (void)setOverride:(id)a0 value:(id)a1;
- (BOOL)serviceIsManatee:(id)a0;
- (BOOL)manateeIsAvailableWithError:(id *)a0;
- (struct _PCSIdentitySetData { } *)_copyTestAccountIdentitySetForService:(id)a0 forBackingFakeAccount:(id)a1 withError:(id *)a2;
- (struct _PCSIdentitySetData { } *)_createIdentitySetForService:(id)a0 dsid:(id)a1 error:(id *)a2;
- (id)_cacheIdentitySet:(struct _PCSIdentitySetData { } *)a0 forService:(id)a1;
- (BOOL)_hasCurrentKeyForService:(id)a0 inIdentitySet:(struct _PCSIdentitySetData { } *)a1 withError:(id *)a2;
- (struct _PCSIdentitySetData { } *)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)a0 dsid:(id)a1 error:(id *)a2;
- (struct _PCSIdentitySetData { } *)_copyIdentityForService:(id)a0 useCache:(BOOL)a1 validateCurrentKey:(BOOL)a2 error:(id *)a3;
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData { } *)a0 withService:(unsigned long long)a1 withError:(id *)a2;
- (id)_copyPublicKeyDataForAllIdentitiesInSet:(struct _PCSIdentitySetData { } *)a0 withService:(unsigned long long)a1;
- (id)_addIdentitiesFromServiceNamed:(id)a0 dsid:(id)a1 toMutableSet:(struct _PCSIdentitySetData { } *)a2;

@end
