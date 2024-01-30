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
- (id)extendedCurationWithHighlightTailorContext:(id)a0 progressBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)moodWithHighlightTailorContext:(id)a0 moodGenerationContext:(id)a1;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(id)a0;
- (double)promotionScoreWithHighlightTailorContext:(id)a0;
- (id)curationOptionsForForHighlightTailorContext:(id)a0;
- (id)curationsWithHighlightTailorContext:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)canUseLocationInformationForHighlightTailorContext:(id)a0;
- (id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)a0;
- (id)highlightTailorContextForHighlight:(id)a0;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)a0;
- (id)titleWithHighlightTailorContext:(id)a0 curatedAssets:(id)a1 keyAsset:(id)a2 createVerboseTitle:(BOOL)a3;
- (id)keyAssetWithHighlightTailorContext:(id)a0 progressBlock:(id /* block */)a1;

@end
