@class NSString, TPSURLSessionItem, UIImage, AVPlayerLayer, TPSKVOManager, AVPlayer;
@protocol TPSVideoAssetViewDelegate;

@interface TPSVideoAssetView : TPSImageAssetView {
    BOOL _videoPlaybackFinished;
    BOOL _avPlayerPlaybackFinished;
    BOOL _registeredForAVPlayerNotification;
    AVPlayer *_avplayer;
    AVPlayerLayer *_avplayerLayer;
    TPSKVOManager *_KVOManager;
}

@property (nonatomic) BOOL readyToDisplayAVPlayer;
@property (nonatomic) BOOL supportsVideoAssetViewCanShowMedia;
@property (nonatomic) BOOL supportsVideoAssetViewFinishedPlayingVideo;
@property (nonatomic) BOOL supportsVideoAssetViewUpdateAssetLoadingFinished;
@property (retain, nonatomic) TPSURLSessionItem *videoURLSessionItem;
@property (retain, nonatomic) NSString *downloadedVideoPath;
@property (weak, nonatomic) id<TPSVideoAssetViewDelegate> videoDelegate;
@property (nonatomic) BOOL lastFrameDominent;
@property (nonatomic) double videoDelayTime;
@property (retain, nonatomic) UIImage *lastFrameImage;
@property (retain, nonatomic) NSString *cacheVideoIdentifier;
@property (retain, nonatomic) NSString *videoPath;

- (void)cancel;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)layoutSubviews;
- (void)playVideo;
- (void)setAspectFillAsset:(BOOL)a0;
- (void)fetchImageWithIdentifier:(id)a0 path:(id)a1;
- (void)stopVideoPlayer;
- (void)cancelVideoDownloadTask;
- (void)updateVideoGravity;
- (void)resetVideoPlayer;
- (void)scrubVideoToFirstFrame;
- (BOOL)displayingVideoLastFrame;
- (void)playVideoDelay;
- (void)avplayerDidFinishPlaying:(id)a0;
- (void)avplayerItemErrorChanged:(id)a0;
- (BOOL)updateImageToVideoLastFrame;
- (void)restartVideoDelay;
- (void)removeVideoPlayerLayer;
- (void)continuePlayVideo;
- (BOOL)videoInProgress;
- (void)replayVideo;

@end
