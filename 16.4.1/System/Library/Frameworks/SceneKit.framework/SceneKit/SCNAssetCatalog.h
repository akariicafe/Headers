@class NSURL, NSDictionary, NSMutableDictionary;

@interface SCNAssetCatalog : NSObject {
    NSDictionary *_db;
    NSMutableDictionary *_cache;
}

@property (readonly, nonatomic) NSURL *catalogURL;

+ (void)clearCache;
+ (id)recursivePathsForResourcesOfType:(id)a0 inDirectory:(id)a1;
+ (id)assetCatalogForResourceURL:(id)a0;
+ (id)assetCatalogNamed:(id)a0;
+ (id)assetCatalogWithURL:(id)a0;
+ (id)objectWithName:(id)a0 class:(Class)a1;

- (void)dealloc;
- (id)actionNamed:(id)a0;
- (id)URLOfResourceNamed:(id)a0;
- (id)animationNamed:(id)a0;
- (void)cacheObject:(id)a0 withTimestamp:(double)a1 forKey:(id)a2;
- (id)particleSystemNamed:(id)a0;
- (id)pathByMakingURLRelativeToCatalog:(id)a0;
- (id)sceneNamed:(id)a0;
- (id)sceneWithURL:(id)a0;

@end
