@class MUTimeExpirableLRUCache;

@interface MUAMSResultCache : NSObject {
    MUTimeExpirableLRUCache *_amsResultsByAdamIds;
    MUTimeExpirableLRUCache *_amsResultsByBundleIds;
}

- (void).cxx_destruct;
- (id)amsResultForAdamId:(id)a0;
- (id)amsResultForBundleId:(id)a0;
- (id)initWithAppAdamIdCacheCount:(unsigned long long)a0 appAdamIdTimeToLive:(unsigned long long)a1 bundleIdCacheCount:(unsigned long long)a2 bundleIdTimeToLive:(unsigned long long)a3;
- (void)setAMSResult:(id)a0 forAdamId:(id)a1;
- (void)setAMSResult:(id)a0 forBundleId:(id)a1;

@end
