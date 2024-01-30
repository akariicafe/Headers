@class NSString, LPYouTubePlayerView;

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView *_platformYouTubeView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMuted:(BOOL)a0;
- (double)volume;
- (void)setVolume:(double)a0;
- (BOOL)isMuted;
- (void).cxx_destruct;
- (void)setPlaying:(BOOL)a0;
- (id)initWithVideo:(id)a0 style:(id)a1 posterFrame:(id)a2 posterFrameStyle:(id)a3 configuration:(id)a4;
- (BOOL)usesSharedAudioSession;
- (BOOL)shouldShowMuteButton;
- (id)createVideoPlayerView;
- (BOOL)usesCustomFullScreenImplementation;
- (void)setAllowsUserInteractionWithVideoPlayer:(BOOL)a0;
- (void)youTubePlayer:(id)a0 didChangeToState:(long long)a1;
- (void)youTubePlayer:(id)a0 didReceiveError:(id)a1;
- (void)youTubePlayer:(id)a0 didChangeToFullScreen:(BOOL)a1;
- (void)enterCustomFullScreen;

@end
