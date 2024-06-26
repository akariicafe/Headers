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

+ (void)setupJavascriptContext:(id)a0;
+ (BOOL)shouldDrawRegionOfInterest;
+ (id)supportedSettings;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)setVideoURL:(id)a0;
- (id)initWithWidget:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)duration;
- (double)currentTime;
- (float)contentAspectRatio;
- (void)seekToTime:(double)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)layoutSubviews;
- (id)valueForUndefinedKey:(id)a0;
- (void)setSettingScale:(double)a0;
- (double)settingScale;
- (void)play;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailRect;
- (void)setVideoAsset:(id)a0;
- (void)instantPause;
- (void)prepareForReload;
- (void)resetVideo;
- (void)pauseVideo:(id)a0;
- (BOOL)canPerformAction:(id)a0;
- (BOOL)settingEditable;
- (void)setSettingLoop:(BOOL)a0;
- (void)_beginAudioDucking;
- (void)_cancelThumbnailOperations;
- (void)_cleanupVideo;
- (id)_contentViewToFocus;
- (void)_hideVideoButton;
- (double)_localReadyProgress;
- (void)_reloadThumbnailContent;
- (void)_reloadThumbnailContent:(BOOL)a0 loadVideo:(BOOL)a1;
- (void)_setVideoContentMode:(long long)a0;
- (void)_setupVideo;
- (void)_setupVideoPlayButton;
- (void)_showVideoButton;
- (void)_showVideoButtonWithDelay;
- (void)_stopAudioDucking;
- (void)_unloadThumbnailContent;
- (void)beginDuckingToLevel:(double)a0 fadeDuration:(double)a1;
- (void)beginFadingWithDuration:(double)a0;
- (void)calculateOffsetForRegionOfInterest;
- (void)drawRegionOfInterestContainerBounds;
- (BOOL)endAllEditing:(BOOL)a0;
- (void)endDucking;
- (void)hideThumbnailAndPlayVideo;
- (void)instantResume;
- (id)layoutSettingsKeys;
- (void)networkStatusDidChange:(long long)a0;
- (void)playVideo:(id)a0;
- (void)prepareForRefresh;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (double)remainingPlayDuration;
- (double)requiredDuckLevel;
- (void)setAntialiasing:(BOOL)a0;
- (void)setPlaybackAudioVolume:(double)a0;
- (void)setSettingAudioRequiredDuckLevel:(float)a0;
- (void)setSettingAudioVolume:(float)a0;
- (void)setSettingAutoplay:(BOOL)a0;
- (void)setSettingContentMode:(long long)a0;
- (void)setSettingDidFinishPlayingActionScript:(id)a0;
- (void)setSettingDisablePlayButton:(BOOL)a0;
- (void)setSettingEditable:(BOOL)a0;
- (void)setSettingMediaEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setSettingOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setSettingSeekToTime:(double)a0;
- (void)setSettingShouldFitRegionOfInterest:(BOOL)a0;
- (void)setSettingUrl:(id)a0;
- (long long)settingContentMode;
- (BOOL)settingLoop;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })settingMediaEdgeInsets;
- (struct CGPoint { double x0; double x1; })settingOffset;
- (double)settingSeekToTime;
- (BOOL)settingShouldFitRegionOfInterest;
- (id)settingUrl;
- (BOOL)settingsAutoplay;
- (void)showVideoActivityIndicator:(BOOL)a0;
- (BOOL)supportsReadiness;
- (void)updateOffset;
- (void)videoBecomesReady;
- (void)videoPlayerController:(id)a0 bufferingStateDidChange:(unsigned long long)a1;
- (void)videoPlayerController:(id)a0 didFailToPlayItem:(id)a1;
- (void)videoPlayerController:(id)a0 didFinishPlayingItem:(id)a1;
- (void)videoPlayerController:(id)a0 didStartPlayingItem:(id)a1;

@end
