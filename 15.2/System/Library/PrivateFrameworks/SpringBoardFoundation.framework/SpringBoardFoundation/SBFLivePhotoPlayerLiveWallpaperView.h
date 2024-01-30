@class ISLiveWallpaperUIView;

@interface SBFLivePhotoPlayerLiveWallpaperView : SBFLivePhotoPlayerView {
    ISLiveWallpaperUIView *_liveWallpaperView;
}

- (id)gestureRecognizer;
- (void).cxx_destruct;
- (id)init;
- (long long)playbackState;
- (void)_subclass_updatePlayerItemForUse:(id)a0;
- (id)_playerUIView;
- (void)_subclass_updateForForcingPlayback:(BOOL)a0;

@end
