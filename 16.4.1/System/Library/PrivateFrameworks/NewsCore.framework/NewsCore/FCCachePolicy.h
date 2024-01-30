@class NSDate;

@interface FCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;
@property (readonly, nonatomic) NSDate *oldestAllowedDate;

+ (id)ignoreCacheCachePolicy;
+ (id)cachePolicyWithSoftMaxAge:(double)a0;
+ (id)defaultCachePolicy;
+ (id)cachedOnlyCachePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
