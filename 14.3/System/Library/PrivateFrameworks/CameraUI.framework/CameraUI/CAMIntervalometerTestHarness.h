@class CAMCaptureRequestIntervalometer, NSString, NSMutableDictionary, CUCaptureController;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate> {
    CUCaptureController *_captureController;
    BOOL _performWarmupCapture;
    BOOL _waitingOnWarmupCapture;
    NSString *_finalRequestPersistenceUUID;
    long long _mode;
    NSMutableDictionary *_numberOfResponsesForRequest;
    unsigned long long _expectedNumberOfResponsesPerRequest;
    double _delayBetweenCaptures;
    double _lastCaptureCompletionTime;
}

@property (retain, nonatomic) CAMCaptureRequestIntervalometer *testIntervalometer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stillImageRequestDidCompleteCapture:(id)a0 error:(id)a1;
- (void)stillImageRequestDidStopCapturingStillImage:(id)a0;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)a0 withResponse:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (BOOL)_allowOverlappingCaptures;
- (id)initWithTestName:(id)a0 expectedNumberOfCapturesPerRequest:(unsigned long long)a1 captureController:(id)a2 performingWarmupCapture:(BOOL)a3 forCaptureMode:(long long)a4 delayBetweenCaptures:(double)a5;
- (void)stopTesting;
- (BOOL)intervalometer:(id)a0 didGenerateCaptureRequest:(id)a1;
- (BOOL)_shouldDelayBeforeCapturing;
- (BOOL)_hasReceivedExpectedNumberOfResponsesForPersistenceUUID:(id)a0 failureReason:(id *)a1;
- (BOOL)_hasReceivedExpectedNumberOfResponsesForRequestsWithFailureReason:(id *)a0;
- (void)startTesting;
- (void)failedTestwithReason:(id)a0;
- (void)intervalometer:(id)a0 didReachMaximumCountWithRequest:(id)a1;

@end
