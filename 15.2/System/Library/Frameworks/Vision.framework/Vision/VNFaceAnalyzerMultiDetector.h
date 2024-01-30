@class NSMutableData;

@interface VNFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase {
    struct shared_ptr<vision::mod::FaceFrontalizer> { struct FaceFrontalizer *__ptr_; struct __shared_weak_count *__cntrl_; } _mFaceFrontalizerImpl;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _faceVImageBuffer;
    NSMutableData *_mFaceFrontalizerWorkingBuffer;
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (float)faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;

@end
