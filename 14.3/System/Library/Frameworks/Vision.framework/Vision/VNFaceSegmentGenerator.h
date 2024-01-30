@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceSegmenterDNN> { struct FaceSegmenterDNN *__ptr_; struct __shared_weak_count *__cntrl_; } _faceSegmenterDNN;
}

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (float)_faceSegmenterMaximumInputImageAspectRatio;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;

- (void).cxx_destruct;
- (BOOL)_getFaceSegmenterInputImageSize:(struct CGSize { double x0; double x1; } *)a0 forRequestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_getNumberOfSupportedFaceSegments:(unsigned long long *)a0 forRequestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)a0 error:(id *)a1;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
