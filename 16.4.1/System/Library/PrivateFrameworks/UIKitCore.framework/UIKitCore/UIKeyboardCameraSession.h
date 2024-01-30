@class NSString, UIKeyboardCameraViewController, UITextInputSessionActionAnalytics, UIResponder, UIKeyboardCameraBasePresentationController;
@protocol UIKeyInput, UIViewControllerAnimatedTransitioning;

@interface UIKeyboardCameraSession : NSObject <UIKeyboardCameraViewControllerDelegate, UIDimmingViewDelegate, UIViewControllerTransitioningDelegate, UIAdaptivePresentationControllerDelegate, UITextInputSessionActionAnalyticsDelegateSource> {
    UIKeyboardCameraViewController *_keyboardCameraViewController;
    UIKeyboardCameraBasePresentationController *_presentationController;
    id<UIViewControllerAnimatedTransitioning> _animationController;
    BOOL _didFindText;
    NSString *_keyboardCameraCandidateString;
    id _sender;
    BOOL _presentingOverKeyboard;
    BOOL _isTextInputResponder;
    BOOL _isWebKitResponder;
    BOOL _respondsToKeyboardInputShouldInsertText;
    BOOL _isSingleLineDocument;
    BOOL _didCleanup;
    BOOL _isSecureFieldEditor;
    BOOL _shouldResignFirstResponderWhenDone;
}

@property (class, readonly, nonatomic) UIKeyboardCameraSession *sharedSession;
@property (class, readonly, nonatomic) UIKeyboardCameraSession *activeSession;
@property (class, readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (class, readonly, nonatomic) BOOL updatesGuideDuringRotation;

@property (readonly) UITextInputSessionActionAnalytics *sessionAnalytics;
@property (nonatomic) BOOL shouldSuppressSoftwareKeyboard;
@property (readonly, nonatomic) UIResponder<UIKeyInput> *responder;
@property (readonly, nonatomic) BOOL isPresenting;
@property (readonly, nonatomic) BOOL isPresented;
@property (readonly, nonatomic) BOOL isDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_textContentTypesForDataDetection;
+ (BOOL)shouldShowTextSuggestionForResponder:(id)a0;
+ (id)keyboardCameraContentTypeForResponder:(id)a0;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)_addObservers;
- (id)_delegateAsResponder;
- (void)_firstResponderDidChange:(id)a0;
- (void)dealloc;
- (id)_sessionIdentifier;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)_keyboardAboutToHide:(id)a0;
- (void).cxx_destruct;
- (void)dimmingViewWasTapped:(id)a0;
- (void)_cleanupKeyboardCameraAndShouldInsertText:(BOOL)a0;
- (void)_didEnterBackground:(id)a0;
- (void)_dismissKeyboardCamera;
- (void)_inputModeDidChange:(id)a0;
- (void)_keyboardCameraPreparationDidComplete;
- (void)_makeResponderEditableIfNecessary;
- (long long)_overrideTextInputSource;
- (void)_show;
- (id)_textInputResponder;
- (void)_updatePreviewWithString:(id)a0;
- (void)handleRemoteSelfDestruct;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)a0;
- (void)showForResponder:(id)a0 sender:(id)a1 rtiConfiguration:(id)a2;

@end
