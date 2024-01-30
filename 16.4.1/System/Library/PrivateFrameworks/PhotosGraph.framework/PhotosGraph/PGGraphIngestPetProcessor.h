@class NSString, PGGraphBuilder;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    BOOL _petPrintClusteringEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initForTesting;
- (id)init;
- (void).cxx_destruct;
- (void)_removeAllPetNodesForGraph:(id)a0;
- (unsigned long long)_speciesForDetectionType:(short)a0;
- (id)_supportedPetDetectionTypes;
- (id)momentNodesForPerson:(id)a0 inPhotoLibrary:(id)a1 withGraph:(id)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
