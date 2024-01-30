@class PHPhotoLibrary, VCPPhotosFaceProcessingContext;

@interface VCPFaceCropManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPPhotosFaceProcessingContext *_context;
}

+ (BOOL)_allowANE;

- (void).cxx_destruct;
- (BOOL)_updateFaceprint:(id)a0 forFace:(id)a1 error:(id *)a2;
- (BOOL)_updateFace:(id)a0 withFaceCrop:(id)a1 error:(id *)a2;
- (id)_associateFace:(id)a0 withFaceCrop:(id)a1 error:(id *)a2;
- (id)_bestFaceForFaceDetectionRequest:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_clearDirtyStateOnFaceCrop:(id)a0 error:(id *)a1;
- (id)_faceAssociatedWithFaceCrop:(id)a0;
- (id)_faceFromFaceCrop:(id)a0 error:(id *)a1;
- (BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)a0 faceCropFaceLocalIdentifier:(id *)a1 error:(id *)a2;
- (BOOL)_persistGeneratedFaceCrops:(id)a0 forAsset:(id)a1 error:(id *)a2;
- (BOOL)_processDirtyFaceCrop:(id)a0 faceCropFaceLocalIdentifier:(id *)a1 error:(id *)a2;
- (BOOL)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)a0 error:(id *)a1;
- (id)_vcpFaceCropFromPHFaceCrop:(id)a0;
- (BOOL)generateAndPersistFaceCropsForFaces:(id)a0 withAsset:(id)a1 resource:(id)a2 resourceURL:(id)a3 error:(id *)a4;
- (id)initWithPhotoLibrary:(id)a0 andContext:(id)a1;
- (int)processDirtyFaceCrops:(unsigned long long *)a0 withCancelBlock:(id /* block */)a1 andExtendTimeoutBlock:(id /* block */)a2;

@end
