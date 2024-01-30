@class PHAssetCollection, NSArray, PHAsset;

@interface PXStoryPHAssetCollectionAssetsProducer : NSObject <PXStoryAssetsProducer>

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSArray *referencePersons;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)shouldEnableCurationForAssetCollection:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)requestAssetsWithOptions:(unsigned long long)a0 storyQueue:(id)a1 resultHandler:(id /* block */)a2;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1 referencePersons:(id)a2 options:(unsigned long long)a3;

@end
