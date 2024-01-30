@class AVStatusBarBackgroundGradientView, __AVPlayerLayerView, NSString, UIView;

@interface AVPlaybackContentContainerView : UIView <AVPlaybackContentContainer>

@property (readonly, nonatomic) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView;
@property (nonatomic, getter=isObservingStatusBarHidden) BOOL observingStatusBarHidden;
@property (retain, nonatomic) __AVPlayerLayerView *playerLayerView;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (retain, nonatomic) UIView *contentOverlayViewSubview;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activeContentView:(id)a1;
- (void)setVideoGravity:(long long)a0 removingAllSubayerTransformAnimations:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerLayerView:(id)a1 contentOverlayView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_resolvedContentFrame;
- (void)removeAllSublayerTransformAnimations;
- (void)_updateStatusBarBackgroundGradientViewAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForStatusBarBackgroundGradientView;

@end
