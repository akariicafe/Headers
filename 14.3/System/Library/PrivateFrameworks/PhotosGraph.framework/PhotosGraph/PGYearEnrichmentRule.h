@class NSString, PGManager;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>

@property (readonly, nonatomic) PGManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (double)promotionScoreForHighlightItemList:(id)a0;
- (id)keyAssetForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (id)curatedAssetsForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 withBlock:(id /* block */)a1;

@end
