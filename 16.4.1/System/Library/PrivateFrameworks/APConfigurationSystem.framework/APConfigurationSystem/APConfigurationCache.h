@class APUnfairRecursiveLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface APConfigurationCache : NSObject <APPurgeableCacheNotifierP>

@property (retain, nonatomic) NSMutableDictionary *configurationStorage;
@property (retain, nonatomic) NSMutableDictionary *configurationUseRecord;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushCacheTimer;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *configSystemCacheQueue;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isObjectInCache:(id)a0;
- (void)recentlyAccessedObject:(id)a0;
- (void)_updateMostRecentAccessForPath:(id)a0;
- (void)_flushCacheStorage;
- (void)_startFlushCacheTimer;
- (void)_stopFlushCacheTimer;
- (id)configurationForPath:(id)a0;
- (void)resetConfigurationUseForPath:(id)a0;
- (void)setConfiguration:(id)a0 forPath:(id)a1;

@end
