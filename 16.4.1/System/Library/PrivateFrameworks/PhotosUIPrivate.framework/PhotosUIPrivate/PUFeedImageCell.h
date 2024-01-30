@class UIView, ISWrappedAVPlayer, UIImage, PUImageViewExtraction, PXVideoPlayerView, UIImageView, UIButton, PXUIAssetBadgeView, AVPlayerItem, PXRoundedCornerOverlayView, ISWrappedAVAudioSession;
@protocol PXVideoOverlayButton;

@interface PUFeedImageCell : PUFeedCell

@property (readonly, nonatomic) PXVideoPlayerView *videoPlayerView;
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (readonly, nonatomic) ISWrappedAVAudioSession *audioSession;
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (nonatomic, setter=_setImageTag:) long long _imageTag;
@property (nonatomic, setter=_setImageFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageFrame;
@property (retain, nonatomic, setter=_setOverlayPlayButton:) UIView<PXVideoOverlayButton> *_overlayPlayButton;
@property (retain, nonatomic, setter=_setOverlayPlayButtonBackgroundImageView:) UIImageView *_overlayPlayButtonBackgroundImageView;
@property (retain, nonatomic, setter=_setOverlayPlayButtonBackgroundExtraction:) PUImageViewExtraction *_overlayPlayButtonBackgroundExtraction;
@property (nonatomic, setter=_setShouldUpdateOverlayPlayButtonBackground:) BOOL _shouldUpdateOverlayPlayButtonBackground;
@property (nonatomic, setter=_setShouldHideOverlayPlayButton:) BOOL _shouldHideOverlayPlayButton;
@property (retain, nonatomic, setter=_setCenterOverlayImageView:) UIImageView *_centerOverlayImageView;
@property (nonatomic, setter=_setShouldHideCenterOverlayImageView:) BOOL _shouldHideCenterOverlayImageView;
@property (retain, nonatomic, setter=_setCommentButton:) UIButton *_commentButton;
@property (nonatomic, setter=_setShouldHideCommentButton:) BOOL _shouldHideCommentButton;
@property (nonatomic, setter=setShouldHideLikeBadge:) BOOL shouldHideLikeBadge;
@property (retain, nonatomic, setter=_setPhotoIrisBadgeView:) PXUIAssetBadgeView *_photoIrisBadgeView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (retain, nonatomic) UIImageView *likeBadgeView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) int playerItemRequestID;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, getter=isImageHidden) BOOL imageHidden;
@property (nonatomic) struct CGSize { double width; double height; } maximumImageSize;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) long long overlayOptions;
@property (nonatomic) long long commentCount;
@property (nonatomic) double cornerRadius;

+ (Class)_contentViewClass;
+ (void)preloadResources;
+ (long long)_videoOverlayButtonStyle;

- (id)focusEffect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setAudioSession:(id)a0;
- (void)_handlePlayButton:(id)a0;
- (void)_updateVideoViewContentMode;
- (void)_updateOverlays;
- (void)_handleCommentButton:(id)a0;
- (id)_imageCellDelegate;
- (void)_invalidateOverlayPlayButtonBackground;
- (void)_layoutImageView;
- (void)_updateCommentButton;
- (void)_updateRoundedCornersOverlayView;
- (void)_updateVideoPlayerContents;
- (void)setImage:(id)a0 withTag:(long long)a1;
- (void)setParallaxOffset:(struct CGPoint { double x0; double x1; })a0;

@end
