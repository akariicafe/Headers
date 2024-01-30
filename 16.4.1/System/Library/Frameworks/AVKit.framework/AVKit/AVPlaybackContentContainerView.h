@class AVStatusBarBackgroundGradientView, __AVPlayerLayerView, AVVisualAnalysisView, UIView, NSString;

@interface AVPlaybackContentContainerView : UIView <AVPlaybackContentContainer>

@property (readonly, nonatomic) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView;
@property (nonatomic, getter=isObservingStatusBarHidden) BOOL observingStatusBarHidden;
@property (retain, nonatomic) __AVPlayerLayerView *playerLayerView;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (retain, nonatomic) UIView *contentOverlayViewSubview;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (retain, nonatomic) AVVisualAnalysisView *visualAnalysisView;
@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateStatusBarBackgroundGradientViewAlpha;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerLayerView:(id)a1 contentOverlayView:(id)a2;
- (void)removeAllSublayerTransformAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activeContentView:(id)a1;
- (void).cxx_destruct;
- (void)setVideoGravity:(long long)a0 removingAllSublayerTransformAnimations:(BOOL)a1;

@end
