@protocol PLSyncableAsset, PLSyncContext;

@interface PLCPLFacePullSupport : NSObject {
    id<PLSyncContext> _syncContext;
    id<PLSyncableAsset> _currentAsset;
}

+ (void)applyFacesChangesFromAssetChange:(id)a0 toAsset:(id)a1 inSyncContext:(id)a2;
+ (id)_disjointSetsByAddingSet:(id)a0 toSets:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSyncContext:(id)a0 asset:(id)a1;
- (void)applyFacesChangesFromAssetChange:(id)a0;
- (long long)_policyForApplyingFaceChangesFromAssetChange:(id)a0;
- (id)_applyAssetChange:(id)a0 toExistingFaces:(id)a1 withPolicy:(long long)a2;
- (id)_createFaceFromFaceRef:(id)a0 algorithmVersion:(int)a1;
- (void)_finalizeFace:(id)a0 withFaceRef:(id)a1 applyDimensionAndState:(BOOL)a2;
- (void)_applyDimensionAndStateFromFaceReference:(id)a0 toDetectedFace:(id)a1;
- (void)_unlinkPersonIfVerifiedFromFace:(id)a0;
- (BOOL)_canReassignFaceFromPerson:(id)a0 toPerson:(id)a1 shouldDedupePersons:(BOOL *)a2;
- (void)_applyPersonFromFaceReference:(id)a0 toDetectedFace:(id)a1;

@end
