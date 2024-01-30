@class PGGraphMomentNodeCollection, NSMutableDictionary, PHPhotoLibrary, NSNumber;

@interface PGMemoryProcessedScenesAndFacesCache : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_scenesAreProcessedEnoughByYear;
    NSMutableDictionary *_facesAreProcessedEnoughByYear;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughScenesProcessed;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughFacesProcessed;
    NSNumber *_petVIPModelExistsAsNumber;
}

- (BOOL)libraryHasEnoughScenesProcessed:(BOOL)a0 andProcessedFaces:(BOOL)a1;
- (id)momentNodesWithEnoughFacesProcessedInGraph:(id)a0;
- (BOOL)allMomentNodesHaveScenesProcessed:(id)a0 inGraph:(id)a1;
- (id)momentNodesWithEnoughScenesProcessedInGraph:(id)a0;
- (BOOL)libraryHasEnoughScenesProcessed:(BOOL)a0 andProcessedFaces:(BOOL)a1 forYear:(long long)a2 inGraph:(id)a3;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)allMomentNodesInCollectionHaveScenesProcessed:(id)a0;
- (BOOL)petVIPModelExists;

@end
