@class NSPredicate;

@interface PHAssetCurationUtilities : NSObject

@property (class, readonly) NSPredicate *internalPredicateToFilterAssetsEligibleForSyndication;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;
@property (class, readonly) NSPredicate *internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;
@property (class, readonly) NSPredicate *internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;
@property (class, readonly) NSPredicate *internalPredicateToIncludeOnlyReceivedSyndicatedAssets;

+ (BOOL)assetIsSafeForWidgetDisplay:(id)a0;
+ (id)syndicationEligibilityForAssets:(id)a0;
+ (id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;
+ (id)assetsShowcasingFoodWithoutFacesInAssets:(id)a0;
+ (double)NSFWGeneralConfidenceThresholdForSceneAnalysisVersion:(unsigned long long)a0;
+ (id)previewCandidatesFromAssets:(id)a0;
+ (id)internalPredicateToIncludeOnlySentSyndicatedAssets;
+ (id)filteredAndSortedPreviewAssetsByScoreFromAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)_isTabooEventIdentifier:(unsigned int)a0;
+ (id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;
+ (double)_tabooVersion33ConfidenceThresholdForIdentifier:(unsigned int)a0;
+ (double)_tabooVersion50ConfidenceThresholdForIdentifier:(unsigned int)a0;
+ (double)tabooEventConfidenceThresholdForIdentifier:(unsigned int)a0 forSceneAnalysisVersion:(unsigned long long)a1;

@end
