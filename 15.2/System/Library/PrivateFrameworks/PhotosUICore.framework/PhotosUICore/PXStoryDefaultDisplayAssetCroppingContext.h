@class NSSet;
@protocol PXDisplayAssetCollection;

@interface PXStoryDefaultDisplayAssetCroppingContext : PXStoryBaseDisplayAssetCroppingContext

@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) NSSet *featuredPersonLocalIdentifiers;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetCollection:(id)a0;
- (id)adjustOrderedFaces:(id)a0 featuredFaceCount:(long long *)a1;
- (id)orderFaces:(id)a0;
- (id)adjustOrderedFaces:(id)a0 featuredFaceCount:(long long *)a1 forFeaturedPersonWithLocalIdentifiers:(id)a2;

@end
