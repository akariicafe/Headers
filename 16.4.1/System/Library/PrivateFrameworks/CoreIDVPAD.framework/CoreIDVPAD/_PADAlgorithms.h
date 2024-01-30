@class NSString;

@interface _PADAlgorithms : NSObject <PADAlgorithms> {
    struct shared_ptr<vision::mod::LivenessCheck_Options> { struct LivenessCheck_Options *__ptr_; struct __shared_weak_count *__cntrl_; } _config;
    struct shared_ptr<vision::mod::LivenessCheckPredictor> { struct LivenessCheckPredictor *__ptr_; struct __shared_weak_count *__cntrl_; } _predictor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (id)_retrieveFaceprintsFromPredictorUsingObservationCompositeSet:(id)a0;
- (id)_retrieveReferenceFramesFromPredictor;
- (id)getFACVersion;
- (double)getPRDFakeFrameThreshold;
- (double)getPRDLiveFrameThreshold;
- (id)performFAC:(id)a0 gesture:(long long)a1 error:(id *)a2;
- (double)performIDMatching:(id)a0 toFaceprints:(id)a1 error:(id *)a2;
- (long long)performSC:(id)a0 assessmentTA:(id)a1 assessmentFakePRD:(id)a2 assessmentLivePRD:(id)a3 assessmentID:(id)a4 error:(id *)a5;
- (BOOL)performTA:(struct __CVBuffer { } *)a0 nccSignal:(double *)a1 isSensitive:(BOOL)a2 error:(id *)a3;
- (id)processFacePoseCompositeSet:(id)a0 gesture:(long long)a1 error:(id *)a2;
- (unsigned long long)requiredObservationSetSizeFAC:(long long)a0;

@end
