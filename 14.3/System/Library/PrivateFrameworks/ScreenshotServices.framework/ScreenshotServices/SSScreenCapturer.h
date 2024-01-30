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

+ (BOOL)shouldUseScreenCapturerForScreenshots;
+ (void)playScreenshotSound;
+ (BOOL)_filesAppExistsOnSystem;

- (void)takeScreenshot;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)preheatWithPresentationOptions:(id)a0;
- (void)takeScreenshotWithOptionsCollection:(id)a0 presentationOptions:(id)a1;
- (void)testingCoordinator:(id)a0 requestsTakingScreenshotForRunPPTRequest:(id)a1;
- (void)screenshotWindowWillBeDisplayed;
- (void)screenshotWindowWasDismissed;
- (id)_betaApplicationName;
- (void)server:(id)a0 handleRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)startRecap;
- (void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)a0 presentationOptions:(id)a1 appleInternalOptions:(id)a2;
- (void)takeScreenshotWithPresentationOptions:(id)a0;
- (void)_saveImageToPhotoLibrary:(id)a0 environmentDescription:(id)a1;
- (void)_captureAndSendDocumentForEnvironmentElement:(id)a0;
- (void)_captureAndSendMetadataForEnvironmentElement:(id)a0 sendCompletion:(id /* block */)a1;
- (void)_takeScreenshotWithOptionsCollection:(id)a0 presentationOptions:(id)a1 appleInternalOptions:(id)a2;
- (id)_environmentDescriptionFromImage:(id)a0;
- (BOOL)_screenshotWasTakenOverBetaApp;
- (id)_bundleIDForCurrentApplication;
- (BOOL)_betaFeedbackEnabled:(id)a0;
- (id)_currentDisplayLayout;
- (void)_sendEnvironmentDescription:(id)a0 savingImageToPhotos:(id)a1 withCompletion:(id /* block */)a2;
- (void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)a0;
- (id)_applicationProxyForCurrentApp;
- (id)_testingCoordinator;

@end
