@class BCCloudDataSource, NSString, BCCloudKitController, BCCloudDataSyncManager, NSObject, NSManagedObjectContext;
@protocol BDSCloudDataManagerMonitor, BCCloudDataPrivacyDelegate, OS_dispatch_queue, BCCloudDataMapper;

@interface BCCloudDataManager : NSObject <BDSCloudKitSupportSignOutDissociate>

@property (weak, nonatomic) NSManagedObjectContext *moc;
@property (retain, nonatomic) BCCloudDataSource *dataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *notificationName;
@property (weak, nonatomic) BCCloudDataSyncManager *syncManager;
@property Class immutableClass;
@property Class mutableClass;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (nonatomic) BOOL signalDataChangedTransaction;
@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) id<BCCloudDataMapper> dataMapper;
@property (weak, nonatomic) id<BDSCloudDataManagerMonitor> monitor;

- (void).cxx_destruct;
- (void)_logError:(id)a0;
- (void)cloudDataWithPredicate:(id)a0 sortDescriptors:(id)a1 completion:(id /* block */)a2;
- (void)cloudDatasWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)cloudDatasWithPredicate:(id)a0 sortDescriptors:(id)a1 maximumResultCount:(unsigned long long)a2 filter:(id /* block */)a3 completion:(id /* block */)a4;
- (void)countWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)currentCloudSyncVersions:(id /* block */)a0;
- (void)deleteCloudDataForPredicate:(id)a0 completion:(id /* block */)a1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)failedRecordIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchCloudDataIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)getChangesSince:(id)a0 forEntityClass:(Class)a1 completion:(id /* block */)a2;
- (void)hasSaltChangedWithCompletion:(id /* block */)a0;
- (id)initWithCloudDataSource:(id)a0 entityName:(id)a1 notificationName:(id)a2 immutableClass:(Class)a3 mutableClass:(Class)a4 syncManager:(id)a5 cloudKitController:(id)a6;
- (id)initWithCloudDataSource:(id)a0 entityName:(id)a1 notificationName:(id)a2 immutableClass:(Class)a3 mutableClass:(Class)a4 syncManager:(id)a5 cloudKitController:(id)a6 dataMapper:(id)a7;
- (id)mq_cloudSyncVersions;
- (void)mq_incrementCloudVersion;
- (id)mq_sanitizeError:(id)a0;
- (void)mq_signalTransactions;
- (void)removeCloudDataForPredicate:(id)a0 completion:(id /* block */)a1;
- (void)resolveConflictsForRecords:(id)a0 completion:(id /* block */)a1;
- (void)resolveConflictsForRecords:(id)a0 withResolvers:(id)a1 completion:(id /* block */)a2;
- (void)resolveConflictsForRecords:(id)a0 withResolvers:(id)a1 mergers:(id)a2 completion:(id /* block */)a3;
- (void)resolvedCloudDataForCloudData:(id)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)resolvedCloudDataForCloudData:(id)a0 withResolvers:(id)a1 mergers:(id)a2 predicate:(id)a3 completion:(id /* block */)a4;
- (void)resolvedCloudDataForCloudData:(id)a0 withResolvers:(id)a1 predicate:(id)a2 completion:(id /* block */)a3;
- (void)setCloudData:(id)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)setCloudData:(id)a0 predicate:(id)a1 mergers:(id)a2 completion:(id /* block */)a3;
- (void)setCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 completion:(id /* block */)a3;
- (void)setCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 mergers:(id)a3 completion:(id /* block */)a4;
- (void)startSyncToCKWithCompletion:(id /* block */)a0;
- (void)transformedCloudDatasWithPredicate:(id)a0 transformer:(id /* block */)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)updateSyncGenerationFromCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 completion:(id /* block */)a3;

@end
