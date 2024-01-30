@class RERelevanceEngine, NSString, NTKFaceCollection, NSLock;

@interface NTKRelevanceEngineCache : NSObject <NTKFaceCollectionObserver, RERelevanceEngineObserver> {
    NSLock *_coordinatorLock;
    RERelevanceEngine *_coordinator;
    RERelevanceEngine *_staticCoordinator;
    NTKFaceCollection *_libraryCollection;
    BOOL _isEditing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;
+ (id)_dataSourceLoaderForRelevanceEngineDataSourcesForKey:(id)a0;
+ (id)sampleConfiguration;
+ (id)_globallyCachedCanonicalRelevanceEngine;
+ (id)_modelFileLocation;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prewarm;
- (void)relevanceEngine:(id)a0 performBatchUpdateBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)relevanceEngine:(id)a0 didReloadElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didRemoveElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didInsertElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didMoveElement:(id)a1 fromPath:(id)a2 toPath:(id)a3;
- (BOOL)relevanceEngine:(id)a0 isElementAtPathVisible:(id)a1;
- (void)faceCollectionDidLoad:(id)a0;
- (BOOL)_needsLiveElementCoordinator;
- (void)_loadCoordinatorIfNeeded;
- (void)_unloadCoordinatorIfNeeded;
- (void)_refreshLiveCoordinator;
- (BOOL)_faceCollectionNeedsLiveElementCoordinator:(id)a0;
- (BOOL)_faceNeedsElementCoordinator:(id)a0;
- (BOOL)_faceCollectionContainsSiriFace:(id)a0;
- (void)_beginLoadingDataForEngine:(id)a0;
- (void)faceCollection:(id)a0 didAddFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didRemoveFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didSelectFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollectionDidReorderFaces:(id)a0;
- (void)faceCollectionDidReset:(id)a0;
- (void)setLibraryCollection:(id)a0;
- (id)sharedRelevanceEngine;
- (id)canonicalRelevanceEngine;
- (id)canonicalRelevanceEngineIgnoringAppInstallations;
- (void)_clockViewControllerDidBeginEditing;
- (void)_clockViewControllerDidEnterAddable;
- (void)_clockViewControllerDidEndEditing;

@end
