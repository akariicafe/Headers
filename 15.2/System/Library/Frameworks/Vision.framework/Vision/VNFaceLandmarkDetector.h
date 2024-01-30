@class NSString;

@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding> {
    struct shared_ptr<vision::mod::LandmarkAttributes> { struct LandmarkAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } _faceAttributesPupilRefiner;
    BOOL _requireFaceAttributesPupilRefiner;
    BOOL _modelFilesWereMemmapped;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (const struct _LandmarkDetector_faceMeshParts_ { int x0; int x1; int x2[23]; int x3; int x4[23]; int x5; int x6[23]; int x7; int x8[23]; int x9; int x10[23]; int x11; int x12[23]; int x13; int x14[23]; int x15; int x16[23]; int x17; int x18[23]; int x19; int x20[23]; int x21; int x22[23]; int x23; int x24[23]; int x25; int x26[23]; int x27; int x28[23]; int x29; int x30[23]; int x31; int x32[23]; int x33; int x34[23]; } *)landmarksMeshPartsForConstellation:(unsigned long long)a0;
+ (const void *)allLandmarksPointsIndexesForConstellation:(unsigned long long)a0;
+ (struct _Geometry2D_point2D_ { float x0; float x1; })computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ { float x0; float x1; } *)a0 indicies:(const int *)a1 numberOfIndicies:(int)a2;

- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)loadRefinersAndReturnError:(id *)a0;
- (void)calculatePupilLocationAndUpdateLandmarkPoints:(void *)a0;
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; } *)a1 andLandmarks:(const void *)a2 error:(id *)a3;
- (BOOL)postprocessLandmarkResultsForLandmarks:(const void *)a0 imageBuffer:(id)a1 outputFace:(id)a2 options:(id)a3 warningRecorder:(id)a4 error:(id *)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFaceBBoxForLandmarks:(id)a0;
- (BOOL)detectBlinkOnFaceImage:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 faceObservation:(id)a1 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; } *)a2 landmarks:(const void *)a3 warningRecorder:(id)a4 error:(id *)a5;

@end
