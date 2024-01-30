@class NSString, NSMutableDictionary, CKDLogicalDeviceContext, CKDAccount;

@interface CKDPCSIdentityManager : NSObject

@property (retain) CKDAccount *account;
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) BOOL forceEnableReadOnlyManatee;
@property (retain) NSString *cachedAccountDSID;
@property (retain) NSMutableDictionary *PCSIdentityWrappersByServiceName;
@property (nonatomic) struct _PCSIdentityData { } *debugIdentity;
@property (nonatomic) BOOL forceSecurityErrorOnIdentityValidation;
@property (nonatomic) BOOL forceManateeUnavailableForUnitTests;
@property (nonatomic) BOOL serviceIsManateeForUnitTests;
@property (nonatomic) BOOL refetchPCSIdentitySet;
@property (nonatomic) unsigned int clientSDKVersion;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL currentServiceIsManatee;

+ (struct _PCSIdentitySetData { } *)_copyStingrayIdentitiesForOptions:(id)a0 withError:(id *)a1;
+ (struct _PCSIdentitySetData { } *)_copyStingrayIdentitiesForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (id)_generatePCSIdentityOptionsForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (struct _PCSIdentitySetData { } *)_getTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (BOOL)_rollTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
+ (BOOL)credentialsAreValidForAccount:(id)a0;
+ (id)overrideKeys;
+ (id)sharedFakeIdentitySetsByServiceByUsername;
+ (id)sharedMockIdentitySetsByServiceByIdentifier;

- (id)_cacheIdentitySet:(struct _PCSIdentitySetData { } *)a0 forService:(id)a1;
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData { } *)a0 withService:(unsigned long long)a1 withError:(id *)a2;
- (void)clearOverrides;
- (id)copyAllPublicKeysForService:(unsigned long long)a0 withError:(id *)a1;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData { } *)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)createFullKeychainIdentitySetWithError:(id *)a0;
- (id)internalServicesToCombineWithLiverpoolKey;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)a0 userIDEntropy:(id)a1 withError:(id *)a2;
- (BOOL)liverpoolServiceOwnsPublicID:(id)a0;
- (struct _PCSIdentityData { } *)createSharingIdentityFromData:(id)a0 error:(id *)a1;
- (void)setPCSServiceNameOverwrite:(id)a0;
- (void)setOverride:(id)a0 value:(id)a1;
- (void)identitiesChanged;
- (struct _PCSPublicIdentityData { } *)createPublicSharingIdentityFromPublicKey:(id)a0 error:(id *)a1;
- (BOOL)_checkAndClearPCSTestOverrideForKey:(id)a0;
- (id)_copyStingrayIdentitiesForBackingMockAccount:(id)a0 withError:(id *)a1;
- (struct _PCSIdentityData { } *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)a0 publicSharingIdentity:(id)a1;
- (BOOL)isManateeAvailableWithError:(id *)a0;
- (struct _PCSIdentityData { } *)createRandomSharingIdentityWithError:(id *)a0;
- (struct _PCSIdentitySetData { } *)_copyTestAccountIdentitySetForService:(id)a0 forBackingExplicitCredentialsAccount:(id)a1 withError:(id *)a2;
- (struct _PCSIdentitySetData { } *)_copyTestAccountIdentitySetForService:(id)a0 forBackingMockAccount:(id)a1 withError:(id *)a2;
- (BOOL)_setStingrayIdentitySet:(struct _PCSIdentitySetData { } *)a0 forServiceName:(id)a1 backingMockAccount:(id)a2 withError:(id *)a3;
- (struct _PCSIdentitySetData { } *)copyIdentitySetWithType:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)dealloc;
- (BOOL)_hasCurrentKeyForService:(id)a0 inIdentitySet:(struct _PCSIdentitySetData { } *)a1 withError:(id *)a2;
- (void)updateAccount:(id)a0;
- (id)copyPublicKeyForService:(unsigned long long)a0 withError:(id *)a1;
- (id)initWithAccount:(id)a0 deviceContext:(id)a1 serviceName:(id)a2 forceEnableReadOnlyManatee:(BOOL)a3 clientSDKVersion:(unsigned int)a4;
- (BOOL)serviceIsManatee:(id)a0;
- (struct _PCSPublicIdentityData { } *)copyDiversifiedIdentityForService:(unsigned long long)a0 userIDEntropy:(id)a1 withError:(id *)a2;
- (id)_addIdentitiesFromServiceNamed:(id)a0 dsid:(id)a1 toMutableSet:(struct _PCSIdentitySetData { } *)a2;
- (id)_copyPublicKeyDataForAllIdentitiesInSet:(struct _PCSIdentitySetData { } *)a0 withService:(unsigned long long)a1;
- (struct _PCSIdentityData { } *)debugSharingIdentity;
- (struct _PCSIdentitySetData { } *)_copyIdentityForService:(id)a0 useCache:(BOOL)a1 validateCurrentKey:(BOOL)a2 error:(id *)a3;
- (struct _PCSIdentitySetData { } *)_getTestAccountIdentitySetForService:(id)a0 forBackingMockAccount:(id)a1 withError:(id *)a2;
- (id)PCSServiceStringFromCKServiceType:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct _PCSIdentitySetData { } *)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)a0 dsid:(id)a1 error:(id *)a2;
- (struct _PCSIdentitySetData { } *)_createIdentitySetForService:(id)a0 dsid:(id)a1 error:(id *)a2;
- (BOOL)identitySet:(struct _PCSIdentitySetData { } *)a0 containsPublicKey:(id)a1 error:(id *)a2;

@end
