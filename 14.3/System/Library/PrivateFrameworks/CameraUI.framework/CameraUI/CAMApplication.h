@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication

@property (retain, nonatomic) CAMPerformanceTestHarness *currentTestHarness;

- (void)prepareForDefaultImageSnapshotForScreen:(id)a0;
- (void)didCloseViewfinderForReason:(long long)a0;
- (BOOL)runSwitchToPortraitFrontWithTestWithName:(id)a0 options:(id)a1;
- (BOOL)runTakePictureTestWithFrontCamera:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (void).cxx_destruct;
- (BOOL)runTakePictureFrontPortraitTest:(id)a0 options:(id)a1 prototype:(id)a2;
- (BOOL)runTakePicturePortraitTest:(id)a0 options:(id)a1 prototype:(id)a2;
- (void)_registerPreviewStartBlock:(id /* block */)a0;
- (id)_extendLaunchTest;
- (BOOL)runTakePictureTestWithTestName:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (BOOL)runPresentTestWithName:(id)a0 options:(id)a1;
- (void)didChangeToMode:(long long)a0 device:(long long)a1;
- (void)didOpenViewfinderForReason:(long long)a0;
- (BOOL)runSwitchModesTestWithName:(id)a0 options:(id)a1;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)_configureExtendedLaunchTestIfNeeded;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)a0;
- (BOOL)runNewPPTUICaptureTestWithTestName:(id)a0 options:(id)a1;
- (void)willCloseViewfinderForReason:(long long)a0;
- (void)willOpenViewfinderForReason:(long long)a0;
- (BOOL)runSwitchCamerasTestWithName:(id)a0 options:(id)a1;

@end
