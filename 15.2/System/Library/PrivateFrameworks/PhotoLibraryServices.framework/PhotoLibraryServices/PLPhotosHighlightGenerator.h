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
+ (id)_provisionalKeyAssetForMonthAndYearHighlight:(id)a0;
+ (BOOL)assetEligibleForRecents:(id)a0;
+ (id)userDefaults;
+ (id)_provisionalKeyAssetForDayHighlight:(id)a0;
+ (id)_bestAssetInAssets:(id)a0 fallback:(BOOL)a1;
+ (BOOL)assetEligibleForCuration:(id)a0;
+ (BOOL)_shouldUpdateKeyAssetForParentHighlight:(id)a0 withKeyAssetObjectID:(id)a1;
+ (void)updateKeyAssetForHighlights:(id)a0;
+ (void)_updateParentHighlighNeedingNewKeyAsset:(id)a0 withProvisionalKeyAsset:(id)a1 updatedHighlights:(id)a2;
+ (void)updateTitleForHighlights:(id)a0 forKind:(unsigned short)a1 forceUpdateLocale:(BOOL)a2 dateRangeTitleGenerator:(id)a3;
+ (double)curationScoreForAsset:(id)a0;
+ (id)provisionalKeyAssetForHighlight:(id)a0;
+ (id)_provisionalKeyAssetForDayGroupHighlight:(id)a0;

- (void)resetDayGroupCurationForAsset:(id)a0;
- (BOOL)setDefaultVisibilityStateForHighlight:(id)a0 withHighlightCluster:(id)a1;
- (id)_insertDayGroupPhotosHighlightCluster:(id)a0;
- (id)_collectMomentsRequiringReprocessingFromMoments:(id)a0 withAllMoments:(id)a1;
- (id)fetchAllRecentHighlights;
- (id)_highlightMomentClustersForMoments:(id)a0 excludingMomentIds:(id)a1;
- (BOOL)_highlightTypeSupportsVisibilityStateDayOnly:(unsigned short)a0;
- (id)_titleForAggregationDayGroupHighlight:(id)a0;
- (void)generateHighlightListForUpdatedHighlights:(id)a0 deletedHighlights:(id)a1;
- (void)updateCurationForHighlight:(id)a0 withAssetsBelongingToCuration:(id)a1;
- (void)generateHighlightsForUpsertedMoments:(id)a0 frequentLocationsDidChange:(BOOL)a1;
- (void)_updateDayHighlight:(id)a0 withNewAssets:(id)a1;
- (void)_resetProperties;
- (void)processRecentHighlights;
- (void)updateRecentHighlightCurationForHighlight:(id)a0;
- (id)_recentHighlightsDateIntervalWithDate:(id)a0;
- (id)_fetchMomentsRequiringLocationProcessingWhenFrequentLocationsChanged;
- (void)beginGenerationWithAssets:(id)a0 hiddenAssets:(id)a1;
- (void)_updateDayGroupHighlight:(id)a0 withNewAssets:(id)a1;
- (void).cxx_destruct;
- (void)finishGeneration;
- (void)registerHighlightsWithDeletedMoments:(id)a0;
- (void)cleanupEmptyHighlights;
- (void)processUnprocessedMomentLocations;
- (id)updateElectedEventForUpdatedMonths:(id)a0;
- (id)_lastHighlightTitlesUpdateDay;
- (void)_consumeHighlightItemListChanges:(id)a0 forKind:(unsigned short)a1 rule:(id)a2 resultBlock:(id /* block */)a3;
- (void)updateHighlightNeedingNewKeyAssetsWithAsset:(id)a0;
- (void)resetPreviousRecentHighlightCurationForHighlight:(id)a0;
- (id)_highlightToReuseForMoments:(id)a0;
- (id)initWithDataManager:(id)a0 frequentLocationManager:(id)a1 localCreationDateCreator:(id)a2;
- (id)_fetchAllMoments;
- (id)_fetchMomentsWithLocationTypeUnprocessed;
- (void)_setLastHighlightTitlesUpdateDay:(id)a0;
- (id)fetchAllOngoingTripDayGroupHighlights;
- (void)_insertDayPhotosHighlightCluster:(id)a0;
- (void)updateHighlightTitles;
- (BOOL)_updateHighlightProperties:(id)a0 fromHighlightCluster:(id)a1;

@end
