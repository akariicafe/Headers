@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector {
    struct shared_ptr<vision::mod::LandmarkDetectorERT> { struct LandmarkDetectorERT *__ptr_; struct __shared_weak_count *__cntrl_; } mFaceLandmarkAlgorithmImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> { struct LandmarkDetectorERT *__ptr_; struct __shared_weak_count *__cntrl_; } mFaceLandmarkMouthRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> { struct LandmarkDetectorERT *__ptr_; struct __shared_weak_count *__cntrl_; } mFaceLandmarkRightEyeRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> { struct LandmarkDetectorERT *__ptr_; struct __shared_weak_count *__cntrl_; } mFaceLandmarkLeftEyeRefinerImpl;
    BOOL _modelFilesWereMemmapped;
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (void)dumpDebugIntermediatesWithImageBuffer:(id)a0 lumaIntermediate:(struct __CVBuffer { } *)a1 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; })a2 meanShapeInLumaIntermediate:(const void *)a3 landmarkPointsInLumaIntermediate:(const void *)a4;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)loadRefinersAndReturnError:(id *)a0;
- (BOOL)_loadEspressoModelWithConfigurationOptions:(id)a0 error:(id *)a1;
- (unsigned long long)cascadeStepCountInOriginalModel;
- (unsigned long long)cascadeStepCountLoaded;

@end
