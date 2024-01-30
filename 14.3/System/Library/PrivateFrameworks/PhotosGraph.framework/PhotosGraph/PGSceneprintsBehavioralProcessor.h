@class NSSet, NSMapTable;

@interface PGSceneprintsBehavioralProcessor : NSObject <PGBehavioralAlgorithm>

@property (readonly, nonatomic) NSSet *goldAssets;
@property (readonly, nonatomic) NSSet *goldAssetUUIDs;
@property (readonly, nonatomic) NSMapTable *goldAssetSceneprintsAndDates;
@property (nonatomic) double similarityThreshold;

- (void).cxx_destruct;
- (id)initWithGoldAssets:(id)a0 graph:(id)a1;
- (id)initWithGoldAssets:(id)a0 graph:(id)a1 persistedData:(id)a2;
- (void)preprocessWithProgressBlock:(id /* block */)a0;
- (float)semanticScoreForAsset:(id)a0;
- (id)semanticScoreByAssetUUIDForAssets:(id)a0;
- (id)dataToPersist;

@end
