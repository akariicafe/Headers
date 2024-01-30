@protocol AVHomeIPCameraActionButtonHandling;

@interface AVHomeIPCameraPlayerController : AVPlayerController {
    double _volume;
}

@property (weak, nonatomic) id<AVHomeIPCameraActionButtonHandling> delegate;
@property (nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (nonatomic, getter=isMuted) BOOL muted;

- (void)setVolume:(double)a0;
- (double)volume;
- (long long)status;
- (BOOL)isPlaying;
- (long long)timeControlStatus;
- (void).cxx_destruct;
- (BOOL)hasEnabledVideo;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)hasLiveStreamingContent;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (BOOL)isPictureInPicturePossible;
- (BOOL)hasContent;
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)a0;

@end
