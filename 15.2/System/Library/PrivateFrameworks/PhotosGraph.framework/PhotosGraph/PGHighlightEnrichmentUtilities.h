@interface PGHighlightEnrichmentUtilities : NSObject

+ (id)keyAssetForDayGroupHighlightWithHighlightInfo:(id)a0 curationManager:(id)a1;
+ (id)childHighlightNodeOfGroupHighlightNode:(id)a0 withLocalIdentifier:(id)a1;
+ (double)meaningScoreWithMeanings:(id)a0 forLongTrip:(BOOL)a1 graph:(id)a2 collection:(id)a3 keyAsset:(id)a4 keyAssetCriteriaScore:(double *)a5 curationManager:(id)a6;
+ (id)firstKeyAssetWithTripHighlight:(id)a0;
+ (id)headKeyAssetWithExtendedCuration:(id)a0;
+ (id)requiredAssetsInAssets:(id)a0 withHighlightInfo:(id)a1;

@end
