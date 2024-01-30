@class VCPFaceClusterer, NSMutableDictionary, PHPhotoLibrary, VCPPhotosPersistenceDelegate, PVContext;

@interface VCPPersonBuilder : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceClusterer *_faceClusterer;
    PVContext *_context;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSMutableDictionary *_state;
    unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
    BOOL _personBuilderMergeCandidatesEnabled;
}

- (void)_readFaceAnalysisState;
- (void)_setFaceAnalysisStateValue:(id)a0 forKey:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 andFaceClusterer:(id)a1 andContext:(id)a2;
- (void).cxx_destruct;
- (BOOL)_setAllFaceGroupsNeedPersonBuilding;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)a0;
- (void)setPersonBuilderMergeCandidatesEnabled:(BOOL)a0;
- (BOOL)performPersonBuildingWithCanceler:(id)a0 extendTimeoutBlock:(id /* block */)a1 error:(id *)a2;

@end
