@class NSString, PGGraphBuilder;

@interface PGGraphIngestBabyProcessor : NSObject <PGGraphIngestProcessor> {
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
- (id)babySceneNodeInGraph:(id)a0;
- (void)_removeAllBabyNodesInGraph:(id)a0;
- (id)_babiesInGraph:(id)a0;

@end
