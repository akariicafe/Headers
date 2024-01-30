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

- (void)purgeMemoryCache;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (id)cachedResponseForRequest:(id)a0;
- (void)removeCachedResponseForRequest:(id)a0;
- (void)dealloc;
- (id)initWithCacheConfiguration:(id)a0;
- (void)removeAllCachedResponses;
- (id)init;
- (void)saveMemoryCacheToDisk;
- (void)reloadWithCacheConfiguration:(id)a0;

@end
