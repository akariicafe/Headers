@class NSString, UIImageView, UIImage, AVQueuePlayer, AVPlayerLayer, NSDictionary;

@interface BKUIFingerPrintPosedVideoPlayerView : UIView

@property (retain, nonatomic) AVQueuePlayer *videoPlayer;
@property (retain, nonatomic) UIImageView *portraitImageView;
@property (retain, nonatomic) UIImage *horizontalPosedImage;
@property (retain, nonatomic) UIImage *verticalPosedImage;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) NSDictionary *assetnameForAssetLengthDict;
@property (copy, nonatomic) NSString *assetName;

+ (Class)layerClass;

- (void)load;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_filters;
- (void)hideVideoPlayer;
- (void)showVideoPlayer;
- (id)_devicePrefix;
- (void)_setFilters:(id)a0;
- (void)_updateImageForOrientation:(long long)a0;
- (id)initWithAssetName:(id)a0;
- (void)itemDidFinishPlaying:(id)a0;
- (void)transitionToOrientation:(long long)a0;

@end
