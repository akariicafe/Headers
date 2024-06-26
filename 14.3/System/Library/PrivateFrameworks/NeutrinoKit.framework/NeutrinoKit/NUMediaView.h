@class NUScrollView, NSString, NSArray, NURenderView, UIView, NUAVPlayerController, NUAVPlayerView, NUComposition, NUCoalescer, NUMediaViewRenderer;
@protocol NUMediaViewDelegate, NUMediaPlayer;

@interface NUMediaView : UIView <NUAVPlayerControllerDelegate, NUAVPlayerViewDelegate> {
    NURenderView *_renderView;
    NUScrollView *_scrollView;
    NUMediaViewRenderer *_renderer;
    NUAVPlayerController *_nuAVPlayerController;
    NUAVPlayerView *_playerView;
    UIView *_livePhotoView;
    struct { BOOL hasDidFinishRendering; BOOL hasDidUpdateLivePhoto; BOOL hasDidFinishRenderingWithStatistics; BOOL hasDidZoom; BOOL hasWillBeginZooming; BOOL hasDidEndZooming; BOOL hasIsReadyForVideoPlayback; BOOL hasDidStartPreparingVideo; BOOL hasDidFinishPreparingVideo; BOOL hasWillBeginLivePhotoPlayback; BOOL hasDidEndLivePhotoPlayback; } _delegateFlags;
    NUCoalescer *_renderCoalescer;
    BOOL _loopsVideo;
    long long _transitionCount;
    struct CGSize { double width; double height; } _transitionTargetSize;
    id /* block */ _renderingCompletionBlock;
    BOOL _lastVideoPlayerVisibilityChangeWasAnimated;
}

@property (nonatomic) struct CGSize { double width; double height; } _masterSizeWithoutGeometry;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) double angle;
@property (nonatomic) NSArray *pipelineFilters;
@property (nonatomic) BOOL centerContent;
@property (nonatomic) BOOL loopsVideoPlayback;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isDebugEnabled) BOOL debugEnabled;
@property (nonatomic) BOOL scrollUpdatesSuppressed;
@property (readonly, nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (readonly, nonatomic, getter=isVideoPlayerVisible) BOOL videoPlayerVisible;
@property (weak, nonatomic) id<NUMediaViewDelegate> delegate;
@property (readonly) id<NUMediaPlayer> player;
@property (copy, nonatomic) NUComposition *composition;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_proposedInsetsForInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 contentSize:(struct CGSize { double x0; double x1; })a1 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 centerContent:(BOOL)a3;

- (BOOL)isReady;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_updateContentInsets;
- (void)_setupViews;
- (void)scrollViewDidZoom:(id)a0;
- (id)snapshotImage;
- (void).cxx_destruct;
- (void)_transitionToInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_renderer;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromSpace:(id)a1 toView:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1 toSpace:(id)a2;
- (void)_updateRenderContent;
- (void)setZoomScaleToFit;
- (void)_setPipelineFilters:(id)a0 shouldUpdateContent:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_stopVideoPlayback;
- (void)waitForRender;
- (BOOL)_didReleaseAVObjects;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForContentSize:(struct CGSize { double x0; double x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 alwaysCenterContent:(BOOL)a2;
- (void)_beginTransition;
- (void)_endTransition;
- (void)_releaseAVObjects;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)_geometry;
- (id)_scrollView;
- (id)_livePhotoView;
- (void)layoutSubviews;
- (void)installRenderingCompletionBlock:(id /* block */)a0;
- (id)_videoPlayerController;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)_startVideoPlayback;
- (id)_videoPlayerView;
- (void)setVideoEnabled:(BOOL)a0 animated:(BOOL)a1;
- (id)_imageLayer;
- (id)_renderView;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)playerViewReadyForDisplayDidChange:(id)a0;
- (void)playerControllerIsReadyForPlayback:(id)a0;
- (void)playerControllerDidFinishPlaying:(id)a0 duration:(double)a1;
- (void)playerController:(id)a0 didUpdateElapsedTime:(double)a1 duration:(double)a2;
- (struct CGPoint { double x0; double x1; })convertPointToImage:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointFromImage:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForContentSize:(struct CGSize { double x0; double x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateRenderContentCoalesced:(BOOL)a0;
- (id)_videoPlayerViewWithoutControls;
- (void)_rendererDidCreateAVPlayerController:(id)a0;
- (void)_rendererDidFinishWithStatistics:(id)a0;
- (void)_rendererDidUpdateLivePhoto;
- (void)_rendererDidStartPreparingVideo;
- (void)_rendererDidFinishPreparingVideo;
- (void)_livephotoPlaybackWillBegin;
- (void)_livephotoPlaybackDidEnd;
- (void)setVideoPlayerVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_setLayerFilters:(id)a0;
- (void)_withComposition:(id)a0 visitRenderClient:(id /* block */)a1;
- (void)_updateVideoPlayerAlpha:(BOOL)a0;
- (id)_layerRecursiveDescription;
- (id)_viewRecursiveDescription;

@end
