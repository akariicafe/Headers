@class NSString, PGGraphBuilder;

@interface PGGraphIngestMeaningfulEventsProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateMeaningsWithGraphBuilder:(id)a0 progressReporter:(id)a1;

- (void).cxx_destruct;
- (id)_meaningCriteriasDictionaryByMeaningLabel;
- (void)_processMeaningfulEventsWithMomentNodes:(id)a0 graph:(id)a1 meaningCriteriaEvaluatorsByMeaningLabel:(id)a2 legacyLabels:(id)a3 progressBlock:(id /* block */)a4;
- (void)_updateMeaningsOfMomentNode:(id)a0 graph:(id)a1 withValidMeaningLabels:(id)a2 legacyLabels:(id)a3;
- (void)processMeaningfulEventsWithMomentNodes:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)processMeaningfulEventsWithMomentNodes:(id)a0 graph:(id)a1 requiredMeaningfulEventCriteriaByIdentifier:(id)a2 progressBlock:(id /* block */)a3;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (void)updateMeaningsOfMomentNode:(id)a0 graph:(id)a1 affectedMeaningLabels:(id)a2 withMatchedResults:(id)a3;

@end
