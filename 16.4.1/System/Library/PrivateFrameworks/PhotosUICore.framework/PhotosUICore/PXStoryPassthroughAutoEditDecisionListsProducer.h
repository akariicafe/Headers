@class NSArray, PXStoryAutoEditMomentsProvider, NSString;

@interface PXStoryPassthroughAutoEditDecisionListsProducer : NSObject <PXStoryAutoEditDecisionListsProducer>

@property (readonly, nonatomic) NSArray *autoEditDecisionLists;
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)handlesDiagnosticTextForHUDType:(long long)a0;
- (id)initWithAutoEditDecisionLists:(id)a0;
- (id)requestAutoEditDecisionListsWithOptions:(unsigned long long)a0 songs:(id)a1 colorGradeCategoriesBySong:(id)a2 resultHandler:(id /* block */)a3;
- (id)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
