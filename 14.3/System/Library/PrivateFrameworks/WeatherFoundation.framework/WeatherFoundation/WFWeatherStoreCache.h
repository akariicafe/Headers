@class NSMutableDictionary, NSTimer, NSMutableSet, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WFWeatherStoreCache : NSObject

@property (retain, nonatomic) NSTimer *cacheStoreTimer;
@property (retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue;
@property (retain) NSMutableDictionary *cacheForDomain;
@property (retain) NSMutableSet *dirtyCacheDomains;
@property (copy, nonatomic) NSURL *URL;

+ (id)createCacheIfNecessary:(id)a0 error:(id *)a1;
+ (BOOL)removeObjectsFromCache:(id)a0 passingTest:(id /* block */)a1;
+ (id)wf_masterDomains;

- (BOOL)_loadDomain:(id)a0;
- (void)writeCacheDictionaryToFile;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)a0 allowedStaleness:(unsigned long long)a1;
- (void)removeObjectWithinDomain:(id)a0 forKey:(id)a1;
- (void)_startCacheStoreTimer;
- (id)init;
- (void).cxx_destruct;
- (void)_shrinkDomain:(id)a0;
- (void)dealloc;
- (BOOL)_concurrentQueue_barrier_loadDomain:(id)a0;
- (void)_concurrentQueue_barrier_shrinkDomain:(id)a0;
- (void)deleteOldDataFromCache:(id)a0 allowedStaleness:(unsigned long long)a1;
- (id)cachedObjectWithinDomain:(id)a0 forKey:(id)a1 staleness:(unsigned long long)a2;
- (void)_stopCacheStoreTimer;
- (void)cache:(id)a0 withinDomain:(id)a1 forKey:(id)a2;
- (id)initWithURL:(id)a0;
- (void)cache:(id)a0 withinDomain:(id)a1 forKey:(id)a2 expiration:(id)a3;
- (id)_loadedCacheDomains;
- (void)executeTransaction:(id /* block */)a0;
- (void)cache:(id)a0 withinDomain:(id)a1 date:(id)a2 forKey:(id)a3 expiration:(id)a4 synchronous:(BOOL)a5;
- (id)cachedObjectWithinDomain:(id)a0 forKey:(id)a1;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache;
- (void)_ensureDomainIsLoaded:(id)a0;
- (id)_dirtyCacheDomains;
- (void)removeAllObjects;
- (void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)a0 forKey:(id)a1;
- (void)_markDomainDirty:(id)a0;
- (void)_concurrentQueue_barrier_writeCacheDictionaryToFile;

@end
