@class TIAsset, NSMutableSet, TIAssetAttributes;

@interface TIAssetVersions : NSObject

@property (readonly, nonatomic) NSMutableSet *assets;
@property (nonatomic) TIAsset *currentAsset;
@property (readonly, nonatomic) TIAssetAttributes *attributes;
@property (readonly, nonatomic) unsigned long long count;

- (id)initWithAttributes:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)recursiveDescription;
- (BOOL)purgeAsset:(id)a0;
- (id)purgeableAssets;
- (void)addAsset:(id)a0;
- (id)assetContentItemsMatching:(id)a0;

@end
