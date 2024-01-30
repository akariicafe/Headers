@class NSString;

@interface _PADAlgorithms : NSObject <PADAlgorithms> {
    struct shared_ptr<vision::mod::LivenessCheck_Options> { struct LivenessCheck_Options *__ptr_; struct __shared_weak_count *__cntrl_; } _config;
    struct shared_ptr<vision::mod::LivenessCheckPredictor> { struct LivenessCheckPredictor *__ptr_; struct __shared_weak_count *__cntrl_; } _predictor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)getFACVersion;
- (long long)performSC:(id)a0 assessmentTA:(id)a1 assessmentFakePRD:(id)a2 assessmentLivePRD:(id)a3 assessmentID:(id)a4 error:(id *)a5;
- (unsigned long long)requiredObservationSetSizeFAC:(long long)a0;
- (id)performFAC:(id)a0 gesture:(long long)a1 error:(id *)a2;
- (double)getPRDFakeFrameThreshold;
- (double)getPRDLiveFrameThreshold;
- (BOOL)performTA:(struct __CVBuffer { } *)a0 nccSignal:(double *)a1 isSensitive:(BOOL)a2 error:(id *)a3;
- (double)performIDMatching:(id)a0 toFaceprints:(id)a1 error:(id *)a2;

@end
