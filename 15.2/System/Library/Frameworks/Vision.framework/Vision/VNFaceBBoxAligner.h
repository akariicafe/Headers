@protocol VNModelFile;

@interface VNFaceBBoxAligner : VNDetector {
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } mFaceBoxPoseAlignerImpl;
    BOOL _modelFilesWereMemmapped;
    id<VNModelFile> mFaceBoxAlignerModelFileHandle;
}

+ (id)configurationOptionKeysForDetectorKey;

- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)processWithOptions:(id)a0 warningRecorder:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id).cxx_construct;

@end
