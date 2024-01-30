@class NSString, LPYouTubePlayerView;

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView *_platformYouTubeView;
    BOOL _allowingInteractionUntilPlaybackResumes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMuted:(BOOL)a0;
- (BOOL)isMuted;
- (void)setVolume:(double)a0;
- (double)volume;
- (void).cxx_destruct;
- (void)setPlaying:(BOOL)a0;
- (id)initWithHost:(id)a0 video:(id)a1 style:(id)a2 posterFrame:(id)a3 posterFrameStyle:(id)a4 configuration:(id)a5;
- (BOOL)usesSharedAudioSession;
- (BOOL)shouldShowMuteButton;
- (BOOL)usesCustomFullScreenImplementation;
- (id)createVideoPlayerView;
- (void)setAllowsUserInteractionWithVideoPlayer:(BOOL)a0;
- (void)youTubePlayer:(id)a0 didChangeToState:(long long)a1;
- (void)youTubePlayer:(id)a0 didReceiveError:(id)a1;
- (void)youTubePlayer:(id)a0 didChangeToFullScreen:(BOOL)a1;
- (void)enterCustomFullScreen;

@end
