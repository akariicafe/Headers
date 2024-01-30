@class NSString;

@interface PGGraphIngestBusinessProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_spatialMapCategoriesByMeaningIdentifier;

- (id)_predominantVisitForMomentNode:(id)a0 publicEventBusinessItemMuid:(unsigned long long)a1;
- (id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)a0 requiredCriteriaByPOIIdentifier:(id)a1;
- (void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)_insertBusinessItemsFromMomentNodes:(id)a0 graph:(id)a1 withLocationOfInterestVisitsToResolveByMomentLocalIdentifier:(id)a2 requiredCriteriaByPOIIdentifier:(id)a3 progressBlock:(id /* block */)a4;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)_momentNode:(id)a0 hasValidConstraintsForLocationOfInterestVisit:(id)a1 requiredCriteriaByPOIIdentifier:(id)a2;
- (id)requiredCriteriaByPOIIdentifierForGraph:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
