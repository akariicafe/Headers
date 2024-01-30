@interface AMSFeatureFlagTask : AMSTask

+ (void)clearCache;
+ (id)_cacheDirectory;
+ (id)lastFetchedDate;
+ (id)cachedRemoteGroups;
+ (id)_cachePath;

- (id)_bag;
- (id)perform;
- (id)_updateRemoteFeatureFlags;
- (BOOL)_cacheResponse:(id)a0 error:(id *)a1;

@end
