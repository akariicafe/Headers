@interface WebApplicationCache : NSObject

+ (void)setMaximumSize:(long long)a0;
+ (long long)maximumSize;
+ (void)initializeWithBundleIdentifier:(id)a0;
+ (long long)defaultOriginQuota;
+ (void)setDefaultOriginQuota:(long long)a0;
+ (long long)diskUsageForOrigin:(id)a0;
+ (void)deleteAllApplicationCaches;
+ (void)deleteCacheForOrigin:(id)a0;
+ (id)originsWithCache;

@end
