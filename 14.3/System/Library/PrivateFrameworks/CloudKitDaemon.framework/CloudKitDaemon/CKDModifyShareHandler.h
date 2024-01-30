@class CKShare, CKRecordID;

@interface CKDModifyShareHandler : CKDModifyRecordHandler

@property (nonatomic) BOOL haveAddedOwnerToShare;
@property (nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKRecordID *shareID;

+ (id)modifyHandlerWithShare:(id)a0 operation:(id)a1;
+ (id)modifyHandlerForDeleteWithShareID:(id)a0 operation:(id)a1;

- (BOOL)isShare;
- (void)setServerRecord:(id)a0;
- (unsigned long long)serviceType;
- (void)_fetchSharePCSData;
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)a0 error:(id)a1;
- (id)_createNewSharePCSDataWithError:(id *)a0;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id /* block */)a0;
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)a0 zonePCSData:(id)a1;
- (id)_handleSharePCSData:(id)a0 zonePCSData:(id)a1;
- (void)_addPublicKeyToSelfParticipant;
- (void)_setupParticipantsProtectionInfos;
- (BOOL)_updateSharePublicPCSWithError:(id *)a0;
- (BOOL)_serializePCSDataForShareWithError:(id *)a0;
- (void)_alignParticipantPermissions;
- (void)prepareForSave;
- (BOOL)_cleanPublicPCSforShareWithError:(id *)a0;
- (id)_ensurePrivateParticipant:(id)a0 isInInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (BOOL)isCloudDocsContainer;
- (BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a0 error:(id *)a1;
- (id)_removePublicKey:(id)a0 fromInvitedPCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_removePrivateParticipant:(id)a0 fromInvitedSharePCS:(struct _OpaquePCSShareProtection { } *)a1;
- (id)_publicKeyForParticipant:(id)a0 error:(id *)a1;
- (struct _PCSPublicIdentityData { } *)createPublicIdentityFromPublicKeyForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)a0;
- (void)clearProtectionDataForRecord;
- (void)savePCSDataToCache;
- (id)sideEffectRecordIDs;
- (void)noteSideEffectRecordPendingModify:(id)a0;
- (void)noteSideEffectRecordAbsent:(id)a0;
- (void)noteSideEffectRecordPendingDelete:(id)a0;
- (void)fetchSharePCSData;
- (void)updateParticipantsForFetchedShare:(id)a0 error:(id)a1;

@end
