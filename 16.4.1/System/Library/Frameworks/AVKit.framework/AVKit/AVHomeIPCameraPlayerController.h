@protocol AVHomeIPCameraActionButtonHandling;

@interface AVHomeIPCameraPlayerController : AVPlayerController {
    double _volume;
}

@property (weak, nonatomic) id<AVHomeIPCameraActionButtonHandling> delegate;
@property (nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (nonatomic, getter=isMuted) BOOL muted;

- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (long long)timeControlStatus;
- (BOOL)isPictureInPicturePossible;
- (BOOL)hasSeekableLiveStreamingContent;
- (void)setVolume:(double)a0;
- (BOOL)hasEnabledVideo;
- (BOOL)isPlaying;
- (BOOL)hasLiveStreamingContent;
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (double)volume;
- (long long)status;
- (BOOL)hasContent;
- (void).cxx_destruct;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;

@end
