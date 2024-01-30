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
+ (id)_globallyCachedCanonicalRelevanceEngine;
+ (id)_modelFileLocation;
+ (id)sampleConfiguration;

- (void)prewarm;
- (void)faceCollectionDidLoad:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_beginLoadingDataForEngine:(id)a0;
- (void)_clockViewControllerDidBeginEditing;
- (void)_clockViewControllerDidEndEditing;
- (void)_clockViewControllerDidEnterAddable;
- (BOOL)_faceCollectionContainsSiriFace:(id)a0;
- (BOOL)_faceCollectionNeedsLiveElementCoordinator:(id)a0;
- (BOOL)_faceNeedsElementCoordinator:(id)a0;
- (void)_loadCoordinatorIfNeeded;
- (BOOL)_needsLiveElementCoordinator;
- (void)_refreshLiveCoordinator;
- (void)_unloadCoordinatorIfNeeded;
- (id)canonicalRelevanceEngine;
- (id)canonicalRelevanceEngineIgnoringAppInstallations;
- (void)faceCollection:(id)a0 didAddFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didRemoveFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didSelectFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollectionDidReorderFaces:(id)a0;
- (void)faceCollectionDidReset:(id)a0;
- (void)relevanceEngine:(id)a0 didInsertElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didMoveElement:(id)a1 fromPath:(id)a2 toPath:(id)a3;
- (void)relevanceEngine:(id)a0 didReloadElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didRemoveElement:(id)a1 atPath:(id)a2;
- (BOOL)relevanceEngine:(id)a0 isElementAtPathVisible:(id)a1;
- (void)relevanceEngine:(id)a0 performBatchUpdateBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)setLibraryCollection:(id)a0;
- (id)sharedRelevanceEngine;

@end
