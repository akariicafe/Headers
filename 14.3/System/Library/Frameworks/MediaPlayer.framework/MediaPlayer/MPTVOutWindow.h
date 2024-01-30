@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {
    MPMovieTVHUDView *_hudView;
    MPVideoView *_videoView;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_playbackStateChanged:(id)a0;
- (id)videoView;
- (BOOL)setVideoView:(id)a0;
- (BOOL)_setupTargetScreen:(id)a0;
- (void)_screenModeDidChange:(id)a0;

@end
