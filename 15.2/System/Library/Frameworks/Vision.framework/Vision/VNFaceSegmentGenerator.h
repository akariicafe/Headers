@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceSegmenterDNN> { struct FaceSegmenterDNN *__ptr_; struct __shared_weak_count *__cntrl_; } _faceSegmenterDNN;
}

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (float)_faceSegmenterMaximumInputImageAspectRatio;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)_getFaceSegmenterInputImageSize:(struct CGSize { double x0; double x1; } *)a0 forRequestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_getNumberOfSupportedFaceSegments:(unsigned long long *)a0 forRequestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)a0 error:(id *)a1;

@end
