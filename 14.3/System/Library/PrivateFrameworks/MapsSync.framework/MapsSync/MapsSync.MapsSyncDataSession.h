@class NSString, _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncDataSession : NSObject {
    void /* unknown type, empty encoding */ _dataContainer;
    void /* unknown type, empty encoding */ _containerQueue;
    void /* unknown type, empty encoding */ _storeLoadInterval;
    void /* unknown type, empty encoding */ _readContext;
    void /* unknown type, empty encoding */ _backgroundReadContext;
    void /* unknown type, empty encoding */ _writeContext;
    void /* unknown type, empty encoding */ _localOnly;
    void /* unknown type, empty encoding */ _loadSemaphore;
    void /* unknown type, empty encoding */ _hasLoadedStores;
    void /* unknown type, empty encoding */ _pendingReadContextFetches;
    void /* unknown type, empty encoding */ _pendingBackgroundReadContextFetches;
    void /* unknown type, empty encoding */ _pendingWriteContextFetches;
    void /* unknown type, empty encoding */ _contextFetchLock;
}

@property (class, nonatomic) BOOL useInMemoryOnly;
@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *defaultSession;
@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *defaultLocalOnlySession;

@property (nonatomic, readonly) NSString *typeString;

+ (void)disableNotifications;
+ (void)reset;
+ (BOOL)isInMemoryOnly;
+ (void)suppressNotifications;
+ (BOOL)shouldMoveStoreAsideWithError:(id)a0;
+ (void)resetWithCompletion:(id /* block */)a0;
+ (void)enableNotifications;
+ (void)resumeNotifications;
+ (void)startXPCServer;
+ (BOOL)shouldRetryStoreLoadAfterErrorWithError:(id)a0;

- (id)initWithPersisted:(BOOL)a0 deviceLocal:(BOOL)a1;
- (void)whenReadyWithCompletion:(id /* block */)a0;
- (id)unsafeGetBackgroundReadContextAndReturnError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)getReadContextWithCompletion:(id /* block */)a0;
- (void)resetInMemoryStoreWithCompletion:(id /* block */)a0;
- (void)loadStoresWithCompletion:(id /* block */)a0;
- (id)unsafeGetWriteContextAndReturnError:(id *)a0;
- (void)deleteAll;
- (BOOL)hasLoadedStore;
- (void)contextDidSaveWithNotification:(id)a0;
- (void)remoteChangeWithNotification:(id)a0;
- (id)unsafeGetReadContextAndReturnError:(id *)a0;
- (void)getBackgroundReadContextWithCompletion:(id /* block */)a0;
- (void)getWriteContextWithCompletion:(id /* block */)a0;
- (void)checkStoreLoadedWithCompletion:(id /* block */)a0;
- (void)resetInMemoryStore;

@end
