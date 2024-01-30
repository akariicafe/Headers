@class NSCache;

@interface INCache : NSObject {
    NSCache *_underlyingCache;
}

@property (readonly, nonatomic) NSCache *_cacheDictionary;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)addCacheableObject:(id)a0;
- (void)removeCacheableObject:(id)a0;
- (id)cacheableObjectForIdentifier:(id)a0;
- (void)removeAllCacheableObjects;
- (id)consumeCacheableObjectForIdentifier:(id)a0;
- (id)_init;

@end
