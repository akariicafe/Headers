@protocol AVHomeIPCameraActionButtonHandling;

@interface AVHomeIPCameraPlayerController : AVPlayerController {
    double _volume;
}

@property (weak, nonatomic) id<AVHomeIPCameraActionButtonHandling> delegate;
@property (nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (nonatomic, getter=isMuted) BOOL muted;

- (void)setVolume:(double)a0;
- (long long)timeControlStatus;
- (BOOL)hasEnabledAudio;
- (long long)status;
- (BOOL)hasLiveStreamingContent;
- (double)volume;
- (BOOL)hasContent;
- (void).cxx_destruct;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPlaying;
- (BOOL)hasEnabledVideo;
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)a0;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (BOOL)hasSeekableLiveStreamingContent;

@end
