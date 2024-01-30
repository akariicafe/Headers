@interface FCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;

+ (id)cachedOnlyCachePolicy;
+ (id)ignoreCacheCachePolicy;
+ (id)cachePolicyWithSoftMaxAge:(double)a0;
+ (id)defaultCachePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
