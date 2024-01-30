@class NSString, NSURLCache, ISURLCacheConfiguration;

@interface ISURLCache : NSObject {
    NSURLCache *_cache;
    ISURLCacheConfiguration *_configuration;
}

@property (readonly) NSString *persistentIdentifier;
@property (readonly, nonatomic) unsigned long long currentDiskUsage;
@property (readonly, nonatomic) unsigned long long currentMemoryUsage;
@property (readonly, nonatomic) unsigned long long diskCapacity;
@property (readonly, nonatomic) unsigned long long memoryCapacity;

+ (id)cacheDirectoryPath;

- (id)initWithCacheConfiguration:(id)a0;
- (id)cachedResponseForRequest:(id)a0;
- (id)init;
- (void)removeCachedResponseForRequest:(id)a0;
- (void)saveMemoryCacheToDisk;
- (void)dealloc;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (void)removeAllCachedResponses;
- (void)reloadWithCacheConfiguration:(id)a0;
- (void)purgeMemoryCache;

@end
