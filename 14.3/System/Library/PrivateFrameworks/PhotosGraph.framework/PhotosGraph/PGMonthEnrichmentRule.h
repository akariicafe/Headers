@class NSString, PGManager;
@protocol PGHighlightItemModelReader;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>

@property (readonly, nonatomic) id<PGHighlightItemModelReader> modelReader;
@property (readonly, nonatomic) PGManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 withBlock:(id /* block */)a1 maximumNumberOfVisibleItems:(unsigned long long)a2 maximumNumberOfVisibleRegularItems:(unsigned long long)a3;
- (double)promotionScoreForHighlightItemList:(id)a0;
- (id)keyAssetForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (id)curatedAssetsForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithManager:(id)a0 modelReader:(id)a1;
- (id)firstKeyAssetWithHighlightItemList:(id)a0;
- (id)fallbackKeyAssetWithHighlightItemList:(id)a0;
- (id)_sampleAssets:(id)a0 withSize:(unsigned long long)a1;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)a0 previouslySelectedItemsCountByWeek:(id)a1 maximumNumberOfItems:(unsigned long long)a2 sortDescriptors:(id)a3;
- (id)sortedItemsByWeekOfMonthFromItems:(id)a0 sortDescriptors:(id)a1;

@end
