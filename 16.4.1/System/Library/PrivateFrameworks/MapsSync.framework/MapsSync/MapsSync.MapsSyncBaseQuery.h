@class NSArray, OS_os_log;

@interface MapsSync.MapsSyncBaseQuery : NSObject <MapsSync.MapsSyncGenericQueryDelegate, MapsSync.MapsSyncFetchedResultsChangeDelegate, MapsSync.MapsSyncGenericQueryMergeDelegate> {
    void /* unknown type, empty encoding */ _historyToken;
    void /* unknown type, empty encoding */ _tokenLock;
    void /* unknown type, empty encoding */ _didChangeDebouncer;
    void /* unknown type, empty encoding */ _isInitCompleteLock;
    void /* unknown type, empty encoding */ _isInitComplete;
}

@property (class, nonatomic, readonly) NSArray *additionalNotificationTypes;
@property (class, nonatomic, readonly) OS_os_log *signpostLog;

@property (nonatomic, weak) void /* unknown type, empty encoding */ mergeDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ genericQuery;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ predicate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ mapsSyncFetchedResultsControllerDelegate;

- (BOOL)isReady;
- (id)mergeDuplicateObjectsWithDuplicates:(id)a0;
- (void)preFetchHook:(id /* block */)a0;
- (id)init;
- (id)findDuplicates:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueryDelegate:(id)a0 predicate:(id)a1;
- (void)deleteAllObjectsWithCompletion:(id /* block */)a0;
- (void)completeInit;
- (void)fetchBaseContents:(id /* block */)a0;
- (void)fetchBaseContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchCountWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchQueryBaseContents:(id /* block */)a0;
- (void)fetchQueryBaseContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchedResultsDidChangeObjectWithControllerDelegate:(id)a0 object:(id)a1 indexPath:(id)a2 changeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)fetchedResultsDidChangeWithControllerDelegate:(id)a0;
- (void)fetchedResultsWillChangeWithControllerDelegate:(id)a0;
- (BOOL)isInitComplete;
- (void)queryContentsDidChangeObjectWithNotification:(id)a0 object:(id)a1 indexPath:(id)a2 changeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)queryContentsDidChangeWithNotification:(id)a0;
- (void)queryContentsDidLoadWithNotification:(id)a0;
- (void)queryContentsWillChangeWithNotification:(id)a0;
- (void)queryContextDidChangeWithNotification:(id)a0;
- (void)queryIsReady;
- (void)queryStoreDidChangeWithNotification:(id)a0;
- (void)reloadContentsWithCompletion:(id /* block */)a0 queue:(id)a1;
- (void)watchItemsMatchingPredicate:(id)a0;

@end
