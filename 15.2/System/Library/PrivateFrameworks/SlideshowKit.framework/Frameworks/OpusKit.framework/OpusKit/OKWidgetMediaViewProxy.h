@class OKVideoPlayerController, NSString, NSURL, OKWidgetMediaVideoPlayerView, OFUIButton, UIImageView, OKAudioDucker, OFUIView, AVAsset;

@interface OKWidgetMediaViewProxy : OKWidgetView <OKViewControllerAudioSupport, OKVideoControllerDelegate, OKWidgetEditable, OKWidgetMediaViewProxyExports, UIGestureRecognizerDelegate> {
    OFUIButton *_videoPlayButton;
    UIImageView *_thumbnailView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _mediaEdgeInsets;
    NSURL *_videoURL;
    OKWidgetMediaVideoPlayerView *_videoPlayerView;
    OKVideoPlayerController *_videoPlayerController;
    AVAsset *_videoAsset;
    BOOL _disablePlayButton;
    float _rate;
    double _seekToTime;
    NSString *_didFinishPlayingActionScript;
    OKAudioDucker *_audioDucker;
    BOOL _isVideoAssetLoaded;
    BOOL _autoplay;
    BOOL _loop;
    BOOL _didPlayInteractively;
    BOOL _readyForDisplayAndPlay;
    float _requiredDuckLevel;
    float _volume;
    NSString *_audioTrackID;
    struct CGPoint { double x; double y; } _offset;
    struct CGPoint { double x; double y; } _originalOffsetWhilePanning;
    double _scale;
    BOOL _editable;
    BOOL _isEditingPanning;
    BOOL _shouldFitRegionOfInterest;
    BOOL _needsReloadThumbnail;
    OFUIView *_faceRect;
    double _reloadThumbnailContentProgress;
}

@property (nonatomic) BOOL shouldPlayVideoWhenAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (BOOL)shouldDrawRegionOfInterest;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setVideoAsset:(id)a0;
- (void)setVideoURL:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailRect;
- (double)duration;
- (void)seekToTime:(double)a0;
- (double)currentTime;
- (id)initWithWidget:(id)a0;
- (void)play;
- (void)dealloc;
- (void)instantPause;
- (float)contentAspectRatio;
- (void)prepareForReload;
- (void)pauseVideo:(id)a0;
- (void)resetVideo;
- (id)settingObjectForKey:(id)a0;
- (long long)settingContentMode;
- (void)setSettingContentMode:(long long)a0;
- (void)setSettingAutoplay:(BOOL)a0;
- (BOOL)settingLoop;
- (void)setSettingLoop:(BOOL)a0;
- (double)settingScale;
- (void)setSettingScale:(double)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)networkStatusDidChange:(long long)a0;
- (void)prepareForRefresh;
- (void)instantResume;
- (void)setPlaybackAudioVolume:(double)a0;
- (void)beginFadingWithDuration:(double)a0;
- (double)requiredDuckLevel;
- (void)beginDuckingToLevel:(double)a0 fadeDuration:(double)a1;
- (void)endDucking;
- (void)setSettingUrl:(id)a0;
- (void)setSettingDisablePlayButton:(BOOL)a0;
- (id)settingUrl;
- (BOOL)canPerformAction:(id)a0;
- (id)layoutSettingsKeys;
- (BOOL)supportsReadiness;
- (void)setSettingAudioVolume:(float)a0;
- (void)setSettingAudioRequiredDuckLevel:(float)a0;
- (void)setAntialiasing:(BOOL)a0;
- (double)_localReadyProgress;
- (double)remainingPlayDuration;
- (id)_contentViewToFocus;
- (void)playVideo:(id)a0;
- (void)_cancelThumbnailOperations;
- (void)_reloadThumbnailContent;
- (void)_unloadThumbnailContent;
- (void)_setVideoContentMode:(long long)a0;
- (void)calculateOffsetForRegionOfInterest;
- (void)updateOffset;
- (void)_reloadThumbnailContent:(BOOL)a0 loadVideo:(BOOL)a1;
- (void)drawRegionOfInterestContainerBounds;
- (void)showVideoActivityIndicator:(BOOL)a0;
- (void)_hideVideoButton;
- (void)_stopAudioDucking;
- (void)_setupVideoPlayButton;
- (void)_cleanupVideo;
- (void)_setupVideo;
- (void)hideThumbnailAndPlayVideo;
- (void)_showVideoButton;
- (void)_beginAudioDucking;
- (void)videoBecomesReady;
- (void)videoPlayerController:(id)a0 didStartPlayingItem:(id)a1;
- (void)videoPlayerController:(id)a0 didFinishPlayingItem:(id)a1;
- (void)videoPlayerController:(id)a0 didFailToPlayItem:(id)a1;
- (void)videoPlayerController:(id)a0 bufferingStateDidChange:(unsigned long long)a1;
- (BOOL)endAllEditing:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })settingMediaEdgeInsets;
- (void)setSettingMediaEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)settingsAutoplay;
- (double)settingSeekToTime;
- (void)setSettingSeekToTime:(double)a0;
- (struct CGPoint { double x0; double x1; })settingOffset;
- (void)setSettingOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setSettingShouldFitRegionOfInterest:(BOOL)a0;
- (BOOL)settingShouldFitRegionOfInterest;
- (BOOL)settingEditable;
- (void)setSettingEditable:(BOOL)a0;
- (void)setSettingDidFinishPlayingActionScript:(id)a0;
- (void)_showVideoButtonWithDelay;

@end
