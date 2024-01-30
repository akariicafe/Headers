@interface PGMeaningfulEventSceneCollectionTrait : PGMeaningfulEventCollectionTrait

@property (nonatomic) unsigned long long minimumNumberOfHighConfidenceAssets;
@property (nonatomic) unsigned long long minimumNumberOfNegativeHighConfidenceAssets;
@property (nonatomic) double minimumRatioOfHighConfidenceAssets;
@property (nonatomic) BOOL accumulateHighConfidenceAssetCounts;

- (id)initWithNodes:(id)a0;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (id)initWithNodes:(id)a0 negativeNodes:(id)a1;

@end
