@interface PGMemoryGeneratorUtils : NSObject

+ (id)_outdoorROITypes;
+ (id)babyAndChildPersonNodesAtHomeOrFrequentLocationInGraph:(id)a0;
+ (id)filterImportedAssets:(id)a0 byOverlapWithRelevantAssets:(id)a1 withGraph:(id)a2;
+ (id)filterImportedAssetsWithoutLocationAndWithoutSceneOrPersonOverlapFromAllAssets:(id)a0 withGraph:(id)a1;
+ (BOOL)isImportedAsset:(id)a0;
+ (id)momentNodesAtHomeOrWorkOrFrequentLocationInGraph:(id)a0;
+ (id)outdoorROIMomentNodesNotAtHomeOrFrequentLocationInGraph:(id)a0 useMomentFeatureEdges:(BOOL)a1;
+ (id)outdoorROINodesInGraph:(id)a0;
+ (id)personAndPetLocalIdentifiersInAssets:(id)a0;

@end
