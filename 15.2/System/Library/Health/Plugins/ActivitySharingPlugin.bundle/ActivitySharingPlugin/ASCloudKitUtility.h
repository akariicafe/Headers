@class CKContainer, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface ASCloudKitUtility : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSHashTable *_queue_executingFetchOperations;
}

@property (retain, nonatomic) CKContainer *container;

+ (id)shareURLForShare:(id)a0;

- (id)initWithContainer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)a0 recordIDsToDelete:(id)a1 priority:(long long)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)removeParticpantWithCloudKitAddress:(id)a0 fromShares:(id)a1 completion:(id /* block */)a2;
- (void)fetchShareWithShareRecordID:(id)a0 completion:(id /* block */)a1;
- (void)addParticipantWithCloudKitAddress:(id)a0 toShares:(id)a1 completion:(id /* block */)a2;
- (void)acceptSharesWithURLs:(id)a0 completion:(id /* block */)a1;
- (void)createShareAndAssociatedZoneWithShareRecordID:(id)a0 rootRecord:(id)a1 otherRecordsToSave:(id)a2 completion:(id /* block */)a3;
- (void)cancelAllExecutingFetches;
- (void)fetchChangesInPrivateDatabaseWithServerChangeTokenCache:(id)a0 priority:(long long)a1 activity:(id)a2 completion:(id /* block */)a3;
- (void)fetchChangesInSharedDatabaseWithServerChangeTokenCache:(id)a0 priority:(long long)a1 activity:(id)a2 completion:(id /* block */)a3;
- (void)saveSubscriptions:(id)a0 andDeleteSubscriptionsWithIdentifiers:(id)a1 inDatabase:(id)a2 completion:(id /* block */)a3;
- (void)saveRecordsIntoPrivateDatabase:(id)a0 priority:(long long)a1 activity:(id)a2 completion:(id /* block */)a3;
- (void)fetchShareParticipantForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)_saveRecordsIntoPrivateDatabase:(id)a0 recordIDsToDelete:(id)a1 savePolicy:(long long)a2 priority:(long long)a3 activity:(id)a4 completion:(id /* block */)a5;
- (void)_createRecordZonesWithIDs:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (void)_saveRecordsIntoPrivateDatabaseCreatingZones:(id)a0 recordIDsToDelete:(id)a1 savePolicy:(long long)a2 priority:(long long)a3 activity:(id)a4 completion:(id /* block */)a5;
- (void)_fetchShareWithShareRecordID:(id)a0 completion:(id /* block */)a1;
- (void)_acceptShareMetadatas:(id)a0 completion:(id /* block */)a1;
- (void)_fetchChangesInZones:(id)a0 inDatabase:(id)a1 serverChangeTokenCache:(id)a2 priority:(long long)a3 allowRetry:(BOOL)a4 completion:(id /* block */)a5;
- (void)_fetchChangesInDatabase:(id)a0 serverChangeTokenCache:(id)a1 priority:(long long)a2 activity:(id)a3 completion:(id /* block */)a4;

@end
