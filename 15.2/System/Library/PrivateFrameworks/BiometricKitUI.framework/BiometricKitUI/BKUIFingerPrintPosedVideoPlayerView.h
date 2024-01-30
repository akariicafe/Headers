@class NSString, UIImageView, UIImage, AVQueuePlayer, AVPlayerLayer;

@interface BKUIFingerPrintPosedVideoPlayerView : UIView

@property (retain, nonatomic) AVQueuePlayer *videoPlayer;
@property (retain, nonatomic) UIImageView *portraitImageView;
@property (retain, nonatomic) UIImage *horizontalPosedImage;
@property (retain, nonatomic) UIImage *verticalPosedImage;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (copy, nonatomic) NSString *assetName;

+ (Class)layerClass;

- (id)_filters;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)load;
- (void)itemDidFinishPlaying:(id)a0;
- (id)_devicePrefix;
- (void)showVideoPlayer;
- (void)_updateImageForOrientation:(long long)a0;
- (void)hideVideoPlayer;
- (id)initWithAssetName:(id)a0;
- (void)_setFilters:(id)a0;
- (void)transitionToOrientation:(long long)a0;

@end
