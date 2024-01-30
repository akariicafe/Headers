@class NSString, NSMutableDictionary;

@interface AMSEngagementClientData : NSObject

@property (retain, nonatomic) NSMutableDictionary *apps;
@property (retain, nonatomic) NSString *lastSyncedBuild;

+ (id)loadFromDisk;
+ (id)_sharedQueue;
+ (id)_fetchClientData;
+ (void)_assertEngagementd;
+ (BOOL)_isDaemon;
+ (void)_registerNotifications;

- (void).cxx_destruct;
- (id)destinationsForEvent:(id)a0;
- (id)cachedResponseDataForEvent:(id)a0;
- (id)initWithCacheObject:(id)a0;
- (void)_cleanUpApps;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (void)setWhitelists:(id)a0 appIdentifier:(id)a1;
- (void)saveToDisk;

@end
