@class NSDictionary, NSString, PGGraphBuilder;

@interface PGGraphIngestPointsOfInterestProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly, nonatomic) NSDictionary *momentNodesToResolvePOIByRegion;
@property (readonly, nonatomic) NSDictionary *momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_collectPOIsToResolveWithMomentNodes:(id)a0 graphUpdate:(id)a1 progress:(id /* block */)a2;
- (BOOL)_fetchPointsOfInterestForRegions:(id)a0 loggingConnection:(id)a1 progress:(id /* block */)a2;
- (void)_insertPointOfInterestTypeStrings:(id)a0 graph:(id)a1 withMomentNodes:(id)a2 loggingConnection:(id)a3;
- (id)_pointOfInterestTypeStringsFromBusinessItems:(id)a0 withOriginalCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)disambiguatePointsOfInterestWithMomentNodes:(id)a0 graphUpdate:(id)a1 progress:(id /* block */)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
