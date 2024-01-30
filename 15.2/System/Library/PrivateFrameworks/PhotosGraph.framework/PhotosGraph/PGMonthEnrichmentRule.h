@class NSString, PGGraphMomentNodeCollection, NSObject;
@protocol PGHighlightItemModelReader, OS_os_log;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule> {
    PGGraphMomentNodeCollection *_momentNodesAtWork;
}

@property (readonly, nonatomic) id<PGHighlightItemModelReader> modelReader;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 withGraph:(id)a1 neighborScoreComputer:(id)a2 usingBlock:(id /* block */)a3 maximumNumberOfVisibleItems:(unsigned long long)a4 maximumNumberOfVisibleRegularItems:(unsigned long long)a5;
- (double)promotionScoreForHighlightItemList:(id)a0;
- (id)keyAssetForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (id)curatedAssetsForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 withGraph:(id)a1 neighborScoreComputer:(id)a2 usingBlock:(id /* block */)a3;
- (id)initWithModelReader:(id)a0 loggingConnection:(id)a1;
- (id)firstKeyAssetWithHighlightItemList:(id)a0;
- (id)fallbackKeyAssetWithHighlightItemList:(id)a0;
- (id)_sampleAssets:(id)a0 withSize:(unsigned long long)a1;
- (id)_momentNodesAtWorkWithGraph:(id)a0;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)a0 previouslySelectedItemsCountByWeek:(id)a1 maximumNumberOfItems:(unsigned long long)a2 sortDescriptors:(id)a3;
- (id)sortedItemsByWeekOfMonthFromItems:(id)a0 sortDescriptors:(id)a1;

@end
