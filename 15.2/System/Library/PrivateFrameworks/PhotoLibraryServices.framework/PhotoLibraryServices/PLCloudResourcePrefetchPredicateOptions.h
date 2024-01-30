@class PLPrefetchConfiguration;

@interface PLCloudResourcePrefetchPredicateOptions : NSObject <NSCopying>

@property (nonatomic) long long prefetchMode;
@property (nonatomic) long long prefetchOptimizeMode;
@property (nonatomic) BOOL excludeDynamicResources;
@property (retain, nonatomic) PLPrefetchConfiguration *prefetchConfiguration;

- (id)initWithPrefetchMode:(long long)a0 prefetchOptimizeMode:(long long)a1 excludeDynamicResources:(BOOL)a2 prefetchConfiguration:(id)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
