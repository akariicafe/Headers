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
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (BOOL)canUseLocationInformationWithHighlightInfo:(id)a0 graph:(id)a1;
- (id)curationOptionsForForHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1;
- (unsigned short)enrichmentStateWithHighlightInfo:(id)a0;
- (id)extendedCurationWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)highlightInfoWithHighlight:(id)a0 graph:(id)a1 highlightTailorContext:(id)a2;
- (id)keyAssetCurationCriteriaWithHighlightInfo:(id)a0 graph:(id)a1;
- (id)keyAssetWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 graph:(id)a2 progressBlock:(id /* block */)a3;
- (id)momentTitleByMomentUUIDWithHighlightInfo:(id)a0;
- (double)promotionScoreWithHighlightInfo:(id)a0;
- (id)summaryCurationWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 progressBlock:(id /* block */)a2;
- (id)titleWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 curatedAssets:(id)a2 keyAsset:(id)a3 createVerboseTitle:(BOOL)a4;

@end
