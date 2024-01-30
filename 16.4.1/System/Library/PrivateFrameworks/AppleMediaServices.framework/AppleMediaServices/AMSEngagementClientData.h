@class NSURL, NSMutableDictionary, NSString;

@interface AMSEngagementClientData : NSObject

@property (class, readonly, nonatomic) NSURL *clientDataURL;

@property (retain, nonatomic) NSMutableDictionary *apps;
@property (retain, nonatomic) NSString *lastSyncedBuild;

+ (id)_sharedQueue;
+ (void)_assertEngagementd;
+ (BOOL)_isDaemon;
+ (void)erase;
+ (void)_registerNotifications;
+ (id)loadFromDisk;
+ (id)_fetchClientData;

- (void)saveToDisk;
- (id)cachedResponseDataForEvent:(id)a0;
- (void)_cleanUpApps;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (id)initWithCacheObject:(id)a0;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (id)destinationsForEvent:(id)a0;
- (void).cxx_destruct;

@end
