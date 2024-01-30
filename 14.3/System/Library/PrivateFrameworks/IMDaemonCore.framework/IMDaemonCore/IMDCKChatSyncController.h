@class CKServerChangeToken, IMDCKChatSyncCKOperationFactory, IMDChatRegistry, IMDRecordZoneManager, NSObject, CKRecord;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore, OS_xpc_object;

@interface IMDCKChatSyncController : IMDCKAbstractSyncController

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDChatRegistry *chatRegistry;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) id<IMDCKSyncTokenStore> syncTokenStore;
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (retain, nonatomic) IMDCKChatSyncCKOperationFactory *CKOperationFactory;
@property (retain, nonatomic) CKRecord *lockRecord;
@property (retain, nonatomic) CKRecord *manateeLockRecord;
@property (retain, nonatomic) CKRecord *stingRayLockRecord;
@property NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL fetchedChatsDuringLastSync;

+ (id)sharedInstance;

- (void)deleteChatZone;
- (id)init;
- (void)dealloc;
- (void)_scheduleOperation:(id)a0;
- (long long)syncControllerRecordType;
- (id)_randomSalt;
- (void)anyChatExistsOnServerWithCompletion:(id /* block */)a0;
- (id)initWithSyncTokenStore:(id)a0;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (id)_recordKeyManagerSharedInstance;
- (void)_processRecordDeletion:(id)a0;
- (void)_processModifyRecordCompletion:(id)a0 deletedRecordIDs:(id)a1 error:(id)a2 completionBlock:(id /* block */)a3;
- (id)_changeTokenKey;
- (void)deleteChatSyncToken;
- (void)syncChatsWithType:(long long)a0 withActivity:(id)a1 withCompletion:(id /* block */)a2;
- (void)syncPendingDeletionWithCompletion:(id /* block */)a0;
- (void)_migrateServerChangeToken;
- (void)setLockRecord:(id)a0 isUsingStingRay:(BOOL)a1;
- (void)_updateChatUsingCKRecord:(id)a0;
- (void)_markChatAsDefferedForSyncingUsingRecord:(id)a0;
- (void)_processModifyPerRecordCallBack:(id)a0 error:(id)a1 isUsingStingRay:(BOOL)a2;
- (unsigned long long)_numberOfChatsToWrite;
- (id)_copyChatsToUploadWithLimit:(unsigned long long)a0;
- (void)_logGreenTeaLogsForChats:(id)a0;
- (id)_newckRecordsFromChats:(id)a0;
- (id)lockRecordForStingRay:(BOOL)a0;
- (id)_generateLockRecord;
- (void)_writeDirtyChatsToCloudKitWithCompletion:(id /* block */)a0 isUsingStingRay:(BOOL)a1;
- (BOOL)_shouldResyncChatsForError:(id)a0;
- (void)_writeCKRecordsToChatZone:(id)a0 isUsingStingRay:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)_chatZoneID;
- (unsigned long long)_numberOfChatsToFetch;
- (void)_kickOffWriteOnCKQueueWithCompletion:(id /* block */)a0 isUsingStingRay:(BOOL)a1;
- (BOOL)_chatZoneCreated;
- (void)_kickOffWriteIfNeededForSyncType:(long long)a0 completion:(id /* block */)a1 isUsingStingRay:(BOOL)a2;
- (void)_clearStingRaySyncToken;
- (id)_fetchChatRecordOperation;
- (void)_processRecordChanged:(id)a0 isUsingStingRay:(BOOL)a1;
- (void)_processRecordZoneChangeTokenUpdated:(id)a0 zoneID:(id)a1 clienChangeToken:(id)a2;
- (void)_processRecordZoneFetchCompletion:(id)a0 zoneID:(id)a1 clientChangeTokenData:(id)a2 moreComing:(BOOL)a3 error:(id)a4;
- (void)_processFetchRecordChangesCompleted:(id)a0 completion:(id /* block */)a1 isUsingStingRay:(BOOL)a2 syncType:(long long)a3;
- (void)_anyChatExistsOnServerWithResultsLimit:(int)a0 changeToken:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldMarkAllChatsAsNeedingSync;
- (void)_hasMarkedAllChatsAsNeedingSync;
- (void)__syncChatsWithCloudKit:(long long)a0 attemptCount:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (BOOL)_eligibleForTruthZone;
- (void)_syncChatsWithCloudKitWithCompletionType:(long long)a0 syncChatsCompletionBlock:(id /* block */)a1;
- (void)_needsToMarkAllChatsAsNeedingSync;
- (id)_copyRecordIDsToDelete;
- (void)_handleChatDeletionCompletionForRecordIDs:(id)a0 error:(id)a1;
- (void)_resetChatSyncStateForRecord:(id)a0;
- (BOOL)_lockRecordHadConflict:(id)a0;

@end
