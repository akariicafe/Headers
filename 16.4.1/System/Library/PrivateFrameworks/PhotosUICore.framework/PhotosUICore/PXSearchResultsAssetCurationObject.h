@class PHAsset;

@interface PXSearchResultsAssetCurationObject : NSObject

@property (nonatomic) float preCalculatedDominantSceneScore;
@property (readonly, copy, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) float dominantSceneScore;

+ (float)_calculateDominantSceneScoreWithSceneClassifications:(id)a0 searchQuerySceneIdentifiers:(id)a1 sceneTaxonomy:(id)a2;
+ (id)_sceneClassificationForSceneIdentifier:(unsigned int)a0 sceneClassifications:(id)a1;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 sceneClassifications:(id)a1 searchQuerySceneIdentifiers:(id)a2 sceneTaxonomyProvider:(id)a3;

@end
