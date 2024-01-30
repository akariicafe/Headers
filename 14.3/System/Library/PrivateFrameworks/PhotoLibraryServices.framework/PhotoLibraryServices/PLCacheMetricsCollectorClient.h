@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementVideoComplementCacheHitCount;
- (void)incrementVideoComplementCacheMissCount;
- (void)incrementImageCacheMissCount;
- (void)incrementImageCacheHitCount;
- (id)initWithAssetsdClient:(id)a0;

@end
