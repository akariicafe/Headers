@class PGGraphBuilder, NSString, PGMemoryController, NSDate;

@interface PGGraphIngestMemoryProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    PGMemoryController *_memoryController;
}

@property (copy, nonatomic) NSDate *localDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateMemoriesOfCategory:(unsigned long long)a0 withGraphBuilder:(id)a1 progressReporter:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)_memoryController;
- (void)insertSingletonFeatureNodes;
- (void)insertProcessorDependentMomentFeaturesForMomentNodes:(id)a0 featureProvider:(id)a1 progressBlock:(id /* block */)a2;
- (void)insertMemoriesForCategory:(unsigned long long)a0 loggingConnection:(id)a1 progressBlock:(id /* block */)a2;
- (id)memoryGeneratorsForMemoryCategory:(unsigned long long)a0 memoryGenerationContext:(id)a1 controller:(id)a2;

@end
