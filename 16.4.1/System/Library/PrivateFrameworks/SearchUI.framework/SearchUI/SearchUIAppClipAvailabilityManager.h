@class NSCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SearchUIAppClipAvailabilityManager : NSObject <SearchUIBatchedCachePrewarmer>

@property (retain) NSCache *cache;
@property (retain) NSCache *possiblyAvailableCache;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)prewarmCacheForBatchedItems:(id)a0;
- (void)checkIfClipsAreValid:(id)a0 completion:(id /* block */)a1;
- (id)cachedAvailabilityForCommand:(id)a0;
- (id)init;
- (void)requestAvailabilityForCommand:(id)a0 completion:(id /* block */)a1;
- (id)batchingItemsForRowModel:(id)a0;
- (void).cxx_destruct;

@end
