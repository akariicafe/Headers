@protocol AVHomeIPCameraActionButtonHandling;

@interface AVHomeIPCameraPlayerController : AVPlayerController {
    double _volume;
}

@property (weak, nonatomic) id<AVHomeIPCameraActionButtonHandling> delegate;
@property (nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (nonatomic, getter=isMuted) BOOL muted;

- (double)volume;
- (BOOL)isPlaying;
- (void)setVolume:(double)a0;
- (BOOL)hasContent;
- (BOOL)hasEnabledVideo;
- (void).cxx_destruct;
- (BOOL)isPictureInPicturePossible;
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)hasLiveStreamingContent;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (long long)status;
- (long long)timeControlStatus;

@end
