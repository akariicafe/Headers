@class NSMutableData;

@interface VNFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase {
    struct shared_ptr<vision::mod::FaceFrontalizer> { struct FaceFrontalizer *__ptr_; struct __shared_weak_count *__cntrl_; } _mFaceFrontalizerImpl;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _faceVImageBuffer;
    NSMutableData *_mFaceFrontalizerWorkingBuffer;
}

+ (float)_faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;

- (void).cxx_destruct;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;

@end
