@class NSString;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)_petsForSceneNode:(id)a0 inGraph:(id)a1;
- (id)_petSceneNodesForGraph:(id)a0;
- (void)_removeAllPetNodesForGraph:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
