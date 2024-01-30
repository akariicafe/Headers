@class WBSCloudHistoryConfiguration, CKRecordZone, NSOperationQueue, CKRecordZoneID, NSObject, CKDatabase;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore> {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSOperationQueue *_cloudKitOperationQueue;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordZone *_recordZone;
    WBSCloudHistoryConfiguration *_configuration;
    BOOL _useManateeContainer;
}

- (void)deleteHistoryZoneWithCompletion:(id /* block */)a0;
- (void)_saveCloudHistoryVisits:(id)a0 tombstones:(id)a1 longLivedOperationPersistenceCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithConfiguration:(id)a0 useManateeContainer:(BOOL)a1;
- (void)fetchRecordsWithServerChangeTokenData:(id)a0 completion:(id /* block */)a1;
- (void)_scheduleOperation:(id)a0;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(id /* block */)a0;
- (void)_fetchRecordsWithServerChangeToken:(id)a0 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned long long)a1 result:(id)a2 completion:(id /* block */)a3;
- (id)_recordWithCloudHistoryVisits:(id)a0;
- (id)_recordsWithCloudHistoryVisits:(id)a0;
- (void)initializePushNotifications:(id /* block */)a0;
- (BOOL)_shouldTryToResetRecordZoneForError:(id)a0;
- (void)_appendRecord:(id)a0 toResult:(id)a1;
- (void)_prepareRecordZoneWithCompletion:(id /* block */)a0;
- (void)_batchSaveRecords:(id)a0 useLongLivedOperation:(BOOL)a1 longLivedOperationPersistenceCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (id)_recordDataForDictionary:(id)a0;
- (void)_resetRecordZone;
- (id)_recordWithType:(id)a0 version:(unsigned long long)a1 dataDictionary:(id)a2;
- (id)_prepareRecordZoneWithoutCachingWithError:(id *)a0;
- (void)saveCloudHistoryVisits:(id)a0 tombstones:(id)a1 longLivedOperationPersistenceCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_saveRecords:(id)a0 withCompletion:(id /* block */)a1;
- (id)_recordWithHistoryTombstones:(id)a0 version:(unsigned long long)a1;
- (void)replayPersistedLongLivedSaveOperationWithID:(id)a0 completion:(id /* block */)a1;
- (id)_dictionaryForRecordData:(id)a0;
- (void).cxx_destruct;
- (void)_configureFetchChangesOperation:(id)a0;

@end
