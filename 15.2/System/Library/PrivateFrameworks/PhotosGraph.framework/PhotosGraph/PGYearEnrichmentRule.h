@class NSString, NSObject;
@protocol OS_os_log;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>

@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0;
- (double)promotionScoreForHighlightItemList:(id)a0;
- (id)keyAssetForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (id)curatedAssetsForHighlightItemList:(id)a0 contextualKeyAssetByHighlighItemUUID:(id)a1;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 withGraph:(id)a1 neighborScoreComputer:(id)a2 usingBlock:(id /* block */)a3;

@end
