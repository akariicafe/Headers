@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;
@property (readonly, nonatomic) long long desiredMode;
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation;
@property (readonly, nonatomic) double testExtensionSeconds;

- (void)_ensureCaptureMode:(long long)a0 thenPerform:(id /* block */)a1;
- (void)startTesting;
- (id)initWithTestName:(id)a0 viewfinderViewController:(id)a1 mode:(long long)a2 testingAnimation:(BOOL)a3 testExtensionSeconds:(double)a4;
- (void)handleDidOpenViewfinderForReason:(long long)a0;
- (void)_startTestingAfterModeSwitchIsTestingAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)_internalStopTesting;

@end
