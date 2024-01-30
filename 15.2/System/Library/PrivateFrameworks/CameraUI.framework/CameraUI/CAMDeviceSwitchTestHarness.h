@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;
@property (readonly, nonatomic) long long desiredDevicePosition;
@property (readonly, nonatomic) long long startingCaptureMode;
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation;
@property (readonly, nonatomic) double testExtensionSeconds;

- (void)ensureCaptureDevicePosition:(long long)a0 mode:(long long)a1 thenPerform:(id /* block */)a2;
- (id)initWithTestName:(id)a0 viewfinderViewController:(id)a1 devicePosition:(long long)a2 testingAnimation:(BOOL)a3 startingCaptureMode:(long long)a4 testExtensionSeconds:(double)a5;
- (void)_internalStopTesting;
- (void)handleDidOpenViewfinderForReason:(long long)a0;
- (void).cxx_destruct;
- (void)startTesting;

@end
