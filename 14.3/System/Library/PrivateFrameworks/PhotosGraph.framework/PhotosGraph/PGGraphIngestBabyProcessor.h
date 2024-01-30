@class NSString;

@interface PGGraphIngestBabyProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_babiesInGraph:(id)a0;
- (void)_removeAllBabyNodesInGraph:(id)a0;
- (id)babySceneNodeInGraph:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
