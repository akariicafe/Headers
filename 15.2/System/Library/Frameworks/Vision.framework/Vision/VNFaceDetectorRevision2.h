@class VNFaceBBoxAligner;

@interface VNFaceDetectorRevision2 : VNFaceDetector {
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> { struct ObjectDetector_DCNFaceDetector_v2 *__ptr_; struct __shared_weak_count *__cntrl_; } _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
    BOOL _preferBackgroundProcessing;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)purgeIntermediates;

@end
