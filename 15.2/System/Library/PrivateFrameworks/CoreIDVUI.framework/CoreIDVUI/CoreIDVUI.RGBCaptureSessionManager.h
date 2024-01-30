@interface CoreIDVUI.RGBCaptureSessionManager : NSObject <CIDVRGBCaptureDelegate, CIDVRGBCaptureImageQualityDelegate> {
    void /* unknown type, empty encoding */ captureController;
    void /* unknown type, empty encoding */ documentsRepository;
    void /* unknown type, empty encoding */ encryptionQueue;
    void /* unknown type, empty encoding */ lastResult;
    void /* unknown type, empty encoding */ resultCount;
    void /* unknown type, empty encoding */ frameCount;
    void /* unknown type, empty encoding */ selfieCount;
    void /* unknown type, empty encoding */ repeatCount;
    void /* unknown type, empty encoding */ frameRate;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ proofingFlowManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)verifyQualityForFrame:(struct __CVBuffer { } *)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)captureSelfieDidTryDifferentGestureMovement:(id)a0;
- (void)captureSelfieDidContinueAfterGesture;
- (void)captureSelfieDidRetakeAfterSelfie;
- (void)captureSelfieDidContinueAfterSelfie;
- (void)captureSelfieDidFinishWithSuccess;
- (void)captureSelfieDidDetectIncorrectGesture:(id)a0;
- (void)confirmSelfieViewDidAppear;
- (void)captureSelfieWillMonitorGesture:(id)a0;
- (void)takeSelfieViewDidAppear;
- (void)captureSelfieDidGestureTimeout:(id)a0;
- (void)captureSelfieDidRestart:(long long)a0;
- (void)captureSelfieDidRetryGesture:(id)a0;
- (void)captureSelfieDidSkipGesture:(id)a0;
- (void)captureSelfieDidFinishGestureMonitoring:(id)a0;
- (void)didFinishAssessmentWithResults:(id)a0 error:(id)a1;
- (void)captureSelfieObtainNewConfiguration:(id /* block */)a0;
- (void)livenessUIFlowDidCompleteWithSelfie:(id)a0;
- (void)captureSelfieDidObtainPicture;
- (void)didCaptureLivenessVideoAtURL:(id)a0;

@end
