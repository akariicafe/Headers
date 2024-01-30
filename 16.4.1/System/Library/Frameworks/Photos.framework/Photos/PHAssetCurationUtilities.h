@class NSPredicate;

@interface PHAssetCurationUtilities : NSObject

@property (class, readonly) NSPredicate *internalPredicateToFilterAssetsEligibleForSyndication;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;
@property (class, readonly) NSPredicate *internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;
@property (class, readonly) NSPredicate *internalPredicateToIncludeOnlyReceivedSyndicatedAssets;

+ (double)IVSNSFWAnyConfidenceThresholdForSceneAnalysisVersion:(unsigned long long)a0;
+ (double)NSFWGeneralConfidenceThresholdForSceneAnalysisVersion:(unsigned long long)a0;
+ (BOOL)_isTabooEventIdentifier:(unsigned int)a0;
+ (double)_tabooVersion33ConfidenceThresholdForIdentifier:(unsigned int)a0;
+ (double)_tabooVersion50ConfidenceThresholdForIdentifier:(unsigned int)a0;
+ (double)_tabooVersion85ConfidenceThresholdForIdentifier:(unsigned int)a0;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 POIGeoHash:(id)a1 sceneGeography:(id)a2;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 POIGeoHash:(id)a1 sceneGeography:(id)a2 maxScenesCount:(long long)a3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2 sceneGeography:(id)a3;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:(id)a0 assetLatitude:(double)a1 assetLongitude:(double)a2 sceneGeography:(id)a3 maxScenesCount:(long long)a4;
+ (BOOL)assetIsSafeForWidgetDisplay:(id)a0;
+ (id)assetsShowcasingFoodWithoutFacesInAssets:(id)a0;
+ (id)filteredAndSortedPreviewAssetsByScoreFromAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)internalPredicateToIncludeOnlySentSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;
+ (id)previewCandidatesFromAssets:(id)a0;
+ (id)syndicationEligibilityForAssets:(id)a0;
+ (double)tabooEventConfidenceThresholdForIdentifier:(unsigned int)a0 forSceneAnalysisVersion:(unsigned long long)a1;

@end
