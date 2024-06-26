@class NSData, CKContainerID, NSString, NSDate, NSMutableDictionary, CKDAccount, NSMutableSet, NSObject, CKDLogicalDeviceContext, CKDPCSIdentityManager;
@protocol OS_dispatch_source, OS_dispatch_queue, CKDContainerScopedUserIDProvider;

@interface CKDPCSManager : NSObject <CKDPCSTestOverrideProvider, CKDProtocolTranslatorIdentityDelegate>

@property (retain) CKDAccount *account;
@property (readonly, weak, nonatomic) id<CKDContainerScopedUserIDProvider> containerScopedUserIDProvider;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) NSString *responsibleBundleID;
@property (readonly, nonatomic) BOOL forceEnableReadOnlyManatee;
@property (readonly, nonatomic) unsigned long long mmcsEncryptionSupport;
@property (readonly, nonatomic) BOOL useZoneWidePCS;
@property (readonly, nonatomic) CKDPCSIdentityManager *identityManager;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDateForCurrentService;
@property (retain, nonatomic) NSMutableSet *missingIdentityPublicKeys;
@property (retain, nonatomic) NSMutableSet *servicesWithMissingIdentities;
@property (retain, nonatomic) NSMutableSet *undecryptablePCSDataHashes;
@property (retain, nonatomic) NSData *boundaryKeyData;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *pcsTestOverrides;
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) NSString *pcsServiceName;
@property (readonly, nonatomic) BOOL currentServiceIsManatee;
@property (readonly, nonatomic) unsigned long long serviceTypeForSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noMatchingIdentityErrorForPCSError:(struct __CFError { } *)a0 withErrorCode:(long long)a1 description:(id)a2;
+ (id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection { } *)a0;
+ (id)_legacyServiceNameForContainerID:(id)a0;
+ (id)allProtectionIdentifiersFromShareProtection:(struct _OpaquePCSShareProtection { } *)a0;
+ (id)publicKeyIDFromIdentity:(struct _OpaquePCSShareProtection { } *)a0;
+ (id)pcsOverrideKeys;

- (id)initWithContainer:(id)a0;
- (void)_locked_pcsDataFromFetchedShare:(id)a0 withPublicSharingKey:(id)a1 withServiceType:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)pcsDataFromFetchedShare:(id)a0 withPublicSharingKey:(id)a1 withServiceType:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)keyRollIfNeededForPerRecordPCS:(id)a0;
- (id)createProtectionInfoFromOONPrivateKey:(id)a0 privateToken:(id)a1 OONProtectionInfo:(id)a2 error:(id *)a3;
- (id)keyRollForZoneWideShareRecordPCS:(id)a0 sharedZonePCS:(id)a1 sharePCS:(id)a2;
- (id)updateIdentityAndRollKeyForZonePCS:(struct _OpaquePCSShareProtection { } *)a0 usingServiceIdentityWithType:(unsigned long long)a1;
- (void)pcsDataFromFetchedShare:(id)a0 completionHandler:(id /* block */)a1;
- (id)updateZoneIdentityForPCS:(struct _OpaquePCSShareProtection { } *)a0 usingZonePCS:(struct _OpaquePCSShareProtection { } *)a1 bypassAllowlistedContainers:(BOOL)a2;
- (id)addSharingIdentity:(struct _PCSIdentityData { } *)a0 toSharePCS:(struct _OpaquePCSShareProtection { } *)a1 permission:(unsigned long long)a2;
- (BOOL)zonePCSNeedsKeyRolled:(struct _OpaquePCSShareProtection { } *)a0 bypassAllowlistedContainers:(BOOL)a1;
- (id)repairZonePCSData:(id)a0 error:(id *)a1;
- (void)_locked_markMissingIdentitiesFromFailedDecryptError:(struct __CFError { } *)a0 serviceName:(id)a1;
- (void)createZonePCSWithCompletionHandler:(id /* block */)a0;
- (struct _OpaquePCSShareProtection { } *)_copyShareProtectionFromExportedData:(id)a0 ofType:(unsigned long long)a1 identities:(struct _PCSIdentitySetData { } *)a2 error:(struct __CFError **)a3;
- (BOOL)zonePCSNeedsUpdate:(struct _OpaquePCSShareProtection { } *)a0;
- (void)_locked_decryptCurrentPerParticipantPCSDataOnSharePCS:(id)a0 completionHandler:(id /* block */)a1;
- (struct _PCSPublicIdentityData { } *)copyPublicAuthorshipIdentityFromPCS:(struct _OpaquePCSShareProtection { } *)a0;
- (id)removeEncryptedPCS:(id)a0 fromSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_addIdentity:(struct _PCSIdentitySetData { } *)a0 withService:(unsigned long long)a1 toPCS:(struct _OpaquePCSShareProtection { } *)a2;
- (id)etagFromPCSData:(id)a0;
- (id)wrapEncryptedData:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 withContextString:(id)a2;
- (id)decryptChainPCSForRecordPCS:(id)a0;
- (void)synchronizeUserKeyRegistryForServiceType:(unsigned long long)a0 shouldThrottle:(BOOL)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendCoreAnalyticsEventForKeySync:(id)a0;
- (void)markUndecryptablePCS:(id)a0;
- (BOOL)_checkUnitTestOverridesForDecryptionFailuresWithState:(BOOL)a0 shouldRetry:(BOOL *)a1 error:(id *)a2;
- (id)removeSharingIdentity:(struct _PCSIdentityData { } *)a0 fromSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (struct _OpaquePCSShareProtection { } *)createZonePCSFromData:(id)a0 usingServiceIdentityWithType:(unsigned long long)a1 error:(id *)a2;
- (id)removePublicKeyID:(id)a0 fromPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (BOOL)sharingFingerprintsContainPublicKeyWithData:(id)a0 error:(id *)a1;
- (id)removePublicIdentity:(struct _PCSPublicIdentityData { } *)a0 fromSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (struct _OpaquePCSShareProtection { } *)createSharePCSFromEncryptedData:(id)a0 error:(id *)a1;
- (id)generateOctopusAnonymousUserID;
- (id)etagFromZonePCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (struct _OpaquePCSShareProtection { } *)createSharePCSFromData:(id)a0 sharingIdentity:(struct _PCSIdentityData { } *)a1 error:(id *)a2;
- (id)removePrivateKeysForKeyIDs:(id)a0 fromPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)rollMasterKeyForRecordPCS:(struct _OpaquePCSShareProtection { } *)a0;
- (id)etagFromRecordPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (id)copyPublicKeyForService:(unsigned long long)a0 withError:(id *)a1;
- (id)addIdentityForService:(unsigned long long)a0 toPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)unwrapEncryptedData:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 inContext:(id)a2;
- (struct _OpaquePCSShareProtection { } *)createChainPCSWithError:(id *)a0;
- (BOOL)_isKeyRollingUnitTestContainerID:(id)a0;
- (void)createZonePCSFromData:(id)a0 usingServiceIdentityWithType:(unsigned long long)a1 zonePCSModificationDate:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)updateSigningIdentityOnPCS:(struct _OpaquePCSShareProtection { } *)a0 usingSignedPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (void)_locked_preflightIdentitiesForService:(unsigned long long)a0 withSyncKeyRegistryRetry:(BOOL)a1 keySyncAnalytics:(id)a2 completionHandler:(id /* block */)a3;
- (struct _OpaquePCSShareProtection { } *)createSharePCSFromData:(id)a0 ofType:(unsigned long long)a1 withService:(unsigned long long)a2 error:(id *)a3;
- (struct _PCSPublicIdentityData { } *)createPublicSharingIdentityFromPublicKey:(id)a0 error:(id *)a1;
- (id)rollMasterKeyForRecordPCS:(struct _OpaquePCSShareProtection { } *)a0 bypassAllowlistedContainers:(BOOL)a1;
- (BOOL)isPreviouslyUndecryptablePCS:(id)a0;
- (struct _OpaquePCSShareProtection { } *)createEmptySharePCSOfType:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_addPublicIdentityForService:(unsigned long long)a0 toSharePCS:(struct _OpaquePCSShareProtection { } *)a1 withError:(id *)a2;
- (BOOL)_checkAndClearPCSTestOverrideForKey:(id)a0;
- (BOOL)canRollShareKeys;
- (void)decryptPCSDataOnSharePCS:(id)a0 completionHandler:(id /* block */)a1;
- (id)createSignatureWithIdentity:(struct _PCSIdentityData { } *)a0 dataToBeSigned:(id)a1 error:(id *)a2;
- (id)referenceIdentifierStringFromAssetKey:(id)a0;
- (BOOL)containerSupportsEnhancedContext;
- (struct _PCSIdentityData { } *)debugSharingIdentity;
- (BOOL)removeSharePCS:(struct _OpaquePCSShareProtection { } *)a0 fromRecordPCS:(struct _OpaquePCSShareProtection { } *)a1 error:(id *)a2;
- (void)updateAccount:(id)a0 clearPCSCacheHandler:(id /* block */)a1;
- (void)_onSynchronizeQueue:(id /* block */)a0;
- (id)unwrapEncryptedData:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 withContextString:(id)a2;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData { } *)a0 error:(id *)a1;
- (BOOL)_checkPCSTestOverrideForKey:(id)a0;
- (BOOL)_isAllowlistedKeyRollingContainerID:(id)a0;
- (id)generateAnonymousCKUserIDForCurrentUserInShare:(id)a0 containerID:(id)a1 acceptA2AShareUsingVersionOneAnonymousIdentifier:(BOOL)a2;
- (void).cxx_destruct;
- (id)dataFromRecordPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (void)_lockedBoundaryKeyDataWithCompletionHandler:(id /* block */)a0;
- (id)participantPublicKeyForServiceType:(unsigned long long)a0 error:(id *)a1;
- (struct _OpaquePCSShareProtection { } *)createSharePCSFromData:(id)a0 ofType:(unsigned long long)a1 withService:(unsigned long long)a2 logFailure:(BOOL)a3 error:(id *)a4;
- (id)getCurrentIdentityExportedPrivateKey;
- (id)_pcsObjectKindForCKDPCSBlobType:(unsigned long long)a0;
- (void)createIngestedPPPCSDataFromInvitationData:(id)a0 completionHandler:(id /* block */)a1;
- (void)setOwnerIdentity:(struct _PCSPublicIdentityData { } *)a0 onPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (BOOL)removePublicKeys:(id)a0 fromPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)etagFromSharePCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (struct _OpaquePCSShareProtection { } *)createEmptySignedSharePCSOfType:(unsigned long long)a0 forPCSServiceType:(unsigned long long)a1 withError:(id *)a2;
- (id)sharingIdentityDataFromPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (struct _OpaquePCSShareProtection { } *)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection { } *)a0 sharePCS:(struct _OpaquePCSShareProtection { } *)a1 createLite:(BOOL)a2 error:(id *)a3;
- (void)pcsDataFromFetchedShare:(id)a0 withServiceType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)createNewSharePCSDataForShareWithID:(id)a0 withPublicSharingKey:(id)a1 addDebugIdentity:(BOOL)a2 error:(id *)a3;
- (id)publicKeyDataFromPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (id)wrapAssetKey:(id)a0 withRecordPCS:(struct _OpaquePCSShareProtection { } *)a1 inContext:(id)a2 withError:(id *)a3;
- (id)getAllPublicKeysForExportedData:(id)a0 error:(id *)a1;
- (struct _PCSPublicIdentityData { } *)copyDiversifiedIdentityForService:(unsigned long long)a0 withError:(id *)a1;
- (void)_locked_createZonePCSWithSyncKeyRegistryRetry:(BOOL)a0 keySyncAnalytics:(id)a1 completionHandler:(id /* block */)a2;
- (struct _OpaquePCSShareProtection { } *)createPCSObjectFromData:(id)a0 ofType:(unsigned long long)a1 sharedToPCS:(struct _OpaquePCSShareProtection { } *)a2 logFailure:(BOOL)a3 error:(id *)a4;
- (struct _OpaquePCSShareProtection { } *)createZonePCSWithError:(id *)a0;
- (BOOL)availableIdentityForService:(unsigned long long)a0 error:(id *)a1;
- (BOOL)decryptSharedZonePCSData:(id)a0 withInvitedPCS:(struct _OpaquePCSShareProtection { } *)a1 error:(id *)a2;
- (struct _OpaquePCSShareProtection { } *)createSharePublicPCSWithIdentity:(struct _PCSIdentityData { } *)a0 error:(id *)a1;
- (unsigned long long)publicKeyVersionForServiceType:(unsigned long long)a0;
- (void)triggerAutoSysdiagnoseIfNecessaryForError:(id)a0 encryptedData:(id)a1 pcs:(struct _OpaquePCSShareProtection { } *)a2;
- (void)boundaryKeyDataWithCompletionHandler:(id /* block */)a0;
- (id)dataFromZonePCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (id)_pcsTestOverrideForKey:(id)a0;
- (id)dataFromSharePCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (id)wrapEncryptedData:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 inContext:(id)a2;
- (void)_createPCSFromData:(id)a0 ofType:(unsigned long long)a1 usingPCSServiceType:(unsigned long long)a2 tryDecryptingWithOtherServices:(BOOL)a3 withSyncKeyRegistryRetry:(BOOL)a4 zonePCSModificationDate:(id)a5 completionHandler:(id /* block */)a6;
- (struct _PCSIdentityData { } *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)a0 publicSharingIdentity:(id)a1;
- (BOOL)findSelfParticipantOnShareMetadata:(id)a0 invitationToken:(id)a1;
- (struct _OpaquePCSShareProtection { } *)createPCSObjectFromData:(id)a0 ofType:(unsigned long long)a1 sharedToPCS:(struct _OpaquePCSShareProtection { } *)a2 error:(id *)a3;
- (void)_locked_createPCSFromData:(id)a0 ofType:(unsigned long long)a1 usingPCSServiceType:(unsigned long long)a2 tryDecryptingWithOtherServices:(BOOL)a3 withSyncKeyRegistryRetry:(BOOL)a4 zonePCSModificationDate:(id)a5 keySyncAnalytics:(id)a6 completionHandler:(id /* block */)a7;
- (void)dealloc;
- (void)createZonePCSWithSyncKeyRegistryRetry:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)a0 withError:(id *)a1;
- (void)_locked_decryptPCSDataOnSharePCS:(id)a0 withPublicSharingKey:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)zonePCSNeedsKeyRolled:(struct _OpaquePCSShareProtection { } *)a0;
- (id)unwrapAssetKey:(id)a0 withRecordPCS:(struct _OpaquePCSShareProtection { } *)a1 inContext:(id)a2 withError:(id *)a3;
- (id)_unwrapEncryptedData:(id)a0 usingKeyID:(id)a1 forPCS:(struct _OpaquePCSShareProtection { } *)a2 withContextString:(id)a3;
- (id)copyAllPublicKeysForService:(unsigned long long)a0 withError:(id *)a1;
- (struct _OpaquePCSShareProtection { } *)createRecordPCSWithEncryptedZonePCS:(struct __CFData { } *)a0 sharePCS:(struct _OpaquePCSShareProtection { } *)a1 createLite:(BOOL)a2 error:(id *)a3;
- (void)addEntriesForUnitTestOverrides:(id)a0;
- (BOOL)serviceTypeIsManatee:(unsigned long long)a0;
- (id)addPublicIdentity:(struct _PCSPublicIdentityData { } *)a0 toSharePCS:(struct _OpaquePCSShareProtection { } *)a1 permission:(unsigned int)a2;
- (struct _OpaquePCSShareProtection { } *)createSharePCSOfType:(unsigned long long)a0 forPCSServiceType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addSharePCS:(struct _OpaquePCSShareProtection { } *)a0 toRecordPCS:(struct _OpaquePCSShareProtection { } *)a1 error:(id *)a2;
- (id)updateServiceIdentityOnZonePCS:(struct _OpaquePCSShareProtection { } *)a0;
- (void)preflightIdentitiesForService:(unsigned long long)a0 withSyncKeyRegistryRetry:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)canDecryptInvitedProtectionData:(id)a0 participantProtectionInfo:(id)a1 serviceType:(unsigned long long)a2 error:(id *)a3;
- (id)referenceSignatureFromAssetKey:(id)a0;
- (id)rollIdentityForSharePCS:(struct _OpaquePCSShareProtection { } *)a0 removeAllExistingPrivateKeys:(BOOL)a1 error:(id *)a2;
- (BOOL)addSharePCS:(struct _OpaquePCSShareProtection { } *)a0 toRecordPCS:(struct _OpaquePCSShareProtection { } *)a1 permission:(unsigned long long)a2 error:(id *)a3;
- (id)addIdentityBackToPCS:(struct _OpaquePCSShareProtection { } *)a0;
- (struct _PCSIdentityData { } *)createSharingIdentityFromData:(id)a0 error:(id *)a1;
- (struct _OpaquePCSShareProtection { } *)createSharePCSFromData:(id)a0 sharePrivateKey:(id)a1 error:(id *)a2;
- (id)keyRollForZoneWideShareWithZonePCS:(id)a0 sharePCS:(id)a1;
- (struct _PCSIdentityData { } *)createRandomSharingIdentityWithError:(id *)a0;
- (id)newAssetKeyWithType:(unsigned long long)a0 withError:(id *)a1;
- (struct _OpaquePCSShareProtection { } *)createSharePCSFromData:(id)a0 sharingIdentity:(struct _PCSIdentityData { } *)a1 logFailure:(BOOL)a2 error:(id *)a3;

@end
