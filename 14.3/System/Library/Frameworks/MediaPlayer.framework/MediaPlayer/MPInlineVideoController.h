@class MPTVOutWindow, MPVolumeController, MPInlineVideoFullscreenViewController, MPAVItem, MPVideoBackgroundView, MPVideoView, MPSwipableView, NSString, UIImage, UIActivityIndicatorView, MPVideoPlaybackOverlayView, MPVideoContainerView, MPAVController, UIAlertView, NSSet, UIView, UIPinchGestureRecognizer, UIColor, _UIHostedWindow, UINavigationController, MPWeakTimer, UIWindow, UITapGestureRecognizer;
@protocol MPVideoOverlay;

@interface MPInlineVideoController : NSObject <MPVolumeControllerDelegate, MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate> {
    unsigned long long _activeOverlayUserEvents;
    BOOL _disableControlsAutohide;
    BOOL _needsTVWindowSetup;
    BOOL _needsTVWindowTeardown;
    BOOL _TVOutEnabledMaster;
    BOOL _useHostedWindowWhenFullscreen;
    MPSwipableView *_view;
    MPVideoPlaybackOverlayView *_videoOverlayView;
    UIAlertView *_alertSheet;
    UIWindow *_alternateTracksWindow;
    unsigned long long _backgroundTaskId;
    BOOL _batteryMonitoringWasEnabled;
    UINavigationController *_chaptersContainerController;
    MPVideoContainerView *_containerView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPInlineVideoFullscreenViewController *_fullscreenViewController;
    BOOL _fullscreenViewSizeIsExternallyManaged;
    UIWindow *_fullscreenWindow;
    BOOL _hasShownFirstVideoFrame;
    MPWeakTimer *_idleTimer;
    BOOL _inCloneMirrorMode;
    BOOL _isAnimatingOverlay;
    BOOL _isTransitioningFromFullscreen;
    BOOL _isTransitioningToFullscreen;
    UIActivityIndicatorView *_loadingIndicator;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long _scaleModeOverride;
    BOOL _scheduledLoadingIndicator;
    BOOL _swallowNextTapGesture;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPTVOutWindow *_tvOutWindow;
    UIView *_videoBackgroundView;
    NSSet *_viewsToFade;
    BOOL _wantsOverlayVisibleWhenItemIsAvailable;
    BOOL _wasPlaying;
    UIWindow *_windowForDisablingAutorotation;
    UIWindow *_windowForFullscreenTransition;
    BOOL _shouldDestroyVideoSnapshot;
    MPVolumeController *_volumeController;
}

@property (readonly, nonatomic) UIView *advertisementView;
@property (nonatomic) BOOL automaticallyHandleTransportControls;
@property (readonly, nonatomic) UIView *fullscreenView;
@property (copy, nonatomic) NSString *playbackErrorDescription;
@property (nonatomic) BOOL navigationBarHidden;
@property (readonly, nonatomic) UIView *subtitlesView;
@property (nonatomic) long long videoOverlayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL allowsDetailScrubbing;
@property (nonatomic) BOOL allowsWirelessPlayback;
@property (nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property (nonatomic) long long artworkImageStyle;
@property (nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property (readonly, nonatomic) MPVideoBackgroundView *backgroundView;
@property (retain, nonatomic) UIColor *backstopColor;
@property (nonatomic) BOOL canAnimateControlsOverlay;
@property (readonly, nonatomic) BOOL canChangeScaleMode;
@property (nonatomic) BOOL canShowControlsOverlay;
@property (nonatomic) BOOL controlsOverlayVisible;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) BOOL disableAutoRotation;
@property (nonatomic) BOOL disableControlsAutohide;
@property (nonatomic) unsigned long long disabledParts;
@property (nonatomic) BOOL displayPlaybackErrorAlerts;
@property (readonly, nonatomic) _UIHostedWindow *hostedWindow;
@property (readonly, nonatomic) unsigned int hostedWindowContextID;
@property (nonatomic) BOOL inlinePlaybackUsesTVOut;
@property (nonatomic) long long itemTypeOverride;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (retain, nonatomic) UIImage *posterImage;
@property (nonatomic) long long scaleMode;
@property (nonatomic) BOOL TVOutEnabled;
@property (readonly, nonatomic) BOOL viewControllerWillRequestExit;
@property (readonly, retain, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property (readonly, retain, nonatomic) MPVideoView *videoView;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVItem *item;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) MPAVController *player;
@property (readonly, retain, nonatomic) UIView *view;

- (void)_applicationWillResignActive:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (BOOL)canShowQTAudioOnlyUI;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (void)_hideLoadingIndicator;
- (void)_updateIdleTimerDisabledFromPlaybackState:(long long)a0;
- (void)_updateProgressControlForItem:(id)a0;
- (id)init;
- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_batteryStateDidChange:(id)a0;
- (void)_durationAvailable:(id)a0;
- (void)_playbackStateChanged:(id)a0;
- (void)_effectiveScaleModeDidChange:(id)a0;
- (void)_screenDidConnect:(id)a0;
- (void)_screenDidDisconnect:(id)a0;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)overlayTappedBackButton:(id)a0;
- (BOOL)transportControls:(id)a0 tappedButtonPart:(unsigned long long)a1;
- (void)overlayTappedFullscreenButton:(id)a0;
- (void)overlay:(id)a0 didBeginUserEvent:(unsigned long long)a1;
- (void)overlay:(id)a0 didCancelUserEvent:(unsigned long long)a1;
- (void)overlay:(id)a0 didEndUserEvent:(unsigned long long)a1;
- (void)fullscreenOverlayWillHideAnimated:(BOOL)a0;
- (void)fullscreenOverlayWillShowAnimated:(BOOL)a0;
- (void)fullscreenOverlayDidHide;
- (void)fullscreenOverlayDidShow;
- (void)setVideoSnapshotEnabled:(BOOL)a0;
- (void)_applicationResumedEventsOnly:(id)a0;
- (void)_applicationSuspended:(id)a0;
- (void)_applicationDidFinishSuspensionSnapshot:(id)a0;
- (void)_availableRoutesChanged:(id)a0;
- (void)_bufferingStateChanged:(id)a0;
- (void)_itemTypeAvailable:(id)a0;
- (void)_playbackError:(id)a0;
- (void)_viewWasTapped:(id)a0;
- (void)_scaleModeDidChange:(id)a0;
- (void)_timedImageMetadataAvailable:(id)a0;
- (void)_validityChanged:(id)a0;
- (void)_cancelOverlayIdleTimer;
- (void)_delayedShowLoadingIndicator;
- (void)_destroyVideoOverlayView;
- (void)_destroyVideoSnapshotView;
- (void)_doneWithChapters:(id)a0;
- (long long)_effectiveItemType;
- (void)_enableAirPlayVideoRoutesIfNecessary;
- (void)_flipFromChaptersDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)_flipToChaptersDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)_hideOverlayAnimated:(BOOL)a0;
- (void)_hideOverlayDidEnd;
- (void)_setupTVOutWindow;
- (BOOL)_isAnimatingFullscreenTransition;
- (void)_overlayIdleTimerFired:(id)a0;
- (BOOL)_overlayViewIsVisible;
- (void)_showOverlayAnimated:(BOOL)a0;
- (void)_postScaleModeDidChange;
- (void)_postViewControllerRequestsExitWithReason:(long long)a0;
- (void)_registerForPlayerNotifications;
- (void)_resetOverlayIdleTimer;
- (void)_resetOverlayIdleTimer:(double)a0;
- (BOOL)_shouldShowDestinationPlaceholder;
- (void)_showOverlayDidEnd:(BOOL)a0;
- (void)_showOverlayAnimated:(BOOL)a0 quickHide:(BOOL)a1;
- (void)_showVideoSnapshotView;
- (void)_tearDownTVOutWindow;
- (BOOL)_useInlineControls;
- (void)_transitionFromFullscreenAnimated:(BOOL)a0;
- (void)_transitionFromFullscreenAnimated:(BOOL)a0 fromDoneButton:(BOOL)a1;
- (void)_transitionFromFullscreenDidEnd;
- (void)_transitionToFullscreenAnimated:(BOOL)a0;
- (void)_transitionToFullscreenDidEnd;
- (void)_unregisterForPlayerNotifications;
- (void)_updateBackgroundViewConfiguration:(BOOL)a0;
- (void)_viewWasPinched:(id)a0;
- (void)_updateBackgroundViewInformation;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateTVOutEnabled;
- (void)_updateDoubleTapGestureRecognizer;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)setFullscreen:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupSubviews;
- (void)_firstVideoFrameDisplayed:(id)a0;
- (void)_isExternalPlaybackActiveDidChange:(id)a0;
- (void)_sizeDidChange:(id)a0;
- (BOOL)canHideOverlay:(BOOL)a0;
- (void)exitFullscreen;
- (void)swipableView:(id)a0 didMoveToSuperview:(id)a1;
- (void)swipableView:(id)a0 willMoveToWindow:(id)a1;
- (void)displayVideoView;
- (void)swipableViewHadActivity:(id)a0;
- (void)prepareToDisplayVideo;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(BOOL)a0 animate:(BOOL)a1;
- (void)setOwnsStatusBar:(BOOL)a0;
- (void)setControlsOverlayVisible:(BOOL)a0 animate:(BOOL)a1 force:(BOOL)a2;
- (void)setDesiredParts:(unsigned long long)a0 animate:(BOOL)a1;
- (void)setScaleModeOverride:(long long)a0 animated:(BOOL)a1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)a0;
- (void)setVisibleParts:(unsigned long long)a0 animate:(BOOL)a1;
- (void)clearWeakReferencesToObject:(id)a0;
- (void)noteIgnoredChangeTypes:(unsigned long long)a0;
- (void)setOrientation:(long long)a0 animate:(BOOL)a1;
- (long long)_itemTypeWithActualTypePreference;
- (void)_updateAlwaysPlayWheneverPossible;

@end
