@interface VNFaceQualityGenerator : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceQualityPredictor> { struct FaceQualityPredictor *__ptr_; struct __shared_weak_count *__cntrl_; } _mFaceQualityPredictor;
}

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;

- (void).cxx_destruct;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
