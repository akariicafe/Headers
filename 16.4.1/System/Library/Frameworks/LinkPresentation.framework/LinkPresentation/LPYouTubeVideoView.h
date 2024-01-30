@class NSString, LPYouTubePlayerView;

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView *_platformYouTubeView;
    BOOL _allowingInteractionUntilPlaybackResumes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaying:(BOOL)a0;
- (void)setMuted:(BOOL)a0;
- (void)setVolume:(double)a0;
- (BOOL)isMuted;
- (double)volume;
- (void).cxx_destruct;
- (void)youTubePlayer:(id)a0 didChangeToState:(long long)a1;
- (id)createVideoPlayerView;
- (void)enterCustomFullScreen;
- (id)initWithHost:(id)a0 video:(id)a1 style:(id)a2 posterFrame:(id)a3 posterFrameStyle:(id)a4 configuration:(id)a5;
- (void)setAllowsUserInteractionWithVideoPlayer:(BOOL)a0;
- (BOOL)shouldShowMuteButton;
- (BOOL)usesCustomFullScreenImplementation;
- (BOOL)usesSharedAudioSession;
- (void)youTubePlayer:(id)a0 didChangeToFullScreen:(BOOL)a1;
- (void)youTubePlayer:(id)a0 didReceiveError:(id)a1;

@end
