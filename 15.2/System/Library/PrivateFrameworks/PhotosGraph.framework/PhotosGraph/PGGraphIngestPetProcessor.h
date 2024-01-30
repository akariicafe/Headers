@class NSString, PGGraphBuilder;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    BOOL _petPrintClusteringEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scenePetLabels;
+ (id)blocklistScenePetLabels;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)init;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)_supportedPetDetectionTypes;
- (id)_petSceneNodesForGraph:(id)a0;
- (void)_removeAllPetNodesForGraph:(id)a0;
- (id)_petsForSceneNode:(id)a0 inGraph:(id)a1;
- (unsigned long long)_speciesForDetectionType:(short)a0;
- (unsigned long long)_speciesForSceneLabel:(id)a0;
- (id)momentNodesForPerson:(id)a0 inPhotoLibrary:(id)a1 withGraph:(id)a2;
- (id)_petsDetectedWithType:(short)a0 inPhotoLibrary:(id)a1 withGraph:(id)a2;

@end
