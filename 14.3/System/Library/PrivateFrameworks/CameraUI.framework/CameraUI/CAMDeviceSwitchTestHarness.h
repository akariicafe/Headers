@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController;
@property (readonly, nonatomic) long long desiredDevicePosition;
@property (readonly, nonatomic) long long startingCaptureMode;
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation;

- (void).cxx_destruct;
- (void)ensureCaptureDevicePosition:(long long)a0 mode:(long long)a1 thenPerform:(id /* block */)a2;
- (void)handleDidOpenViewfinderForReason:(long long)a0;
- (void)startTesting;
- (id)initWithTestName:(id)a0 viewfinderViewController:(id)a1 devicePosition:(long long)a2 testingAnimation:(BOOL)a3 startingCaptureMode:(long long)a4;

@end
