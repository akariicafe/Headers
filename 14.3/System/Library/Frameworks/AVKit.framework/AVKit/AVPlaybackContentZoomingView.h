@class NSString, UIWindow, AVPlaybackContentContainerView;

@interface AVPlaybackContentZoomingView : UIScrollView <UIScrollViewDelegate, AVPlaybackContentContainer>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousBounds;
@property (weak, nonatomic) UIWindow *lastKnownWindow;
@property (nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled;
@property (nonatomic) struct CGSize { double width; double height; } contentAspectRatio;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;

- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })scrollView:(id)a0 contentSizeForZoomScale:(double)a1 withProposedSize:(struct CGSize { double x0; double x1; })a2;
- (void)zoomToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activeContentView:(id)a1;
- (void)setVideoGravity:(long long)a0 removingAllSubayerTransformAnimations:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsets;
- (struct CGSize { double x0; double x1; })_contentSizeForScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForScale:(double)a0;
- (void)_updateMinMaxZoomScales;
- (void)_updateMinMaxZoomScales:(BOOL)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;

@end
