@class NSPersistentContainer, NSString, _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncDataSession : NSObject {
    void /* unknown type, empty encoding */ _dataContainer;
    void /* unknown type, empty encoding */ _containerQueue;
    void /* unknown type, empty encoding */ _storeLoadInterval;
    void /* unknown type, empty encoding */ _readContext;
    void /* unknown type, empty encoding */ _backgroundReadContext;
    void /* unknown type, empty encoding */ _writeContext;
    void /* unknown type, empty encoding */ _localOnly;
    void /* unknown type, empty encoding */ _loadLock;
    void /* unknown type, empty encoding */ _hasLoadedStores;
    void /* unknown type, empty encoding */ _historyAnalyzer;
    void /* unknown type, empty encoding */ _loadHandlers;
    void /* unknown type, empty encoding */ _persistentContainer;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _pendingReadContextFetches;
    void /* unknown type, empty encoding */ _pendingBackgroundReadContextFetches;
    void /* unknown type, empty encoding */ _pendingWriteContextFetches;
    void /* unknown type, empty encoding */ _contextFetchLock;
}

@property (class, nonatomic) BOOL useInMemoryOnly;
@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *defaultSession;
@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *defaultLocalOnlySession;

@property (nonatomic, retain) void /* unknown type, empty encoding */ cloudKitState;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, readonly) NSString *typeString;

+ (void)startXPCServer;
+ (void)disableNotifications;
+ (void)suppressNotifications;
+ (void)enableNotifications;
+ (void)whenReadyWithCompletion:(id /* block */)a0;
+ (BOOL)isInMemoryOnly;
+ (void)resumeNotifications;
+ (BOOL)shouldMoveStoreAsideWithError:(id)a0;
+ (BOOL)shouldRetryStoreLoadAfterErrorWithError:(id)a0;
+ (void)resetWithCompletion:(id /* block */)a0;
+ (void)reset;

- (void)resetInMemoryStoreWithCompletion:(id /* block */)a0;
- (void)getBackgroundReadContextWithCompletion:(id /* block */)a0;
- (void)getReadContextWithCompletion:(id /* block */)a0;
- (void)deleteAll;
- (id)unsafeGetReadContextAndReturnError:(id *)a0;
- (void)resetInMemoryStore;
- (id)unsafeGetBackgroundReadContextAndReturnError:(id *)a0;
- (id)unsafeGetWriteContextAndReturnError:(id *)a0;
- (void)whenReadyWithCompletion:(id /* block */)a0;
- (void)getWriteContextWithCompletion:(id /* block */)a0;
- (void)loadCoreDataStoresFor:(id)a0 completion:(id /* block */)a1;
- (void)loadStoresWithCompletion:(id /* block */)a0;
- (id)init;
- (void)checkStoreLoadedWithCompletion:(id /* block */)a0;
- (BOOL)hasLoadedStore;
- (void)contextDidSaveWithNotification:(id)a0;
- (void)remoteChangeWithNotification:(id)a0;
- (void).cxx_destruct;
- (void)cloudKitChangeWithNotification:(id)a0;
- (id)initWithPersisted:(BOOL)a0 deviceLocal:(BOOL)a1;

@end
