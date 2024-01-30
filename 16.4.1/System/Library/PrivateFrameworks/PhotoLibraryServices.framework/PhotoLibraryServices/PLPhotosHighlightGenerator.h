@class PLLocalCreationDateCreator, PLDateRangeTitleGenerator, NSDateInterval, NSMutableSet, PLHighlightHierarchy, PLPhotosHighlightClusterGenerator, PLFrequentLocationManager;
@protocol PLMomentGenerationDataManagement, PLHighlightItemModelReader;

@interface PLPhotosHighlightGenerator : NSObject

@property (retain, nonatomic) PLHighlightHierarchy *entitiesToUpdate;
@property (retain, nonatomic) NSMutableSet *highlightsWithDeletedAssets;
@property (retain, nonatomic) NSMutableSet *upsertedHighlights;
@property (retain, nonatomic) NSMutableSet *highlightsToDelete;
@property (nonatomic) BOOL didCallBeginGeneration;
@property (weak, nonatomic) id<PLMomentGenerationDataManagement, PLHighlightItemModelReader> dataManager;
@property (readonly, nonatomic) NSDateInterval *recentHighlightsDateInterval;
@property (readonly, nonatomic) PLPhotosHighlightClusterGenerator *highlightClusterGenerator;
@property (retain, nonatomic) NSMutableSet *highlightsNeedingNewKeyAsset;
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (readonly, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator;

+ (void)initialize;
+ (void)_updateParentHighlightNeedingNewKeyAsset:(id)a0 withProvisionalKeyAssetPrivate:(id)a1 andProvisionalKeyAssetShared:(id)a2 updatedHighlights:(id)a3;
+ (id)_bestAssetInAssets:(id)a0 fallback:(BOOL)a1;
+ (id)userDefaults;
+ (void)updateTitleForHighlights:(id)a0 forKind:(unsigned short)a1 forceUpdateLocale:(BOOL)a2 dateRangeTitleGenerator:(id)a3;
+ (double)curationScoreForAsset:(id)a0;
+ (void)updateKeyAssetForHighlights:(id)a0;
+ (void)setLastHighlightTitlesUpdateDay:(id)a0;
+ (void)_updateMixedSharingCompositionKeyAssetRelationshipForHighlight:(id)a0;
+ (id)_provisionalKeyAssetForDayGroupHighlight:(id)a0 sharingConsideration:(long long)a1;
+ (id)provisionalKeyAssetForHighlight:(id)a0 sharingConsideration:(long long)a1;
+ (id)_provisionalKeyAssetForMonthAndYearHighlight:(id)a0 sharingConsideration:(long long)a1;
+ (id)_provisionalKeyAssetForDayHighlight:(id)a0 sharingConsideration:(long long)a1;
+ (BOOL)assetEligibleForRecents:(id)a0;
+ (id)lastHighlightTitlesUpdateDay;
+ (BOOL)_shouldUpdateKeyAssetForParentHighlight:(id)a0 withPrivateKeyAssetObjectID:(id)a1 andSharedKeyAssetObjectID:(id)a2;
+ (BOOL)assetEligibleForCuration:(id)a0;

- (id)_fetchMomentsRequiringLocationProcessingWhenFrequentLocationsChanged;
- (void)_resetProperties;
- (void)_consumeHighlightItemListChanges:(id)a0 forKind:(unsigned short)a1 rule:(id)a2 resultBlock:(id /* block */)a3;
- (void)resetDayGroupCurationForAsset:(id)a0;
- (BOOL)_highlightShouldNotBeVisible:(id)a0 sharingConsideration:(long long)a1;
- (id)updateElectedEventForUpdatedMonths:(id)a0;
- (void)finishGeneration;
- (void)registerHighlightsWithDeletedMoments:(id)a0;
- (id)_highlightMomentClustersForMoments:(id)a0 excludingMomentIds:(id)a1;
- (void)updateRecentHighlightCurationForHighlight:(id)a0;
- (id)_insertDayGroupPhotosHighlightCluster:(id)a0;
- (id)_collectMomentsRequiringReprocessingFromMoments:(id)a0 withAllMoments:(id)a1;
- (void)resetPreviousRecentHighlightCurationForHighlight:(id)a0;
- (void)_updateDayHighlight:(id)a0 withNewAssets:(id)a1;
- (id)_recentHighlightsDateIntervalWithDate:(id)a0;
- (id)fetchAllOngoingTripDayGroupHighlights;
- (void)cleanupEmptyHighlights;
- (id)_fetchMomentsWithLocationTypeUnprocessed;
- (BOOL)_highlightTypeSupportsVisibilityStateDayOnly:(unsigned short)a0;
- (void)updateCurationForHighlight:(id)a0 withAssetsBelongingToCuration:(id)a1;
- (BOOL)_setVisibilityStateForHighlight:(id)a0 shouldForceUpdate:(BOOL)a1 sharingConsideration:(long long)a2;
- (void)processUnprocessedMomentLocations;
- (void)beginGenerationWithAssets:(id)a0 hiddenAssets:(id)a1;
- (id)initWithDataManager:(id)a0 frequentLocationManager:(id)a1 localCreationDateCreator:(id)a2 dateRangeTitleGenerator:(id)a3;
- (void)generateHighlightsForUpsertedMoments:(id)a0 frequentLocationsDidChange:(BOOL)a1;
- (void)_insertDayPhotosHighlightCluster:(id)a0;
- (void)updateTitlesForHighlight:(id)a0 options:(unsigned long long)a1;
- (void)markHighlightNeedingNewKeyAssetsWithAsset:(id)a0;
- (void)generateHighlightListForUpdatedHighlights:(id)a0 deletedHighlights:(id)a1;
- (BOOL)_updateHighlightProperties:(id)a0 fromHighlightCluster:(id)a1;
- (void)_updateDayGroupHighlight:(id)a0 withNewAssets:(id)a1;
- (id)_highlightToReuseForMoments:(id)a0;
- (id)fetchAllRecentHighlights;
- (void).cxx_destruct;
- (void)updateHighlightTitles;
- (void)processRecentHighlights;
- (id)_fetchAllMoments;
- (BOOL)shouldForceVisibilityStateUpdateForHighlight:(id)a0 highlightCluster:(id)a1;
- (BOOL)setVisibilityStateForHighlight:(id)a0 shouldForceUpdate:(BOOL)a1;

@end
