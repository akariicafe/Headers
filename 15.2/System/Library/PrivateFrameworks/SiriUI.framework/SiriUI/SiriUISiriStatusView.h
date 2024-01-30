@class UIView, NSString, AVPlayerLooper, UILongPressGestureRecognizer, AVPlayerItem, AVQueuePlayer, AVAudioSession, NSObject, UIScreen, AVPlayerLayer, SiriUIConfiguration, SUICFlamesView;
@protocol SiriUISiriStatusViewDelegate, OS_dispatch_queue, SiriUISiriStatusViewAnimationDelegate;

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol> {
    UIView *_touchInputView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_flamesContainerView;
    SUICFlamesView *_flamesView;
    UIView *_glyphView;
    AVPlayerLayer *_glyphLayer;
    AVPlayerLooper *_glyphPlayerLooper;
    AVQueuePlayer *_glyphQueuePlayer;
    AVPlayerItem *_glyphPlayerItem;
    AVAudioSession *_glyphAudioSession;
    NSObject<OS_dispatch_queue> *_glyphConfigurationQueue;
    double _lastStateChangeTime;
    UIScreen *_screen;
    long long _deferredFlamesViewState;
    SiriUIConfiguration *_configuration;
    BOOL _textInputEnabled;
    BOOL _siriGlyphHidden;
}

@property (weak, nonatomic) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long mode;
@property (nonatomic) double flamesViewWidth;
@property (nonatomic) double disabledMicOpacity;
@property (weak, nonatomic) id<SiriUISiriStatusViewDelegate> delegate;
@property (readonly, nonatomic) UIView *flamesContainerView;
@property (nonatomic) BOOL flamesViewDeferred;
@property (nonatomic, getter=isInUITrackingMode) BOOL inUITrackingMode;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) double statusViewHeight;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeFrameForScreen:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_flamesView;
- (float)audioLevelForFlamesView:(id)a0;
- (void)_handleKeyboardWillHideNotification:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)_micButtonTapped:(id)a0;
- (void)_micButtonHeld:(id)a0;
- (void)_handleKeyboardDidShowNotification:(id)a0;
- (void)_animateSiriGlyphHidden:(BOOL)a0;
- (void)_setupOrbIfNeeded:(id /* block */)a0;
- (void)fadeOutCurrentAura;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_flamesViewFrame;
- (void)_layoutFlamesViewIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_flamesFrame;
- (void)_setFlamesViewState:(long long)a0;
- (void)_attachFlamesViewIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_siriGlyphTappableRect;
- (void)setupOrbIfNeeded;
- (void)forceMicVisible:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screen:(id)a1 textInputEnabled:(BOOL)a2 configuration:(id)a3;

@end
