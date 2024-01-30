@class NSString, SPAssetCacheAssets;

@interface SPAssetCacheSyncData : NSObject

@property (retain, nonatomic) SPAssetCacheAssets *permanentCache;
@property (retain, nonatomic) SPAssetCacheAssets *transientCache;
@property (retain, nonatomic) NSString *cacheIdentifier;

+ (id)toProto:(id)a0;
+ (id)fromProto:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
