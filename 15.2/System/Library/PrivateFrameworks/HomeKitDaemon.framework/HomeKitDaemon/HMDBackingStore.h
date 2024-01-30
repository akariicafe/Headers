@class NSUUID, NSString, CKRecordID, HMDHomeManager, HMDObjectLookup, HMCContext, HMCPartition, HMDBackingStoreLocal, HMBLocalZone, HMDHome;
@protocol HMDBackingStoreObjectProtocol, HMDBackingStoreDataSource;

@interface HMDBackingStore : HMFObject <HMDBackingStoreDataSource, HMFLogging> {
    BOOL _removedLegacyArchive;
    id<HMDBackingStoreDataSource> _dataSource;
}

@property (readonly, nonatomic) HMCPartition *partition;
@property (readonly, nonatomic) CKRecordID *root;
@property (retain, nonatomic) HMDBackingStoreLocal *local;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMDObjectLookup *lookup;
@property (retain, nonatomic) HMBLocalZone *localZone;
@property (readonly, nonatomic) NSString *contextName;
@property (readonly, nonatomic) NSString *contextTransactionAuthor;
@property (retain, nonatomic) HMCContext *context;
@property (weak, nonatomic) id<HMDBackingStoreObjectProtocol> delegate;
@property (readonly) NSString *activeControllerKeyUsername;
@property (readonly) BOOL isAtomicSaveFeatureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;
+ (id)logCategory;
+ (id)allowedTypes;
+ (void)start;
+ (id)internalAllowedTypes;
+ (id)cdlsBackingStoreForHomeManagerWithError:(id *)a0;
+ (id)deeplyProblematicObjectTypes;
+ (id)cdlsFetchObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
+ (id)cdlsFetchManagedObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
+ (id)cdlsActiveBackingStores;
+ (id)cdlsActiveBackingStoresLock;
+ (id)cdlsBackingStoreWithHandle:(id)a0 error:(id *)a1;
+ (id)dependencySortTestInterface:(id)a0;
+ (id)cdlsModelIDStringsForManagedObjects:(id)a0;
+ (id)cdlsFetchManagedObjectsWithUUIDStrings:(id)a0 ofManagedObjectType:(Class)a1;
+ (id)cdlsFetchManagedObjectWithUUID:(id)a0 ofManagedObjectType:(Class)a1 error:(id *)a2;
+ (id)flushBackingStore;
+ (id)resetBackingStore;
+ (id)_saveToLocalStoreWithReason:(id)a0 homeManager:(id)a1 shouldIncrementGenerationCounter:(BOOL)a2 backingStore:(id)a3;
+ (void)saveToPersistentStoreWithReason:(id)a0 homeManager:(id)a1 shouldIncrementGenerationCounter:(BOOL)a2 backingStore:(id)a3 completionHandler:(id /* block */)a4;

- (id)initWithUUID:(id)a0;
- (id)logIdentifier;
- (void)submit:(id)a0;
- (void).cxx_destruct;
- (id)transaction:(id)a0 options:(id)a1;
- (void)submitBlock:(id /* block */)a0;
- (void)saveToPersistentStoreWithReason:(id)a0 incrementGeneration:(BOOL)a1;
- (id)initWithUUID:(id)a0 home:(id)a1;
- (id)cdlsFetchObjectWithUUID:(id)a0 ofModelType:(Class)a1 error:(id *)a2;
- (void)handleCoreDataWillSaveNotification:(id)a0;
- (void)handleCoreDataDidSaveNotification:(id)a0;
- (void)cdlsReplayAllModelsStartingAt:(id)a0;
- (void)cdlsCommit:(id)a0 run:(BOOL)a1 save:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)cdlsUpdate:(id)a0 destination:(unsigned long long)a1;
- (void)cdlsDelete:(id)a0 destination:(unsigned long long)a1;
- (void)handleCoreDataDidSaveNotification:(id)a0 sourceContext:(id)a1;
- (void)dmKickClients;
- (id)__fetchWithGroup:(id)a0 uuids:(id)a1 error:(id *)a2;
- (void)commit:(id)a0 run:(BOOL)a1 save:(BOOL)a2 archiveInline:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)commit:(id)a0 run:(BOOL)a1 save:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)a0;
- (id)createBackingStoreOperation;
- (id)localBackingStore;
- (id)backingStoreOperationQueue;
- (id)createHomeObjectLookupWithHome:(id)a0;
- (id)dataForPersistentStoreIncrementingGeneration:(BOOL)a0 reason:(id)a1;
- (id)initWithUUID:(id)a0 homeManager:(id)a1 home:(id)a2 dataSource:(id)a3;
- (id)initWithUUID:(id)a0 homeManager:(id)a1;
- (void)updateModelObjects:(id)a0 destination:(unsigned long long)a1;
- (void)deleteModelObjects:(id)a0 destination:(unsigned long long)a1;

@end
