@class NSHashTable, NSUUID, _DKCoreDataStorage, NSString, NSURL, NSObject, _DKTombstonePolicy;
@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    NSString *_directory;
    NSURL *_modelURL;
    NSHashTable *_knowledgeStorageEventNotificationDelegates;
    unsigned long long _insertsAndDeletesObserverCount;
    NSString *_clientID;
    NSObject<OS_dispatch_queue> *_executionQueue;
}

@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (retain) _DKTombstonePolicy *tombstonePolicy;
@property (nonatomic) BOOL enableBiomeMigrationDeletion;
@property (readonly, nonatomic) BOOL localOnly;
@property (readonly, nonatomic) _DKCoreDataStorage *storage;
@property (readonly, nonatomic) _DKCoreDataStorage *syncStorage;

+ (id)sourceDeviceIdentityFromObject:(id)a0;
+ (id)storageWithShallowCopyFromStorage:(id)a0 clientIdentifier:(id)a1;
+ (id)storageWithDirectory:(id)a0 readOnly:(BOOL)a1;
+ (id)storageWithDirectory:(id)a0 readOnly:(BOOL)a1 localOnly:(BOOL)a2;
+ (id)storeWithDirectory:(id)a0 readOnly:(BOOL)a1;

- (id)executeQuery:(id)a0 error:(id *)a1;
- (void)addKnowledgeStorageEventNotificationDelegate:(id)a0;
- (unsigned long long)eventCount;
- (void)closeSyncStorage;
- (void)executeQuery:(id)a0 responseQueue:(id)a1;
- (unsigned long long)deleteObjectsOlderThanDate:(id)a0 excludingPredicate:(id)a1 limit:(unsigned long long)a2;
- (BOOL)saveObjects:(id)a0 error:(id *)a1;
- (unsigned long long)deleteObjectsInEventStream:(id)a0 ifNeededToLimitEventCount:(unsigned long long)a1 batchLimit:(unsigned long long)a2;
- (id)fetchLocalChangesSinceDate:(id)a0 error:(id *)a1;
- (void)decrementInsertsAndDeletesObserverCount;
- (id)eventCountPerStreamName;
- (void)saveObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)deleteAllEventsInEventStream:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (void)startSyncDownFromCloudWithResponseQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeSyncPeer:(id)a0;
- (unsigned long long)deleteEventsMatchingPredicate:(id)a0 limit:(unsigned long long)a1;
- (unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)a0 error:(id *)a1;
- (void)saveObjects:(id)a0 tracker:(id /* block */)a1 responseQueue:(id)a2 withCompletion:(id /* block */)a3;
- (id)keyValueStoreForDomain:(id)a0;
- (BOOL)deleteStorage;
- (unsigned long long)deleteObjectsInEventStreams:(id)a0 olderThanDate:(id)a1 limit:(unsigned long long)a2;
- (id)syncPeersWithError:(id *)a0;
- (void)dealloc;
- (unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)a0 excludingPredicate:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)deleteOrphanedEntities;
- (BOOL)saveSyncPeer:(id)a0 error:(id *)a1;
- (void)startSyncUpToCloudWithResponseQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)incrementInsertsAndDeletesObserverCount;
- (void)deleteObjects:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)sourceDeviceIdentity;
- (void)closeStorage;
- (BOOL)coreDataStorage:(id)a0 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)a1;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (id)coreDataStorage:(id)a0 needsManagedObjectModelNameForVersion:(unsigned long long)a1;
- (BOOL)migrateDataToBiomeWithManagedObjectContext:(id)a0;
- (BOOL)coreDataStorage:(id)a0 didAutoMigratePersistentStore:(id)a1 toManagedObjectModel:(id)a2 havingVersion:(unsigned long long)a3 error:(id *)a4;
- (void)saveHistogram:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)coreDataStorage:(id)a0 willAutoMigrateStoreAtURL:(id)a1 fromManagedObjectModel:(id)a2 havingVersion:(unsigned long long)a3 error:(id *)a4;
- (unsigned long long)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (unsigned long long)deleteEventsStartingEarlierThanDate:(id)a0 limit:(unsigned long long)a1;
- (void)removeKnowledgeStorageEventNotificationDelegate:(id)a0;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)coreDataStorage:(id)a0 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)a1;
- (id)lastChangeSetWithEntityName:(id)a0 error:(id *)a1;
- (id)fetchSyncChangesSinceDate:(id)a0 error:(id *)a1;
- (BOOL)deleteSyncStorage;
- (id)syncStorageAssertion;
- (id)eventCountsForStreams:(id)a0;
- (unsigned long long)totalEventCountForStreams:(id)a0;
- (BOOL)deleteObjects:(id)a0 error:(id *)a1;
- (void)_databaseChangedWithNotification:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)deleteHistogram:(id)a0;
- (BOOL)saveChangeSetsForSync:(id)a0 error:(id *)a1;
- (void)deleteAllEventsMatchingPredicate:(id)a0 responseQueue:(id)a1 withCompletion:(id /* block */)a2;

@end
