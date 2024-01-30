@interface VNFaceQualityGenerator : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceQualityPredictor> { struct FaceQualityPredictor *__ptr_; struct __shared_weak_count *__cntrl_; } _mFaceQualityPredictor;
}

+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (struct basic_string_view<char, std::char_traits<char>> { char *x0; unsigned long long x1; })modelVersionIDForConfigurationOptions:(id)a0;

- (id).cxx_construct;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
