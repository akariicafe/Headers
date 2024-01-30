@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementVideoComplementCacheMissCount;
- (id)initWithAssetsdClient:(id)a0;
- (void)incrementImageCacheMissCount;
- (void)incrementImageCacheHitCount;
- (void)incrementVideoComplementCacheHitCount;

@end
