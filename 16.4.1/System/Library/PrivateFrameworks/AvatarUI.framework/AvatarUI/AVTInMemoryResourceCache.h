@class NSObject, NSString, NSMutableArray, NSCache;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTInMemoryResourceCache : NSObject <NSCacheDelegate, AVTResourceCache>

@property (readonly, nonatomic) NSCache *storage;
@property (readonly, nonatomic) NSMutableArray *orderedEntries;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storageLock;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)costForItem:(id)a0 scope:(id)a1;
+ (id)keyForItem:(id)a0 scope:(id)a1;

- (void)clearCache;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_resourceForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;
- (void)evictResourceFromCache:(id)a0 scope:(id)a1;
- (void)handleChangeForItemForKey:(id)a0;
- (id)initWithLockProvider:(id /* block */)a0 totalCostLimit:(unsigned long long)a1 logger:(id)a2;
- (void)nts_evictObjectsToFreeUpCost:(unsigned long long)a0;
- (id)observeChangesForItem:(id)a0 key:(id)a1;
- (void)performStorageWork:(id /* block */)a0;
- (BOOL)resourceExistsInCacheForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;

@end
