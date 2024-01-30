@class VNFaceBBoxAligner;

@interface VNFaceDetectorRevision1 : VNFaceDetector {
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> { struct ObjectDetector_DCNFaceDetector *__ptr_; struct __shared_weak_count *__cntrl_; } _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}

+ (id)configurationOptionKeysForDetectorKey;

- (void).cxx_destruct;
- (void)purgeIntermediates;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;

@end
