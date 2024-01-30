@class CKServerChangeToken, IMDCKChatSyncCKOperationFactory, IMDChatRegistry, IMDRecordZoneManager, NSObject, CKRecord;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;

@interface IMDCKChatSyncController : IMDCKAbstractSyncController

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDChatRegistry *chatRegistry;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) id<IMDCKSyncTokenStore> syncTokenStore;
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (retain, nonatomic) IMDCKChatSyncCKOperationFactory *CKOperationFactory;
@property (retain, nonatomic) CKRecord *lockRecord;
@property (nonatomic) BOOL fetchedChatsDuringLastSync;

+ (id)sharedInstance;

- (void)_scheduleOperation:(id)a0;
- (void)deleteChatZone;
- (long long)syncControllerRecordType;
- (id)init;
- (void)dealloc;
- (id)_randomSalt;
- (void)anyChatExistsOnServerWithActivity:(id)a0 completion:(id /* block */)a1;
- (id)initWithSyncTokenStore:(id)a0;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (id)_recordKeyManagerSharedInstance;
- (void)_kickOffWriteOnCKQueueWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)_processRecordChanged:(id)a0;
- (void)_processRecordDeletion:(id)a0;
- (void)_processModifyRecordCompletion:(id)a0 deletedRecordIDs:(id)a1 error:(id)a2 completionBlock:(id /* block */)a3;
- (void)_kickOffWriteIfNeededForSyncType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (id)_changeTokenKey;
- (void)deleteChatSyncToken;
- (void)syncChatsWithType:(long long)a0 withActivity:(id)a1 completion:(id /* block */)a2;
- (void)syncPendingDeletionWithCompletion:(id /* block */)a0;
- (void)_migrateServerChangeToken;
- (void)_updateChatUsingCKRecord:(id)a0 onRead:(BOOL)a1 didSucceed:(BOOL)a2;
- (void)_markChatAsDefferedForSyncingUsingRecord:(id)a0;
- (void)_resolveChatConflictUsingCKRecord:(id)a0 localGUID:(id)a1;
- (void)_processModifyPerRecordCallBack:(id)a0 error:(id)a1 recordIDtoGUIDmap:(id)a2;
- (unsigned long long)_numberOfChatsToWrite;
- (id)_copyChatsToUploadWithLimit:(unsigned long long)a0;
- (void)_logGreenTeaLogsForChats:(id)a0;
- (id)_newckRecordsFromChats:(id)a0;
- (id)_generateLockRecord;
- (void)_writeDirtyChatsToCloudKitWithActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldResyncChatsForError:(id)a0;
- (void)_writeCKRecordsToChatZone:(id)a0 activity:(id)a1 withCompletion:(id /* block */)a2;
- (id)_chatZoneID;
- (unsigned long long)_numberOfChatsToFetch;
- (BOOL)_chatZoneCreated;
- (id)_fetchChatRecordOperationWithActivity:(id)a0;
- (void)_processRecordZoneChangeTokenUpdated:(id)a0 zoneID:(id)a1 clienChangeToken:(id)a2;
- (void)_processRecordZoneFetchCompletion:(id)a0 zoneID:(id)a1 clientChangeTokenData:(id)a2 moreComing:(BOOL)a3 error:(id)a4;
- (void)_processFetchRecordChangesCompleted:(id)a0 activity:(id)a1 completion:(id /* block */)a2 syncType:(long long)a3;
- (void)_anyChatExistsOnServerWithResultsLimit:(int)a0 changeToken:(id)a1 activity:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldMarkAllChatsAsNeedingSync;
- (void)_hasMarkedAllChatsAsNeedingSync;
- (void)__syncChatsWithCloudKit:(long long)a0 attemptCount:(unsigned long long)a1 activity:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)_eligibleForTruthZone;
- (void)_syncChatsWithCloudKitWithCompletionType:(long long)a0 activity:(id)a1 syncChatsCompletionBlock:(id /* block */)a2;
- (void)_needsToMarkAllChatsAsNeedingSync;
- (id)_copyRecordIDsToDelete;
- (void)_handleChatDeletionCompletionForRecordIDs:(id)a0 error:(id)a1;
- (BOOL)_lockRecordHadConflict:(id)a0;

@end
