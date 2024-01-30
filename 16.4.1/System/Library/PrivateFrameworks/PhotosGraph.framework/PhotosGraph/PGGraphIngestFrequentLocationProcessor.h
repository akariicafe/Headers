@class NSString, PGGraphBuilder;

@interface PGGraphIngestFrequentLocationProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processAndInsertFrequentLocationWithMomentNodes:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (id)processFrequentLocationWithMomentNodes:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
