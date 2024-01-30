@class NSArray, UIImageView, UIImage, AVQueuePlayer, AVPlayerLayer;

@interface BKUIFingerPrintPosedVideoPlayerView : UIView

@property (retain, nonatomic) AVQueuePlayer *videoPlayer;
@property (retain, nonatomic) UIImageView *portraitImageView;
@property (retain, nonatomic) UIImage *horizontalPosedImage;
@property (retain, nonatomic) UIImage *verticalPosedImage;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) NSArray *assetNames;

+ (Class)layerClass;

- (void)load;
- (id)_filters;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)itemDidFinishPlaying:(id)a0;
- (void)showVideoPlayer;
- (void)_updateImageForOrientation:(long long)a0;
- (void)hideVideoPlayer;
- (id)initWithAssetNames:(id)a0;
- (void)_setFilters:(id)a0;
- (void)transitionToOrientation:(long long)a0;

@end
