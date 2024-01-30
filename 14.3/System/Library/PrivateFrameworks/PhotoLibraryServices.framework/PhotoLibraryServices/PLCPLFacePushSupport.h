@protocol PLSyncContext;

@interface PLCPLFacePushSupport : NSObject {
    id<PLSyncContext> _syncContext;
}

+ (void)markSyncableFacesAsPushedInAsset:(id)a0;
+ (BOOL)_shouldPushBeingKeyFace:(id)a0;
+ (BOOL)isFaceSyncable:(id)a0;
+ (void)applyFaceChangesFromAsset:(id)a0 toAssetChange:(id)a1 inPhotoLibrary:(id)a2;

- (void).cxx_destruct;
- (id)cplFaceAnalysisRefFromAsset:(id)a0 algorithmVersion:(long long *)a1;
- (id)cplFaceRefFromFace:(id)a0;
- (BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)a0;
- (id)cplFaceRefsFromFaces:(id)a0 algorithmVersion:(long long *)a1;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)a0 assetChange:(id)a1;
- (id)rejectedPersonIdentifiersForFace:(id)a0;
- (id)initWithSyncContext:(id)a0;
- (void)applyFaceChangesFromAsset:(id)a0 toAssetChange:(id)a1;

@end
