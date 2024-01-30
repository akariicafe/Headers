@protocol VNModelFile;

@interface VNFaceBBoxAligner : VNDetector {
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char> > { struct FaceBoxPoseAligner<signed char> *__ptr_; struct __shared_weak_count *__cntrl_; } mFaceBoxPoseAlignerImpl;
    BOOL _modelFilesWereMemmapped;
    id<VNModelFile> mFaceBoxAlignerModelFileHandle;
}

- (id)processWithOptions:(id)a0 warningRecorder:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;

@end
