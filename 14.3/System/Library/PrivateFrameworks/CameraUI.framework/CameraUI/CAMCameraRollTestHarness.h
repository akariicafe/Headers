@class CAMViewfinderViewController;

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) BOOL awaitPreload;
@property (readonly, nonatomic) double settlingDelay;
@property (readonly, nonatomic) BOOL testingWarmPresentation;
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation;
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;

- (void).cxx_destruct;
- (void)stopTesting;
- (void)startTesting;
- (id)initWithTestName:(id)a0 viewfinderViewController:(id)a1 testingAnimation:(BOOL)a2 testingWarmPresentation:(BOOL)a3 awaitPreload:(BOOL)a4 settlingDelay:(double)a5;
- (void)_presentCameraRollAnimated;
- (void)_dismissCameraRollImmediately;
- (void)_handlePUDisplayLinkStarted:(id)a0;

@end
