@class NSString, WKWebView;

@interface WKFullScreenViewController : UIViewController <UIGestureRecognizerDelegate, UIToolbarDelegate> {
    struct RetainPtr<UILongPressGestureRecognizer> { void *m_ptr; } _touchGestureRecognizer;
    struct RetainPtr<UIView> { void *m_ptr; } _animatingView;
    struct RetainPtr<WKFullscreenStackView> { void *m_ptr; } _stackView;
    struct RetainPtr<_WKExtrinsicButton> { void *m_ptr; } _cancelButton;
    struct RetainPtr<_WKExtrinsicButton> { void *m_ptr; } _pipButton;
    struct RetainPtr<UIButton> { void *m_ptr; } _locationButton;
    struct RetainPtr<UILayoutGuide> { void *m_ptr; } _topGuide;
    struct RetainPtr<NSLayoutConstraint> { void *m_ptr; } _topConstraint;
    struct FullscreenTouchSecheuristic { double m_weight; struct FullscreenTouchSecheuristicParameters { struct Seconds { double m_value; } rampUpSpeed; struct Seconds { double m_value; } rampDownSpeed; double xWeight; double yWeight; double gamma; double gammaCutoff; double requiredScore; } m_parameters; struct CGSize { double width; double height; } m_size; struct Seconds { double m_value; } m_lastTouchTime; struct CGPoint { double x; double y; } m_lastTouchLocation; double m_lastScore; } _secheuristic;
    struct WKFullScreenViewControllerPlaybackSessionModelClient { void /* function */ **_vptr$PlaybackSessionModelClient; WKFullScreenViewController *m_parent; struct RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit *m_ptr; } m_interface; } _playbackClient;
    double _nonZeroStatusBarHeight;
}

@property (weak, nonatomic) WKWebView *_webView;
@property (readonly, nonatomic) struct WebFullScreenManagerProxy { void /* function */ **x0; struct WebPageProxy *x1; struct WebFullScreenManagerProxyClient *x2; } *_manager;
@property (readonly, nonatomic) struct RectEdges<float> { struct array<float, 4> { float x0[4]; } x0; } _effectiveFullscreenInsets;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL exitFullScreenAction;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) BOOL prefersStatusBarHidden;
@property (nonatomic) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (struct WebFullScreenManagerProxy { void /* function */ **x0; struct WebPageProxy *x1; struct WebFullScreenManagerProxyClient *x2; } *)_manager;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)hideUI;
- (void)showUI;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithWebView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id).cxx_construct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_statusBarFrameDidChange:(id)a0;
- (void)_cancelAction:(id)a0;
- (void)_updateWebViewFullscreenInsets;
- (void)_togglePiPAction:(id)a0;
- (void)_touchDetected:(id)a0;
- (void)_showPhishingAlert;
- (struct RectEdges<float> { struct array<float, 4> { float x0[4]; } x0; })_effectiveFullscreenInsets;
- (void)setAnimatingViewAlpha:(double)a0;
- (void)videoControlsManagerDidChange;

@end
