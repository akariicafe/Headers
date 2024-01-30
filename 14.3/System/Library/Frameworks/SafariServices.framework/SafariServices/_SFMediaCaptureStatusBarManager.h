@class NSString, SBSStatusBarStyleOverridesCoordinator, SBSStatusBarStyleOverridesAssertion;
@protocol _SFMediaRecordingDocument;

@interface _SFMediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    BOOL _hasStatusBarOverride;
    id<_SFMediaRecordingDocument> _recordingDocument;
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
}

@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic) NSString *statusFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void).cxx_destruct;
- (BOOL)statusBarCoordinator:(id)a0 receivedTapWithContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)statusBarCoordinator:(id)a0 invalidatedRegistrationWithError:(id)a1;
- (void)setRecordingDocument:(id)a0;
- (void)_acquireStatusBarOverrideWithAudioOnly:(BOOL)a0;
- (void)_releaseStatusBarOverride;
- (void)_cleanUpStatusBarOverride;
- (int)overrideStyleForAudioOnly:(BOOL)a0;
- (void)_didInvalideStatusBarOverride;
- (void)_didAcquireStatusBarOverrideSuccessfully:(BOOL)a0;
- (void)activateApp;
- (void)recordingDocumentDidBeginMediaCapture:(id)a0 audioOnly:(BOOL)a1;
- (void)recordingDocumentDidEndMediaCapture:(id)a0;
- (void)cancelStatusBarOverride;
- (void)_acquireStatusBarOverride;

@end
