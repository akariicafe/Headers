@class NSString, PGGraphBuilder;

@interface PGGraphIngestPrefetchLocationProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)regionsWithMoments:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)prefetchLocationsWithRegions:(id)a0 loggingConnection:(id)a1 progressBlock:(id /* block */)a2;

@end
