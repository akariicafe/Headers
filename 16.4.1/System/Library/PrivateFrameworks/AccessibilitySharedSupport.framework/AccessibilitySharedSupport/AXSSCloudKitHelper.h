@class NSError, NSURL, CKRecordZone, APSConnection, NSObject, CKRecordZoneSubscription, NSMutableArray, NSManagedObjectContext, NSString, CKDatabase, NSPersistentStore, CKContainer, NSPersistentStoreCoordinator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXSSCloudKitHelper : NSObject <APSConnectionDelegate> {
    NSMutableArray *_accumulatedQueuedData;
}

@property (readonly, weak, nonatomic) NSPersistentStore *observedStore;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *observedCoordinator;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) CKRecordZoneSubscription *zoneSubscription;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudkitQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (readonly, nonatomic) APSConnection *apsConnection;
@property (readonly, nonatomic) NSError *lastInitializationError;
@property (readonly, nonatomic) NSURL *largeBlobDirectoryURL;
@property (nonatomic) BOOL observeLocalDatabaseChanges;
@property (nonatomic) BOOL isProtectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)logMessage:(id)a0;
- (void)_setContainer:(id)a0;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (id)apsEnvironment;
- (void)dealloc;
- (void)managedObjectContextDidSave:(id)a0;
- (void).cxx_destruct;
- (id)recordType;
- (Class)managedObjectClass;
- (BOOL)_checkAccountStatus:(id *)a0;
- (BOOL)_createSchemaIfNecessary:(id *)a0;
- (BOOL)_createZoneIfNecessary:(id *)a0;
- (void)_initializeCloudkitForObservedStore;
- (void)_processAccumulatedQueueData;
- (void)_setApsConnection:(id)a0;
- (void)_setDatabase:(id)a0;
- (void)_setObservedStore:(id)a0 observedCoordinator:(id)a1;
- (BOOL)_setupPushConnection:(id *)a0;
- (BOOL)_setupZoneSubscriptionIfNecessary:(id *)a0;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)a0;
- (id)cloudKitPushTopic;
- (id)createCKRecordFromObject:(id)a0;
- (void)fetchChangesAndUpdateObservedStore;
- (id)initWithContainerIdentifier:(id)a0 zoneName:(id)a1;
- (void)observeChangesForManagedContext:(id)a0;
- (void)openTransactionWithLabel:(id)a0 andExecuteWorkBlock:(id /* block */)a1;
- (void)processAccumulatedChangesForServerChangeToken:(id)a0 withAccumulatedUpdates:(id)a1 andDeletes:(id)a2 inTransaction:(id)a3;
- (void)processLocalChangesAndPush;
- (void)processRecordDeletionsFromServer:(id)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (id)serverChangeTokenMetadataKey;
- (BOOL)shouldExportManagedObject:(id)a0;
- (id)testRecordForSchemaCreation:(id)a0;
- (id)zoneCreatedKey;
- (id)zoneSubscriptionKey;

@end
