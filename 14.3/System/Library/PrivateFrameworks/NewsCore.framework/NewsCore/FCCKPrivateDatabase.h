@class NFLazy, NSDate, NSArray, FCCKPrivateDatabaseSchema, NSData, NSOperationQueue, FCNetworkBehaviorMonitor, CKRecord, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, FCCKDatabaseEncryptionDelegate;

@interface FCCKPrivateDatabase : NSObject

@property (retain, nonatomic) NFLazy *ckProperties;
@property (retain, nonatomic) FCCKPrivateDatabaseSchema *schema;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (retain, nonatomic) NSOperationQueue *highPriorityOperationQueue;
@property (retain, nonatomic) NSOperationQueue *noPreflightOperationQueue;
@property (retain, nonatomic) NSArray *middleware;
@property (retain, nonatomic) NSArray *remainingStartUpMiddleware;
@property (retain, nonatomic) NSArray *operationMiddleware;
@property (retain, nonatomic) NSArray *recordMiddleware;
@property (nonatomic) BOOL beganInitialStartUp;
@property (nonatomic) BOOL finishedInitialStartUp;
@property (nonatomic) BOOL activelyStartingUp;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *initialStartUpGroup;
@property (nonatomic) long long startUpResult;
@property (nonatomic) unsigned long long countOfFailedStartUpAttempts;
@property (retain, nonatomic) NSDate *dateOfLastFailedStartUpAttempt;
@property (readonly, nonatomic) NSArray *zoneRestorationSources;
@property (readonly, nonatomic) NSArray *zonePruningAssistants;
@property (readonly, nonatomic) NSArray *zoneIDsUsingSecureContainer;
@property (readonly, weak, nonatomic) id<FCCKDatabaseEncryptionDelegate> encryptionDelegate;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (getter=isEncryptionEnabled) BOOL encryptionEnabled;
@property (getter=areSecureSubscriptionsEnabled) BOOL secureSubscriptionsEnabled;
@property (getter=isEncryptionRequired) BOOL encryptionRequired;
@property (retain) NSData *encryptionKey;
@property (retain) NSData *secureEncryptionKey;
@property (retain) CKRecord *sentinelRecord;
@property (readonly, nonatomic, getter=isStartingUp) BOOL startingUp;
@property (readonly, nonatomic, getter=isOnline) BOOL online;
@property (readonly, nonatomic, getter=isTemporarilySuspended) BOOL temporarilySuspended;

+ (id)sensitiveSubscriptionsZoneSchema;
+ (id)testingDatabaseWithCKDatabase:(id)a0 middleware:(id)a1 schema:(id)a2;
+ (id /* block */)_privateDatabaseDeprecatedRecordTestBlock;
+ (id)privateDatabaseSchema;
+ (id)testingDatabase;
+ (id)testingDatabaseWithCKDatabase:(id)a0 middleware:(id)a1;
+ (id)subscriptionFields;
+ (id)testingDatabaseWithCKDatabase:(id)a0 middleware:(id)a1 schema:(id)a2 encryptionDelegate:(id)a3;
+ (id)subscriptionsZoneSchema;

- (void)addOperation:(id)a0;
- (void)_finishStartUpWithError:(id)a0;
- (id)database;
- (void)_validateClientZones:(id)a0;
- (id)_serverToClientRecordZoneID:(id)a0 expectUnknownZones:(BOOL)a1;
- (id)_serverToClientRecordZoneID:(id)a0;
- (id)_mapRecords:(id)a0 toClient:(BOOL)a1;
- (void)_beginInitialStartUpIfNeeded;
- (void)reportFatalStartUpError:(id)a0;
- (void)reportRecoverableStartUpError:(id)a0;
- (void).cxx_destruct;
- (void)registerZoneRestorationSources:(id)a0;
- (id)_serverRecordID:(id)a0;
- (void)addCKOperationNoPreflight:(id)a0 destination:(long long)a1;
- (void)_addCKOperation:(id)a0 destination:(long long)a1;
- (id)secureDatabase;
- (void)reportPostMigrationCleanupError:(id)a0;
- (id)initWithCKProperties:(id)a0 schema:(id)a1 middleware:(id)a2 encryptionDelegate:(id)a3 networkBehaviorMonitor:(id)a4;
- (id)pruningAssistantForZoneName:(id)a0;
- (void)takeDatabaseOfflineDueToError:(id)a0;
- (void)_preflightZonesIDsInFetchZonesOperation:(id)a0;
- (void)addCKOperation:(id)a0 destination:(long long)a1;
- (id)t_initWithContainers:(id)a0 database:(id)a1 databaseWithZoneWidePCS:(id)a2 secureDatabase:(id)a3 schema:(id)a4 middleware:(id)a5 encryptionDelegate:(id)a6 networkBehaviorMonitor:(id)a7;
- (void)registerZonePruningAssistants:(id)a0;
- (id)_clientToServerRecordZoneID:(id)a0;
- (void)_continueStartUp;
- (void)fetchChangesForRecordZoneID:(id)a0 changeToken:(id)a1 desiredKeys:(id)a2 fetchAllChanges:(BOOL)a3 qualityOfService:(long long)a4 completionHandler:(id /* block */)a5;
- (id)_clientRecordID:(id)a0;
- (void)_preflightOperation:(id)a0;
- (void)fetchAllDatabaseChangesWithServerChangeToken:(id)a0 qualityOfService:(long long)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithContainerIdentifier:(id)a0 secureContainerIdentifier:(id)a1 productionEnvironment:(BOOL)a2 encryptionDelegate:(id)a3 networkBehaviorMonitor:(id)a4 privateDataSyncingEnabled:(BOOL)a5;
- (id)databaseWithZoneWidePCS;
- (void)fetchSecureDatabaseSupportedWithCompletionHandler:(id /* block */)a0;
- (id)_mapRecordZoneIDs:(id)a0 toClient:(BOOL)a1 expectUnknownZones:(BOOL)a2;
- (BOOL)_doesOperationRequireZoneWidePCS:(id)a0;
- (void)reportEncryptionMigrationError:(id)a0;
- (id)_mapZones:(id)a0 toClient:(BOOL)a1;
- (void)_cancelOperation:(id)a0;
- (void)_preflightZoneIDsInModifyZonesOperation:(id)a0;
- (void)t_performStartUpWithCompletion:(id /* block */)a0;
- (void)_possiblyRetryStartUp;
- (id)_queueForOperation:(id)a0;
- (void)_preflightRecordsInRecordZoneChangesOperation:(id)a0;
- (id)_serverToClientZone:(id)a0;
- (void)enumeratePayloadsWithRecordIDs:(id)a0 records:(id)a1 zoneIDs:(id)a2 zones:(id)a3 options:(long long)a4 payloadHandler:(id /* block */)a5;
- (void)_preflightRecordsInModifyOperation:(id)a0;
- (id)_serverToClientRecordType:(id)a0 withRecordID:(id)a1;
- (void)_possiblySimulateCrashForError:(id)a0 message:(id)a1;
- (id)_serverToClientRecord:(id)a0;
- (id)_clientToServerRecord:(id)a0;
- (void)enumerateActiveDestinationsWithOptions:(long long)a0 handler:(id /* block */)a1;
- (id)_recordZoneIDsFromOperation:(id)a0;
- (void)_preflightRecordsInDatabaseChangesOperation:(id)a0;
- (id)_serverToClientError:(id)a0;
- (id)_mapObjects:(id)a0 withRecordMiddlewareBlock:(id /* block */)a1;
- (void)_preflightRecordsInFetchOperation:(id)a0;
- (id)_mapRecordZoneIDs:(id)a0 toClient:(BOOL)a1;
- (BOOL)_doesOperationRequireSecureContainer:(id)a0;
- (id)_mapRecordIDs:(id)a0 toClient:(BOOL)a1;
- (void)_validateClientRecords:(id)a0;

@end
