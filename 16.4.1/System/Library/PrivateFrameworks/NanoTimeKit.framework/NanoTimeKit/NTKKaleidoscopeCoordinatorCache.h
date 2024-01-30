@class NSString, NSMutableDictionary, NTKFaceCollection, NTKTaskScheduler, NSMutableArray;

@interface NTKKaleidoscopeCoordinatorCache : NSObject <NTKFaceCollectionObserver> {
    NTKFaceCollection *_libraryCollection;
    NTKTaskScheduler *_taskScheduler;
    NSMutableArray *_pathsToTouch;
    NSMutableDictionary *_pathsToWrite;
    unsigned char _isCleanupScheduled : 1;
    unsigned long long _kaleidoscopeFaceCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)faceCollectionDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)_computeKaleidoscopeFaceCount;
- (void)faceCollection:(id)a0 didAddFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didRemoveFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollectionDidReset:(id)a0;
- (id)provideAtlasBacking:(id)a0 uuid:(id)a1 uuidLuma:(id)a2 uuidChroma:(id)a3;
- (void)setLibraryCollection:(id)a0;

@end
