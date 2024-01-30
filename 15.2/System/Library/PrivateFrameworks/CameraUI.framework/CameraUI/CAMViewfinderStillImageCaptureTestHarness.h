@class NSCountedSet, NSString, CAMViewfinderActionIntervalometer, CAMViewfinderViewController;

@interface CAMViewfinderStillImageCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate, CAMViewfinderActionIntervalometerDelegate>

@property (nonatomic) BOOL _performWarmupCapture;
@property (nonatomic) BOOL _waitingOnWarmupCapture;
@property (retain, nonatomic) NSString *_finalRequestPersistenceUUID;
@property (retain, nonatomic) NSString *_lastReceivedPersistenceUUID;
@property (nonatomic) long long _mode;
@property (retain, nonatomic) NSCountedSet *_requestIDs;
@property (nonatomic) unsigned long long _expectedNumberOfResponsesPerRequest;
@property (nonatomic) double _delayBetweenCaptures;
@property (nonatomic) double _lastCaptureCompletionTime;
@property (retain, nonatomic) CAMViewfinderViewController *_viewfinderViewController;
@property (nonatomic) BOOL _capturesOnTouchDown;
@property (retain, nonatomic) CAMViewfinderActionIntervalometer *testIntervalometer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_allowOverlappingCaptures;
- (void)startTesting;
- (void)stopTesting;
- (void)failedTestWithReason:(id)a0;
- (id)initWithTestName:(id)a0 expectedNumberOfCapturesPerRequest:(unsigned long long)a1 viewfinderViewController:(id)a2 performingWarmupCapture:(BOOL)a3 forCaptureMode:(long long)a4 delayBetweenCaptures:(double)a5 capturesOnTouchDown:(BOOL)a6;
- (void)viewfinderViewController:(id)a0 didReceiveStillImageRequestDidStopCapturingStillImage:(id)a1;
- (void)viewfinderViewController:(id)a0 didReceiveStillImageRequestDidCompleteStillImageCapture:(id)a1 withResponse:(id)a2 error:(id)a3;
- (void)viewfinderViewController:(id)a0 didReceiveStillImageRequestDidCompleteCapture:(id)a1 error:(id)a2;
- (void)viewfinderViewController:(id)a0 didGenerateCaptureRequest:(id)a1;
- (BOOL)shouldAttemptAction;
- (void)intervalometerDidReachMaximumCount:(id)a0;

@end
