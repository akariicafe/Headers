@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, NSObject;

@interface CKDPCSMemoryCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryNotificationSource;
@property unsigned long long memoryStatus;
@property BOOL memoryStatusChanged;
@property (retain, nonatomic) id<NSObject> memoryCacheEvictNotificationObserver;
@property int fakeMemoryWarningToken;
@property double oldestCacheEntry;
@property unsigned long long memoryCacheRequestCount;
@property unsigned long long memoryCacheHitCount;
@property unsigned long long memoryCacheHighwaterCount;
@property unsigned long long memoryCacheDeleteCount;
@property unsigned long long memoryCacheUpdateCount;
@property unsigned long long memoryCacheEvictCount;
@property (nonatomic) unsigned long long maxEntries;
@property (nonatomic) double minAge;

+ (id)globalEvictQueue;
+ (void)registerEvictionTimer;

- (void)clearCache;
- (id)init;
- (id)CKStatusReportArray;
- (void)runCacheEviction;
- (void).cxx_destruct;
- (unsigned long long)_cacheCount;
- (void)dealloc;
- (BOOL)hasStatusToReport;
- (void)_lockedEvictEntriesFromCache;
- (void)setPCSData:(id)a0 forItemID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)getPCSDataFromCacheForID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;

@end
