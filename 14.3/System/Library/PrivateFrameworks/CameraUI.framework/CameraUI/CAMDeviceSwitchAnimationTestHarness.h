@class CAMViewfinderViewController;

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    CAMViewfinderViewController *_viewfinder;
    long long _desiredDevicePosition;
}

+ (id)harnessWithTestName:(id)a0 viewfinder:(id)a1 devicePosition:(long long)a2;

- (void).cxx_destruct;
- (void)ensureCaptureDevicePosition:(long long)a0 mode:(long long)a1 thenPerform:(id /* block */)a2;
- (void)startTesting;
- (id)initWithTestName:(id)a0 viewfinder:(id)a1 devicePosition:(long long)a2;

@end
