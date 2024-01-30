@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSMemoryCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property double oldestCacheEntry;
@property unsigned long long memoryCacheRequestCount;
@property unsigned long long memoryCacheHitCount;
@property unsigned long long memoryCacheHighwaterCount;
@property unsigned long long memoryCacheDeleteCount;
@property unsigned long long memoryCacheUpdateCount;
@property unsigned long long memoryCacheEvictCount;
@property (nonatomic) unsigned long long maxEntries;
@property (nonatomic) double minAge;

+ (void)initialize;
+ (void)registerEvictionTimer;
+ (void)startEvictionTimer;
+ (void)setupMemoryNotifications;
+ (void)stopEvictionTimer;
+ (void)runMemoryCacheEvictionInAllCaches;

- (BOOL)hasStatusToReport;
- (void)clearCache;
- (id)CKStatusReportArray;
- (void)runCacheEviction;
- (void)_lockedEvictEntriesFromCache;
- (void)setPCSData:(id)a0 forItemID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (unsigned long long)_cacheCount;
- (id)init;
- (void)getPCSDataFromCacheForID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;

@end
