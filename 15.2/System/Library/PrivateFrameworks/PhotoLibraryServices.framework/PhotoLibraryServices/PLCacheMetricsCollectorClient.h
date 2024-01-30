@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementImageCacheMissCount;
- (void)incrementVideoComplementCacheMissCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementVideoComplementCacheHitCount;
- (void)incrementImageCacheHitCount;

@end
