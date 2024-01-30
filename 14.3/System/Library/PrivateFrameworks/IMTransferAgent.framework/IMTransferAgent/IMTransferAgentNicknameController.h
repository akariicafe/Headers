@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject

@property (readonly, nonatomic) CKContainer *nickNameContainer;

+ (id)sharedInstance;
+ (id)ckQueue;

- (BOOL)_serverSaysToUseOldContainer;
- (void).cxx_destruct;
- (BOOL)shouldUseDevNickNameContainer;
- (id)nickNamePublicDatabase;
- (id)lockdownManager;
- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 completionBlock:(id /* block */)a2;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (void)setPersonalNickname:(id)a0 oldRecordID:(id)a1 completionBlock:(id /* block */)a2;
- (void)deleteAllPersonalNicknamesWithCompletion:(id /* block */)a0;
- (id)_nickNameFetchConfiguration;
- (id)_nickNamePublicDB;
- (void)performCloudKitOperation:(id /* block */)a0 withError:(id)a1;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)a0 deletingRecordID:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)a0 deletingRecordIDs:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)fetchAllNicknamesForCurrentUser:(id /* block */)a0;
- (id)_nickNameSaveConfiguration;
- (void)_handleSaveNicknameError:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)cloudKitOperationWithRetryCount:(unsigned long long)a0 withError:(id)a1 operation:(id /* block */)a2;
- (double)_retryIntervalForRetryCount:(unsigned long long)a0;

@end
