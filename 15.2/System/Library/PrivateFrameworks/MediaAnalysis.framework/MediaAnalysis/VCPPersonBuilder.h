@class VCPFaceClusterer, NSMutableDictionary, PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPPhotosPersistenceDelegate;

@interface VCPPersonBuilder : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceClusterer *_faceClusterer;
    VCPPhotosFaceProcessingContext *_context;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSMutableDictionary *_state;
    unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
    BOOL _personBuilderMergeCandidatesEnabled;
}

- (void)setPersonBuilderMergeCandidatesEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_setAllFaceGroupsNeedPersonBuilding;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)a0;
- (void)_readFaceAnalysisState;
- (void)_setFaceAnalysisStateValue:(id)a0 forKey:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 andFaceClusterer:(id)a1 andContext:(id)a2;
- (BOOL)performPersonBuildingWithCancelOrExtendTimeoutBlock:(id /* block */)a0 error:(id *)a1;

@end
