@class NSString, PGGraphBuilder;

@interface PGGraphIngestBusinessProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_spatialMapCategoriesByMeaningIdentifier;

- (void).cxx_destruct;
- (id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)a0 requiredCriteriaByPOIIdentifier:(id)a1 meaningfulEventProcessorCache:(id)a2;
- (void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)_insertBusinessItemsFromMomentNodes:(id)a0 graph:(id)a1 withLocationOfInterestVisitsToResolveByMomentUUID:(id)a2 requiredCriteriaByPOIIdentifier:(id)a3 progressBlock:(id /* block */)a4;
- (BOOL)_momentNode:(id)a0 hasValidConstraintsForLocationOfInterestVisit:(id)a1 requiredCriteriaByPOIIdentifier:(id)a2 meaningfulEventProcessorCache:(id)a3;
- (id)_predominantVisitForMomentNode:(id)a0 publicEventBusinessItemMuid:(unsigned long long)a1;
- (id)requiredCriteriaByPOIIdentifierForGraph:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
