@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication

@property (retain, nonatomic) CAMPerformanceTestHarness *currentTestHarness;

- (void)prepareForDefaultImageSnapshotForScreen:(id)a0;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)didOpenViewfinderForReason:(long long)a0;
- (BOOL)runTakePicturePortraitTest:(id)a0 options:(id)a1 prototype:(id)a2;
- (BOOL)runPresentTestWithName:(id)a0 options:(id)a1;
- (void)willOpenViewfinderForReason:(long long)a0;
- (void)didChangeToMode:(long long)a0 device:(long long)a1;
- (void)didCloseViewfinderForReason:(long long)a0;
- (void)_registerPreviewStartBlock:(id /* block */)a0;
- (BOOL)runSwitchCamerasTestWithName:(id)a0 options:(id)a1;
- (id)_extendLaunchTest;
- (BOOL)runTakePictureTestWithFrontCamera:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (void)_configureExtendedLaunchTestIfNeeded;
- (BOOL)runNewPPTUICaptureTestWithTestName:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (void)willCloseViewfinderForReason:(long long)a0;
- (BOOL)runTakePictureFrontPortraitTest:(id)a0 options:(id)a1 prototype:(id)a2;
- (BOOL)runTakeVideoTestWithTestName:(id)a0 options:(id)a1 userPreferencesOverrides:(id)a2;
- (BOOL)runSwitchToPortraitFrontWithTestWithName:(id)a0 options:(id)a1;
- (BOOL)runSwitchModesTestWithName:(id)a0 options:(id)a1;
- (BOOL)runTakePictureTestWithTestName:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)a0;

@end
