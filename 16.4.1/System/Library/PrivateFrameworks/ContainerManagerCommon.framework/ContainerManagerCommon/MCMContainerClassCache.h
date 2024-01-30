@class NSMutableDictionary, MCMUserIdentityCache, NSString, NSUUID, NSObject, MCMContainerClassPath;
@protocol OS_dispatch_queue;

@interface MCMContainerClassCache : NSObject <MCMContainerCacheUpdatable, MCMContainerClassCache>

@property (readonly, nonatomic) NSMutableDictionary *lock_cache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fsScanQueue;
@property (nonatomic) BOOL writeThroughEnabled;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) Class cacheEntryClass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *targetDiskScanUUID;
@property (retain, nonatomic) NSUUID *lastCompletedDiskScanUUID;
@property (readonly, nonatomic) MCMContainerClassPath *containerClassPath;
@property (copy, nonatomic) id /* block */ concurrentWriteThroughHandler;
@property (nonatomic) BOOL resyncRequired;

- (void)_processURLs:(id)a0 handler:(id /* block */)a1;
- (void)_processCorruptEntries:(id)a0 handler:(id /* block */)a1;
- (void)_handleUnrecoverableCorruptContainerPath:(id)a0;
- (void)flush;
- (id)cacheEntryForIdentifier:(id)a0;
- (void)_concurrent_processCorruptEntry:(id)a0 handler:(id /* block */)a1;
- (id)initWithContainerClassPath:(id)a0 cacheEntryClass:(Class)a1 targetQueue:(id)a2 userIdentityCache:(id)a3;
- (void)_queue_syncWithDisk;
- (void)waitForSynchronizationToComplete;
- (id)setCacheEntry:(id)a0 forIdentifier:(id)a1 writeThrough:(BOOL)a2;
- (id)setCacheEntry:(id)a0 forIdentifier:(id)a1;
- (id)_setEntry:(id)a0 forIdentifier:(id)a1 writeThrough:(BOOL)a2;
- (BOOL)_checkExistanceOfCacheEntry:(id)a0 libraryRepair:(id)a1;
- (void)_concurrent_processURL:(id)a0 handler:(id /* block */)a1;
- (id)_concurrent_generateCacheEntryWithURL:(id)a0 identifier:(id)a1 containerPath:(id)a2 schemaVersion:(id)a3 uuid:(id)a4 metadata:(id)a5;
- (BOOL)enumerateCacheEntriesWithEnumerator:(id /* block */)a0;
- (id)_concurrent_slowGenerateCacheEntryWithFD:(int)a0 URL:(id)a1 identifier:(id)a2 uuid:(id)a3 schemaVersion:(id)a4 containerPath:(id)a5;
- (void)forceWriteThrough;
- (void)asyncStartSynchronization;
- (void).cxx_destruct;

@end
