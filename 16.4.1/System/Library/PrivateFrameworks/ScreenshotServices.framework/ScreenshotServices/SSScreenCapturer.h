@class RCPEventStreamRecorder, SSUIServiceServer, SSSnapshotter, UIWindow, SSDittoRemoteConnection, RCPScreenRecorder, SSTestingCoordinator, SSApplicationScreenshotSupplementalDataCapturer, FBSDisplayLayoutMonitor, SSScreenshotsWindow;
@protocol SSScreenCapturerDelegate;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate, SSScreenshotsWindowDelegate> {
    SSSnapshotter *_snapshotter;
    SSDittoRemoteConnection *_dittoRemoteConnection;
    SSApplicationScreenshotSupplementalDataCapturer *_metadataCapturer;
    SSUIServiceServer *_uiServiceServer;
    SSTestingCoordinator *_testingCoordinator;
    SSScreenshotsWindow *_serviceWindow;
    RCPEventStreamRecorder *_recap;
    RCPScreenRecorder *_recapSnapshotter;
    FBSDisplayLayoutMonitor *_layoutMonitor;
}

@property (weak, nonatomic) id<SSScreenCapturerDelegate> delegate;
@property (readonly, nonatomic) UIWindow *screenshotsWindow;

+ (void)playScreenshotSound;
+ (BOOL)shouldUseScreenCapturerForScreenshots;
+ (BOOL)_filesAppExistsOnSystem;

- (void)takeScreenshot;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)preheatWithPresentationOptions:(id)a0;
- (void)takeScreenshotWithOptionsCollection:(id)a0 presentationOptions:(id)a1;
- (void)screenshotWindowWillBeDisplayed;
- (void)_sendEnvironmentDescription:(id)a0 savingImageToPhotos:(id)a1 withCompletion:(id /* block */)a2;
- (id)_applicationProxyForCurrentApp;
- (id)_betaApplicationName;
- (BOOL)_betaFeedbackEnabled:(id)a0;
- (id)_bundleIDForCurrentApplication;
- (void)_captureAndSendDocumentForEnvironmentElement:(id)a0;
- (void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)a0 metadataCaptureCompletion:(id /* block */)a1;
- (void)_captureAndSendMetadataForEnvironmentElement:(id)a0 metadataCapture:(id /* block */)a1 sendCompletion:(id /* block */)a2;
- (id)_currentDisplayLayout;
- (id)_environmentDescriptionFromImage:(id)a0;
- (void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)a0 presentationOptions:(id)a1 appleInternalOptions:(id)a2;
- (void)_saveImageToPhotoLibrary:(id)a0 environmentDescription:(id)a1;
- (BOOL)_screenshotWasTakenOverBetaApp;
- (void)_sendEnvironmentDescription:(id)a0 withCompletion:(id /* block */)a1;
- (void)_takeScreenshotWithOptionsCollection:(id)a0 serviceOptions:(id)a1 presentationOptions:(id)a2 appleInternalOptions:(id)a3;
- (id)_testingCoordinator;
- (void)screenshotWindowWasDismissed;
- (void)server:(id)a0 handleRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)startRecap;
- (void)takeScreenshotWithPresentationOptions:(id)a0;
- (void)testingCoordinator:(id)a0 requestsTakingScreenshotForRunPPTRequest:(id)a1;

@end
