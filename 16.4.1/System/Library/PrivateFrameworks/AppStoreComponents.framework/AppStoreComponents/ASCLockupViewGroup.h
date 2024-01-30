@class NSString, ASCLockupFetcher, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface ASCLockupViewGroup : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) ASCLockupFetcher *lockupFetcher;
@property (readonly, nonatomic) NSMutableDictionary *deferredRequests;
@property (nonatomic) BOOL hasScheduledBatchRequest;
@property (retain, nonatomic) NSMutableArray *prefetchSpansIfLoaded;
@property (readonly, nonatomic) NSMutableArray *prefetchSpans;

+ (void)createConnectionWithCompletionBlock:(id /* block */)a0;

- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_lockupRequestForBundleID:(id)a0 withContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)_cacheLockupsWithCollectionRequest:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_cacheLockupsWithRequests:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_lockupDictionaryForRequest:(id)a0 includingKeys:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_prefetchLockupsWithRequests:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 lockupFetcher:(id)a1;
- (id)lockupWithRequest:(id)a0;
- (void)performBatchRequests;
- (void)scheduleBatchRequestsIfNeeded;

@end
