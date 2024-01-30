@interface PGHighlightEnrichmentUtilities : NSObject

+ (id)filteredAssetsInAssets:(id)a0 withSharingComposition:(unsigned short)a1 forSharingFilter:(unsigned short)a2;
+ (id)assetPropertySetsForEnrichment;
+ (BOOL)canUseSharingComposition:(unsigned short)a0 forSharingFilter:(unsigned short)a1;
+ (id)childHighlightNodeOfGroupHighlightNode:(id)a0 withLocalIdentifier:(id)a1;
+ (id)filteredHighlightNodesWithHighlightNodes:(id)a0 forSharingFilter:(unsigned short)a1;
+ (id)filteredMomentNodesWithHighlightNode:(id)a0 forSharingFilter:(unsigned short)a1;
+ (id)headKeyAssetWithExtendedCuration:(id)a0;
+ (id)internalPredicateForFetchingAssetsForSharingFilter:(unsigned short)a0;
+ (id)keyAssetForDayGroupHighlightWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 curationManager:(id)a2;
+ (id)keyAssetForMixedSharingCompositionKeyAssetRelationship:(unsigned short)a0 keyAssetPrivate:(id)a1 keyAssetShared:(id)a2;
+ (double)meaningScoreWithMeanings:(id)a0 forLongTrip:(BOOL)a1 graph:(id)a2 collection:(id)a3 keyAsset:(id)a4 keyAssetCriteriaScore:(double *)a5 curationManager:(id)a6;
+ (unsigned short)mixedSharingCompositionKeyAssetRelationshipForKeyAssetPrivate:(id)a0 keyAssetShared:(id)a1 shouldCompareHighlight:(BOOL)a2;
+ (id)requiredAssetsInAssets:(id)a0 withHighlightInfo:(id)a1;
+ (id)selectKeyAssetForSharingComposition:(unsigned short)a0 mixedSharingCompositionKeyAssetRelationship:(unsigned short)a1 givenHighlightFilter:(unsigned short)a2 privateHandler:(id /* block */)a3 sharedHandler:(id /* block */)a4;

@end
