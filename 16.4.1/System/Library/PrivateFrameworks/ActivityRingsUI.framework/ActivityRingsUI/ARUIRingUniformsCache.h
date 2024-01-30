@class NSCache;

@interface ARUIRingUniformsCache : NSObject {
    NSCache *_cache;
}

+ (id)defaultCache;
+ (id)cacheWithLimit:(unsigned long long)a0;

- (void)clearCache;
- (id)initWithLimit:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)uniformsForRing:(id)a0 renderedInContext:(id)a1;

@end
