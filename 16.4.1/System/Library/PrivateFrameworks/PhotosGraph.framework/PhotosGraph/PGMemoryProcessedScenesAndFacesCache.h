@class PGGraphMomentNodeCollection, NSMutableDictionary, PHPhotoLibrary, NSNumber;

@interface PGMemoryProcessedScenesAndFacesCache : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_scenesAreProcessedEnoughByYear;
    NSMutableDictionary *_scenesAreProcessedWithMinimumSceneAnalysisVersion;
    NSMutableDictionary *_facesAreProcessedEnoughByYear;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughScenesProcessed;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughFacesProcessed;
    NSNumber *_petVIPModelExistsAsNumber;
}

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)petVIPModelExists;
- (BOOL)libraryHasEnoughScenesProcessedWithMinimumSceneAnalysisVersion:(unsigned long long)a0;
- (BOOL)allMomentNodesHaveScenesProcessed:(id)a0 inGraph:(id)a1;
- (BOOL)allMomentNodesInCollectionHaveFacesProcessed:(id)a0;
- (BOOL)allMomentNodesInCollectionHaveScenesProcessed:(id)a0;
- (BOOL)libraryHasEnoughScenesProcessed:(BOOL)a0 andProcessedFaces:(BOOL)a1;
- (BOOL)libraryHasEnoughScenesProcessed:(BOOL)a0 andProcessedFaces:(BOOL)a1 forYear:(long long)a2 inGraph:(id)a3;
- (id)momentNodesWithEnoughFacesProcessedInGraph:(id)a0;
- (id)momentNodesWithEnoughScenesProcessedInGraph:(id)a0;
- (void)setFacesAreProcessedEnoughInYear:(id)a0;
- (void)setScenesAreProcessedEnoughInYear:(id)a0;

@end
