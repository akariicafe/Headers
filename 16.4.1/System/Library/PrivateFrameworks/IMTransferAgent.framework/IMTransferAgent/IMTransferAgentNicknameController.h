@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject

@property (readonly, nonatomic) CKContainer *nickNameContainer;

+ (id)sharedInstance;
+ (id)ckQueue;

- (id)_nickNameContainerIdentifier;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)_serverSaysToUseOldContainer;
- (id)lockdownManager;
- (id)_nickNameContainer;
- (id)nickNamePublicDatabase;
- (BOOL)shouldUseDevNickNameContainer;
- (void).cxx_destruct;
- (void)deleteAllPersonalNicknamesWithCompletion:(id /* block */)a0;
- (void)setPersonalNickname:(id)a0 oldRecordID:(id)a1 completionBlock:(id /* block */)a2;
- (void)_handleSaveNicknameError:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)_nickNameFetchConfiguration;
- (id)_nickNamePublicDB;
- (id)_nickNameSaveConfiguration;
- (double)_retryIntervalForRetryCount:(unsigned long long)a0;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)a0 deletingRecordID:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)a0 deletingRecordIDs:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)cloudKitOperationWithRetryCount:(unsigned long long)a0 withError:(id)a1 operation:(id /* block */)a2;
- (void)fetchAllNicknamesForCurrentUser:(id /* block */)a0;
- (void)performCloudKitOperation:(id /* block */)a0 withError:(id)a1;

@end
