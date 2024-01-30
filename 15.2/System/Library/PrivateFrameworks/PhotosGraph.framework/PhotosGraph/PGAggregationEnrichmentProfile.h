@class PGDejunkerDeduperOptions, NSString, PLDateRangeTitleGenerator, NSDictionary, PGManager;

@interface PGAggregationEnrichmentProfile : NSObject <PGEnrichmentProfile>

@property (retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator;
@property (readonly, nonatomic) PGManager *manager;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL collectsDebugInfo;
@property (readonly) NSDictionary *debugInfos;
@property (retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions;
@property (readonly, nonatomic) unsigned short targetEnrichmentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)canUseLocationInformationWithHighlightInfo:(id)a0 graph:(id)a1;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (id)highlightInfoWithHighlight:(id)a0 graph:(id)a1 highlightTailorContext:(id)a2;
- (double)promotionScoreWithHighlightInfo:(id)a0;
- (id)titleWithHighlightInfo:(id)a0 curatedAssets:(id)a1 keyAsset:(id)a2 createVerboseTitle:(BOOL)a3;
- (id)momentTitleByMomentUUIDWithHighlightInfo:(id)a0;
- (id)keyAssetWithHighlightInfo:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (id)extendedCurationWithHighlightInfo:(id)a0 progressBlock:(id /* block */)a1;
- (id)curationsWithHighlightInfo:(id)a0 progressBlock:(id /* block */)a1;
- (unsigned short)enrichmentStateWithHighlightInfo:(id)a0;
- (id)curationOptionsForForHighlightInfo:(id)a0;
- (id)keyAssetCurationCriteriaWithHighlightInfo:(id)a0 graph:(id)a1;

@end
