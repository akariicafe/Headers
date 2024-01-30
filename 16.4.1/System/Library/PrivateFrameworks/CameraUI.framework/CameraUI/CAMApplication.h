@class CAMPerformanceTestPlan;

@interface CAMApplication : UIApplication

@property (retain, nonatomic) CAMPerformanceTestPlan *currentTestPlan;

- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)a0;
- (id)_extendLaunchTest;
- (BOOL)runPresentCameraRollWithTestPlan:(id)a0 options:(id)a1;
- (void)willCloseViewfinderForReason:(long long)a0;
- (void)_configureExtendedLaunchTestIfNeeded;
- (void)_registerPreviewStartBlock:(id /* block */)a0;
- (void)willOpenViewfinderForReason:(long long)a0;
- (BOOL)runTakePictureTestWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (BOOL)runTakeVideoTestWithTestPlan:(id)a0 options:(id)a1 userPreferencesOverrides:(id)a2;
- (BOOL)runTakePicturePortraitWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2;
- (BOOL)runSwitchCamerasTestWithTestPlan:(id)a0 options:(id)a1;
- (void)didChangeToMode:(long long)a0 device:(long long)a1;
- (BOOL)runTakePictureFrontCameraWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (BOOL)runNewPPTUICaptureTestWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runLibrarySelectionWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runTakePictureFrontPortraitWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2;
- (void)didOpenViewfinderForReason:(long long)a0;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)a0;
- (BOOL)runSwitchModesWithTestPlan:(id)a0 options:(id)a1 userPreferencesOverrides:(id)a2;
- (void)didCloseViewfinderForReason:(long long)a0;
- (BOOL)runSwitchToPortraitFrontWithTestPlan:(id)a0 options:(id)a1;
- (void).cxx_destruct;

@end
