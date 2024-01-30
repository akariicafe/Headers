@class ISLiveWallpaperUIView;

@interface PBUILivePhotoPlayerLiveWallpaperView : PBUILivePhotoPlayerView {
    ISLiveWallpaperUIView *_liveWallpaperView;
}

- (id)gestureRecognizer;
- (id)init;
- (long long)playbackState;
- (void).cxx_destruct;
- (id)_playerUIView;
- (void)_subclass_updateForForcingPlayback:(BOOL)a0;
- (void)_subclass_updatePlayerItemForUse:(id)a0;

@end
