@class NSDate, NSString, TestTelemetry, NSMutableSet, NSURL, NSNumber, CacheDeleteVolume;

@interface AppCache : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *bundleRecords;
@property (readonly, nonatomic) CacheDeleteVolume *cdVol;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly) BOOL isEnterprise;
@property (readonly) BOOL isPlaceholder;
@property (readonly) BOOL isPlugin;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *userManagedAssetsURL;
@property (retain, nonatomic) NSNumber *lastKnownCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownGroupCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownTmpSize;
@property (retain, nonatomic) NSNumber *lastKnownFreespace;
@property (retain, nonatomic) NSDate *lastUsed;
@property double timestamp;
@property (retain, nonatomic) TestTelemetry *telemetry;

+ (void)enumerateAppCachesOnVolume:(id)a0 telemetry:(id)a1 block:(id /* block */)a2;
+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 dataContainerURL:(id)a2 personaUniqueString:(id)a3 isEnterprise:(BOOL)a4 isPlaceholder:(BOOL)a5 isPlugin:(BOOL)a6 telemetry:(id)a7;

- (BOOL)validate;
- (id)description;
- (int)urgency;
- (void).cxx_destruct;
- (id)tmpPath;
- (void)invalidate;
- (unsigned long long)clearCaches:(BOOL)a0;
- (id)cachePath;
- (unsigned long long)caches:(BOOL)a0 purge:(BOOL)a1;
- (unsigned long long)groupCache:(BOOL)a0;
- (unsigned long long)tmp:(BOOL)a0 purge:(BOOL)a1 all:(BOOL)a2;
- (void)addBundleRecords:(id)a0;
- (id)initWithBundleRecords:(id)a0 identifier:(id)a1 dataContainerURL:(id)a2 personaUniqueString:(id)a3 isEnterprise:(BOOL)a4 isPlaceholder:(BOOL)a5 isPlugin:(BOOL)a6 telemetry:(id)a7;
- (void)addBundleRecord:(id)a0;
- (long long)three_days_ago;
- (BOOL)moveCacheAside:(id)a0;

@end
