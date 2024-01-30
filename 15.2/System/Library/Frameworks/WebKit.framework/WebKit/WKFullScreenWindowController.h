@class NSString, WKWebView, UIView;

@interface WKFullScreenWindowController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
    struct RetainPtr<WKFullScreenPlaceholderView> { void *m_ptr; } _webViewPlaceholder;
    long long _fullScreenState;
    struct WKWebViewState { float _savedTopContentInset; double _savedPageScale; double _savedViewScale; double _savedZoomScale; struct UIEdgeInsets { double top; double left; double bottom; double right; } _savedEdgeInset; struct UIEdgeInsets { double top; double left; double bottom; double right; } _savedObscuredInsets; struct UIEdgeInsets { double top; double left; double bottom; double right; } _savedScrollIndicatorInsets; struct CGPoint { double x; double y; } _savedContentOffset; double _savedMinimumZoomScale; double _savedMaximumZoomScale; BOOL _savedBouncesZoom; BOOL _savedForceAlwaysUserScalable; } _viewState;
    struct RetainPtr<UIWindow> { void *m_ptr; } _window;
    struct RetainPtr<UIViewController> { void *m_ptr; } _rootViewController;
    struct RetainPtr<UIViewController> { void *m_ptr; } _viewControllerForPresentation;
    struct RetainPtr<WKFullScreenViewController> { void *m_ptr; } _fullscreenViewController;
    struct RetainPtr<UISwipeGestureRecognizer> { void *m_ptr; } _startDismissGestureRecognizer;
    struct RetainPtr<UIPanGestureRecognizer> { void *m_ptr; } _interactivePanDismissGestureRecognizer;
    struct RetainPtr<UIPinchGestureRecognizer> { void *m_ptr; } _interactivePinchDismissGestureRecognizer;
    struct RetainPtr<WKFullScreenInteractiveTransition> { void *m_ptr; } _interactiveDismissTransitionCoordinator;
    struct unique_ptr<WTF::Observer<void (bool)>, std::default_delete<WTF::Observer<void (bool)>>> { struct __compressed_pair<WTF::Observer<void (bool)> *, std::default_delete<WTF::Observer<void (bool)>>> { void *__value_; } __ptr_; } _pipObserver;
    BOOL _shouldReturnToFullscreenFromPictureInPicture;
    BOOL _enterFullscreenNeedsExitPictureInPicture;
    BOOL _returnToFullscreenFromPictureInPicture;
    BOOL _blocksReturnToFullscreenFromPictureInPicture;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalFrame;
    struct RetainPtr<NSString> { void *m_ptr; } _EVOrganizationName;
    BOOL _EVOrganizationNameIsValid;
    BOOL _inInteractiveDismiss;
    BOOL _exitRequested;
    BOOL _enterRequested;
    BOOL _exitingFullScreen;
    struct RetainPtr<id> { void *m_ptr; } _notificationListener;
}

@property (weak, nonatomic) WKWebView *_webView;
@property (readonly, retain, nonatomic) UIView *webViewPlaceholder;
@property (readonly, nonatomic) BOOL isFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void *)_manager;
- (void)videoControlsManagerDidChange;
- (void)close;
- (void)webViewDidRemoveFromSuperviewWhileInFullscreen;
- (BOOL)_isSecure;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithWebView:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (void)beganEnterFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)beganExitFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (struct __SecTrust { } *)_serverTrust;
- (void)dealloc;
- (void)placeholderWillMoveToSuperview:(id)a0;
- (void)_invalidateEVOrganizationName;
- (void)requestExitFullScreen;
- (void)_updateLocationInfo;
- (void)_startToDismissFullscreenChanged:(id)a0;
- (void)_interactiveDismissChanged:(id)a0;
- (void)_interactivePinchDismissChanged:(id)a0;
- (void)_exitFullscreenImmediately;
- (void *)_videoFullscreenManager;
- (void)requestEnterFullScreen;
- (void)_dismissFullscreenViewController;
- (void)_completedExitFullScreen;
- (id)_EVOrganizationName;
- (void)didEnterPictureInPicture;
- (void)didExitPictureInPicture;
- (id).cxx_construct;

@end
