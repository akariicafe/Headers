@class PHPhotoLibrary, NSDictionary;

@interface PGDejunkerDeduper_PHAsset : PGDejunkerDeduper_CLSInvestigationItem {
    NSDictionary *_personLocalIdentifiersByAssetUUID;
    NSDictionary *_peopleScenesByAssetUUID;
    NSDictionary *_averageFaceQualityByAssetUUID;
}

@property (readonly) PHPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)_buildCachesWithAssets:(id)a0 options:(id)a1;
- (id)bestItemInItems:(id)a0 options:(id)a1;
- (id)debugPersonStringForItem:(id)a0;
- (id)dejunkedDedupedAssetsInAssets:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)a0;
- (id)featureWithItem:(id)a0;
- (BOOL)isJunkForItem:(id)a0;
- (id)itemsSortedByScoreWithItems:(id)a0 options:(id)a1;

@end
