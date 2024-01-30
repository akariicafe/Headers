@class NSHashTable, NSString, NSFileCoordinator, NSURL, NSSet, NSMutableDictionary, NSOperationQueue, NSDate, NSObject, CKServerChangeToken;
@protocol SCKOperationThrottler, SCKDatabaseStore, OS_dispatch_source, OS_dispatch_queue;

@interface SCKDatabaseJSONStore : NSObject <SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore>

@property (retain, nonatomic) NSFileCoordinator *fileCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) BOOL loadedFromDisk;
@property (nonatomic) unsigned int lastKnownStoreChangeTag;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (retain, nonatomic) NSMutableDictionary *foreignZoneDictsByName;
@property (nonatomic) BOOL havePendingChanges;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<SCKOperationThrottler> saveThrottler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource;
@property (retain, nonatomic) NSSet *allowedCommandClasses;
@property (readonly, copy, nonatomic) NSURL *storeURL;
@property (readonly, nonatomic) unsigned long long diskReadCount;
@property (readonly, nonatomic) unsigned long long diskWriteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, nonatomic) id<SCKDatabaseStore> underlyingStore;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled;

+ (id)preferredFileURLForSchema:(id)a0 parentDirectoryURL:(id)a1;

- (void)operationThrottlerPerformOperation:(id)a0;
- (void)readWithAccessor:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (id)_decodeDate:(id)a0;
- (id)_encodeDate:(id)a0;
- (void)reloadWithAccessor:(id /* block */)a0;
- (void)readZone:(id)a0 withAccessor:(id /* block */)a1;
- (BOOL)_reloadIfNeededFromFileURL:(id)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (id)initWithSchema:(id)a0 parentDirectoryURL:(id)a1;
- (void)_listenForChangesToFileURL:(id)a0;
- (id)zoneStoreForSchema:(id)a0;
- (void)writeWithAccessor:(id /* block */)a0;
- (void)writeZone:(id)a0 withAccessor:(id /* block */)a1;
- (void)removeObserver:(id)a0;
- (id)_decodeCodableObjectOfClass:(Class)a0 from:(id)a1 error:(id *)a2;
- (BOOL)flushToDiskWithTimeout:(double)a0;
- (id)_decodeCodableObjectOfClasses:(id)a0 from:(id)a1 error:(id *)a2;
- (void)_loadFromFileURL:(id)a0;
- (id)_encodeCodableObject:(id)a0;
- (id)initWithSchema:(id)a0 fileURL:(id)a1;
- (void)_applyCloudBackupEnabledPropertyToStoreURL;
- (void).cxx_destruct;
- (void)_saveToFileURL:(id)a0;
- (void)_saveIfNeededToFileURL:(id)a0;
- (id)initWithSchema:(id)a0 fileURL:(id)a1 allowedCommands:(id)a2;
- (id)initWithSchema:(id)a0 parentDirectoryURL:(id)a1 allowedCommands:(id)a2;

@end
