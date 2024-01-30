@class NSArray, PXStoryAutoEditMomentsProvider, NSString;

@interface PXStoryPassthroughAutoEditDecisionListsProducer : NSObject <PXStoryAutoEditDecisionListsProducer>

@property (readonly, nonatomic) NSArray *autoEditDecisionLists;
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)initWithAutoEditDecisionLists:(id)a0;
- (id)requestAutoEditDecisionListsWithOptions:(unsigned long long)a0 songs:(id)a1 colorGradeCategoriesBySong:(id)a2 resultHandler:(id /* block */)a3;
- (id)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (BOOL)handlesDiagnosticTextForHUDType:(long long)a0;

@end
