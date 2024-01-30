@class NSManagedObjectContext, TransparencyManagedDataStore, NSHashTable, NSPersistentContainer;

@interface TransparencyManagedDataStoreController : NSObject {
    _Atomic long long _sequenceId;
}

@property (retain) NSPersistentContainer *persistentContainer;
@property (retain) NSManagedObjectContext *topLevelContext;
@property (retain) NSManagedObjectContext *mainQueueContext;
@property BOOL movedDatabase;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) TransparencyManagedDataStore *xpcQueueDataStore;
@property (retain) TransparencyManagedDataStore *mainQueueDataStore;
@property (retain) NSHashTable *mocStore;
@property (readonly) BOOL loadedStore;
@property (readonly) NSManagedObjectContext *backgroundContext;
@property (readonly) _Atomic long long *sequenceId;

+ (void)reportCoreDataEventForEntity:(id)a0 write:(BOOL)a1 code:(long long)a2 underlyingError:(id)a3;
+ (void)reportCoreDataEventForEntity:(id)a0 hardFailure:(BOOL)a1 write:(BOOL)a2 code:(long long)a3 underlyingError:(id)a4;

- (void)loadPersistentStores;
- (BOOL)shouldMoveAsideDatabase:(id)a0;
- (void)saveTopLevelContext;
- (BOOL)createDataStores:(id *)a0;
- (BOOL)createContexts:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)bundleURL;
- (long long)currentSequenceId:(id *)a0;
- (BOOL)saveContext:(id)a0 error:(id *)a1;
- (BOOL)moveAsideDatabase:(id)a0;
- (void)handleDidSaveNotification:(id)a0;

@end
