@class CKShare, CKRecordID;

@interface CKDModifyShareHandler : CKDModifyRecordHandler

@property (nonatomic) BOOL haveAddedOwnerToShare;
@property (nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (nonatomic) struct _PCSPublicIdentityData { } *selfPPPCSOwnerIdentity;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKRecordID *shareID;

+ (id)modifyHandlerForDeleteWithShareID:(id)a0 operation:(id)a1;
+ (id)modifyHandlerWithShare:(id)a0 operation:(id)a1;

- (void)savePCSDataToCache;
- (void)setServerRecord:(id)a0;
- (BOOL)_serializePCSDataForShareWithError:(id *)a0;
- (id)_removePrivateParticipant:(id)a0 fromInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (void)clearProtectionDataForRecord;
- (void)noteSideEffectRecordAbsent:(id)a0;
- (void)noteSideEffectRecordPendingModify:(id)a0;
- (id)_publicKeyForParticipant:(id)a0 error:(id *)a1;
- (unsigned long long)serviceType;
- (void)noteSideEffectRecordPendingDelete:(id)a0;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id /* block */)a0;
- (BOOL)_updateSharePublicPCSWithError:(id *)a0;
- (void)fetchSharePCSData;
- (unsigned long long)invitedPCSPermissionForParticipant:(id)a0;
- (void)prepareForSave;
- (void)_fetchSharePCSData;
- (BOOL)isShare;
- (void)_alignParticipantPermissions;
- (id)sideEffectRecordIDs;
- (BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)a0 zonePCSData:(id)a1;
- (BOOL)_cleanPublicPCSforShareWithError:(id *)a0;
- (id)_handleSharePCSData:(id)a0 zonePCSData:(id)a1;
- (BOOL)isCloudDocsContainer;
- (id)_createNewSharePCSDataWithError:(id *)a0;
- (void)_setupParticipantsProtectionInfos;
- (id)_removePublicKey:(id)a0 fromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (void)dealloc;
- (BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)a0;
- (void)updateParticipantsForFetchedShare:(id)a0 error:(id)a1;
- (struct _PCSPublicIdentityData { } *)createPublicIdentityFromPublicKeyForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_modifyRoleForParticipant:(id)a0 invitedPCS:(struct _OpaquePCSShareProtection { } *)a1 shareeIdentities:(id)a2 error:(id *)a3;
- (id)_ensurePrivateParticipant:(id)a0 isInInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (void)_addPublicKeyToSelfParticipant;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)a0 error:(id)a1;

@end
