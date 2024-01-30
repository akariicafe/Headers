@class NSString, UIKeyboardCameraViewController, UIResponder, UITextInputSessionActionAnalytics, UIKeyboardCameraBasePresentationController;
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
}

@property (class, readonly, nonatomic, getter=isEnabled) BOOL enabled;

@property (readonly) UITextInputSessionActionAnalytics *sessionAnalytics;
@property (readonly, nonatomic) UIResponder<UIKeyInput> *responder;
@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyboardCameraContentTypeForResponder:(id)a0;
+ (BOOL)shouldShowTextSuggestionForResponder:(id)a0;
+ (id)_textContentTypesForDataDetection;
+ (id)showForResponder:(id)a0 sender:(id)a1;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)_keyboardAboutToHide:(id)a0;
- (void)_show;
- (void)dimmingViewWasTapped:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)keyboardCameraDidCancel;
- (id)_textInputResponder;
- (id)_webKitResponder;
- (void)_inputModeDidChange:(id)a0;
- (void)_updatePreviewWithString:(id)a0;
- (void)_keyboardCameraPreparationDidComplete;
- (void)_didEnterBackground:(id)a0;
- (void)_cleanupKeyboardCameraAndShouldInsertText:(BOOL)a0;
- (void)_dismissKeyboardCamera;
- (void)keyboardCameraDidUpdateString:(id)a0;
- (void)keyboardCameraDidAccept;
- (void)_addObservers;
- (void)_firstResponderDidChange:(id)a0;
- (void).cxx_destruct;
- (long long)_overrideTextInputSource;
- (id)_delegateAsResponder;
- (void)dealloc;

@end
