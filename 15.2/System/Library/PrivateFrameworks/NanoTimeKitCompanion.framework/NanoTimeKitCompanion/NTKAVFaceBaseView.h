@class UIImageView, CLKVideoPlayerView, NSString;

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView <CLKVideoPlayerViewDelegate>

@property (retain, nonatomic) CLKVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) UIImageView *posterImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)layoutSubviews;
- (void)_mediaServicesWereReset:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_posterImageView;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_prepareForEditing;
- (void)pauseVideoPlayerViewIfItExists;
- (void)_transitionToPosterView:(id)a0;
- (id)_selectedContentView;
- (void)_cleanupAfterTransitionToOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_beginTransitionToOption;
- (void)_createVideoPlayerViewIfNeeded;
- (void)videoPlayerViewDidBeginPlaying:(id)a0;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)a0;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)a0;

@end
