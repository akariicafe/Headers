@class NSDictionary, PGGraph, NSSet;

@interface PGAssetFeatureBehavioralProcessor : NSObject <PGBehavioralAlgorithm>

@property (retain, nonatomic) NSDictionary *personFeatures;
@property (retain, nonatomic) NSDictionary *sceneFeatures;
@property (retain, nonatomic) PGGraph *graph;
@property (retain, nonatomic) NSSet *goldAssets;
@property (nonatomic) double similarityScoreNormalizer;

- (void).cxx_destruct;
- (id)initWithGoldAssets:(id)a0 graph:(id)a1;
- (id)initWithGoldAssets:(id)a0 graph:(id)a1 persistedData:(id)a2;
- (void)preprocessWithProgressBlock:(id /* block */)a0;
- (float)semanticScoreForAsset:(id)a0;
- (id)semanticScoreByAssetUUIDForAssets:(id)a0;
- (id)dataToPersist;
- (id)_semanticScoreByAssetUUIDForAssets:(id)a0 normalize:(BOOL)a1;
- (void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(id /* block */)a0;

@end
