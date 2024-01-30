@class PHPhotoLibrary, VCPFaceAnalyzer;

@interface VCPFaceCropManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
}

+ (BOOL)_allowANE;

- (void).cxx_destruct;
- (id)_bestFaceForFaceDetectionRequest:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_faceFromFaceCrop:(id)a0 error:(id *)a1;
- (BOOL)_clearDirtyStateOnFaceCrops:(id)a0 error:(id *)a1;
- (id)_associateFace:(id)a0 withFaceCrop:(id)a1 error:(id *)a2;
- (BOOL)_updateFaceprint:(id)a0 ofPersistedFace:(id)a1 error:(id *)a2;
- (id)_faceAssociatedWithFaceCrop:(id)a0;
- (BOOL)_updateFace:(id)a0 withFaceCrop:(id)a1 error:(id *)a2;
- (BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)a0 error:(id *)a1;
- (BOOL)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)a0 error:(id *)a1;
- (BOOL)_persistGeneratedFaceCrops:(id)a0 forAsset:(id)a1 error:(id *)a2;
- (id)_pvFaceCropFromPHFaceCrop:(id)a0;
- (BOOL)_processDirtyFaceCrop:(id)a0 error:(id *)a1;
- (id)initWithPhotoLibrary:(id)a0 andContext:(id)a1;
- (void)_persistFaceAnalysis:(id)a0 forPHAsset:(id)a1;
- (BOOL)generateAndPersistFaceCropsForFaces:(id)a0 withAsset:(id)a1 andImage:(id)a2 error:(id *)a3;
- (int)processDirtyFaceCropsWithCancelBlock:(id /* block */)a0 andExtendTimeoutBlock:(id /* block */)a1;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;

@end
