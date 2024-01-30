@class PXVideoSession, NSString, UIView, UIImage, PXVideoSessionUIView, PUBrowsingVideoPlayer, UIImageView, PXPixelBufferView, AVPlayerLayer, PUMediaProvider, PUAssetViewModel;
@protocol PUDisplayAsset;

@interface PUVideoTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PXVideoSessionUIViewDelegate, PXChangeObserver, PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerVideoOutput, PXSettingsKeyObserver, PUVideoLayerSource> {
    UIView *_view;
    UIImageView *_placeholderImageView;
    UIImage *_preloadedImage;
    BOOL _hidePlaceholderImmediately;
    BOOL _waitForFocusValueForCrossfade;
    PXPixelBufferView *_pixelBufferView;
    UIView *_liveEffectRenderingDebugIndicator;
}

@property (retain, nonatomic) PXVideoSession *videoSession;
@property (retain, nonatomic) PXVideoSessionUIView *videoView;
@property (retain, nonatomic, setter=_setAsset:) id<PUDisplayAsset> asset;
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID;
@property (nonatomic, setter=_setTargetSize:) struct CGSize { double width; double height; } _targetSize;
@property (nonatomic) struct CGSize { double width; double height; } requestedImageTargetSize;
@property (retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer;
@property (nonatomic, setter=_setThumbnailRequestNumber:) long long _thumbnailRequestNumber;
@property (nonatomic, setter=_setDisplayingFullQualityImage:) BOOL _isDisplayingFullQualityImage;
@property (copy, nonatomic, setter=_setReadyForDisplayCompletionHandler:) id /* block */ _readyForDisplayCompletionHandler;
@property (readonly, nonatomic) BOOL _isDisplayingVideo;
@property (nonatomic) BOOL playerIsSeeking;
@property (nonatomic) BOOL playerDidPlayToEnd;
@property (nonatomic) BOOL placeholderVisible;
@property (nonatomic) BOOL currentImageIsPlaceholder;
@property (nonatomic) BOOL placeholderIsAnimatingToHidden;
@property (nonatomic) BOOL placeholderHiddenBehindVideoView;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUMediaProvider *mediaProvider;
@property (nonatomic) BOOL canPlayVideo;
@property (nonatomic) BOOL isOnSecondScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL videoOutputIsReadyForDisplay;
@property (copy, nonatomic) id /* block */ readyForDisplayChangeHandler;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)becomeReusable;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)removeAllAnimations;
- (void)_updateImage;
- (void)setEdgeAntialiasingEnabled:(BOOL)a0;
- (void)setPreloadedImage:(id)a0;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)videoPlayer:(id)a0 desiredSeekTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_handleAssetViewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)_handleBrowsingVideoPlayer:(id)a0 didChange:(id)a1;
- (void)videoPlayer:(id)a0 currentTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_updateReadyForDisplay;
- (id)initWithReuseIdentifier:(id)a0;
- (void)didChangeAnimating;
- (void).cxx_destruct;
- (id)loadView;
- (id)generateAssetTransitionInfo;
- (void)_updatePlaceholderVisibility;
- (void)_updateTargetSize;
- (void)videoSessionViewPlaceholderVisibilityChanged:(id)a0;
- (void)didChangeActive;
- (void)prepareForVideoResolutionChange;
- (void)_callReadyToDisplayChangeHandler;
- (void)_handleImageResult:(id)a0 info:(id)a1 synchronous:(BOOL)a2;
- (void)_layoutLiveEffectsRenderDebugIndicator;
- (void)_setImageResult:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 info:(id)a2 synchronous:(BOOL)a3;
- (void)_updateDebugBorders;
- (void)_updateLiveEffectsRenderDebugIndicator;
- (void)_updateLiveEffectsRenderDebugIndicatorVisibility;
- (void)_updateVideo;
- (BOOL)adoptAssetTransitionInfo:(id)a0;
- (void)setPlaceholderVisible:(BOOL)a0 animated:(BOOL)a1 animationDuration:(double)a2 completion:(id /* block */)a3;

@end
