@class NSCache;

@interface INCache : NSObject {
    NSCache *_underlyingCache;
}

@property (readonly, nonatomic) NSCache *_cacheDictionary;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (void)addCacheableObject:(id)a0;
- (void)removeCacheableObject:(id)a0;
- (id)cacheableObjectForIdentifier:(id)a0;
- (id)consumeCacheableObjectForIdentifier:(id)a0;
- (void)removeAllCacheableObjects;
- (id)_init;

@end
