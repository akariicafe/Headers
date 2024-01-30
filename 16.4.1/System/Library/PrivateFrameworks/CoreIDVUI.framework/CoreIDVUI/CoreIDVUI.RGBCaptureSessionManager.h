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

- (id)init;
- (void).cxx_destruct;
- (void)captureSelfieDidGestureTimeout:(id)a0;
- (void)captureSelfieDidContinueAfterGesture;
- (void)captureSelfieDidContinueAfterSelfie;
- (void)captureSelfieDidDetectIncorrectGesture:(id)a0;
- (void)captureSelfieDidFinishGestureMonitoring:(id)a0;
- (void)captureSelfieDidFinishWithSuccess;
- (void)captureSelfieDidObtainPicture;
- (void)captureSelfieDidRestart:(long long)a0;
- (void)captureSelfieDidRetakeAfterSelfie;
- (void)captureSelfieDidRetryGesture:(id)a0;
- (void)captureSelfieDidSkipGesture:(id)a0;
- (void)captureSelfieDidTryDifferentGestureMovement:(id)a0;
- (int)captureSelfieGetNewLuxValue;
- (void)captureSelfieObtainNewConfiguration:(id /* block */)a0;
- (void)captureSelfieWillMonitorGesture:(id)a0;
- (void)confirmSelfieViewDidAppear;
- (void)didCaptureLivenessVideoAtURL:(id)a0;
- (void)didFinishAssessmentWithResults:(id)a0 error:(id)a1;
- (void)livenessUIFlowDidCompleteWithSelfie:(id)a0;
- (void)takeSelfieViewDidAppear;
- (void)verifyQualityForFrame:(struct __CVBuffer { } *)a0 options:(id)a1 completion:(id /* block */)a2;

@end
