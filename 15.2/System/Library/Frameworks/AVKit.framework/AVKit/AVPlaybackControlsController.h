@class AVPlaybackControlsView, AVNowPlayingInfoController, AVPlayerViewController, NSString, AVPictureInPictureController, AVSecondScreenContentViewConnection, NSTimer, AVTurboModePlaybackControlsPlaceholderView, NSArray, AVPlayerControllerTimeResolver, AVRouteDetectorCoordinator, AVPlayerController, UIViewPropertyAnimator, AVObservationController, AVPlaybackRateCollection, AVTimeFormatter, UIAlertController, AVPlayerControllerVolumeAnimator, NSUUID, AVMediaSelectionMenuController, AVMobilePlaybackRateMenuController, NSNumber;
@protocol AVVolumeController;

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewInternalDelegate, AVVolumeControlsControllerDelegate, AVMediaSelectionMenuDelegate, AVControlOverflowButtonDelegate, AVPlayerViewControllerContentViewDelegate, AVScrubbing> {
    id _selectedPlaybackRateObservationToken;
}

@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) AVPlaybackControlsView *playbackControlsView;
@property (weak, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView;
@property (retain, nonatomic) AVNowPlayingInfoController *nowPlayingInfoControllerIfLoaded;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVObservationController *playbackControlsObservationController;
@property (retain, nonatomic) AVPlayerControllerTimeResolver *timeResolver;
@property (readonly, nonatomic) AVTimeFormatter *elapsedTimeFormatter;
@property (readonly, nonatomic) AVTimeFormatter *remainingTimeFormatter;
@property (weak, nonatomic) UIAlertController *routePickerAlertController;
@property (retain, nonatomic) AVRouteDetectorCoordinator *routeDetectorCoordinator;
@property (retain, nonatomic) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
@property (weak, nonatomic) NSTimer *loadingIndicatorTimer;
@property (weak, nonatomic) UIViewPropertyAnimator *collapseExpandSliderAnimator;
@property (retain, nonatomic) id<AVVolumeController> volumeController;
@property (retain, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator;
@property (retain, nonatomic) NSUUID *playerMuteFadeAnimationID;
@property (retain, nonatomic) AVMediaSelectionMenuController *mediaSelectionMenuController;
@property (retain, nonatomic) AVMobilePlaybackRateMenuController *playbackRateMenuController;
@property (readonly, nonatomic) BOOL showsMediaSelectionButton;
@property (readonly, nonatomic) BOOL showsSkipButtons;
@property (readonly, nonatomic) BOOL showsStartContentTransitionButtons;
@property (readonly, nonatomic) BOOL playButtonsShowPauseGlyph;
@property (readonly, nonatomic) BOOL prominentPlayButtonCanShowPauseGlyph;
@property (readonly, nonatomic) BOOL showsRoutePickerView;
@property (readonly, nonatomic) BOOL showsTransportControls;
@property (nonatomic) BOOL showsPlaybackSpeedButton;
@property (readonly, nonatomic) BOOL canShowLoadingIndicator;
@property (readonly, nonatomic, getter=isSeekingEnabled) BOOL seekingEnabled;
@property (nonatomic) BOOL showsLoadingIndicator;
@property (nonatomic) BOOL canIncludeVideoGravityButton;
@property (retain, nonatomic) NSNumber *pendingOrientationChange;
@property (readonly, nonatomic, getter=isUserInteracting) BOOL userInteracting;
@property (nonatomic) BOOL hasStartedUpdates;
@property (readonly, nonatomic) BOOL needsTimeResolver;
@property (nonatomic, getter=isCoveringWindow) BOOL coveringWindow;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
@property (nonatomic) BOOL hasBecomeReadyToPlay;
@property (nonatomic) BOOL multipleRoutesDetected;
@property (readonly, nonatomic) double minimumTime;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, nonatomic) double targetTime;
@property (readonly, nonatomic) double currentTime;
@property (nonatomic) double loadingIndicatorTimerDelay;
@property (nonatomic, getter=isResumingUpdates) BOOL resumingUpdates;
@property (nonatomic) BOOL prefersMuted;
@property (nonatomic, getter=isPlaybackSuspendedForScrubbing) BOOL playbackSuspendedForScrubbing;
@property (nonatomic) long long timeControlStatus;
@property (nonatomic) BOOL hasSeekableLiveStreamingContent;
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking;
@property (nonatomic) BOOL shouldIgnoreTimeResolverUpdates;
@property (nonatomic) BOOL hasBegunObservingPotentiallyUnimplementedPlayerControllerProperties;
@property (nonatomic) long long videoGravityButtonType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playbackViewFrame;
@property (nonatomic, getter=isVideoScaled) BOOL videoScaled;
@property (readonly, nonatomic) NSString *uniqueIdentifer;
@property (retain, nonatomic) NSString *windowSceneSessionIdentifier;
@property (retain, nonatomic) NSTimer *playbackControlsVisibilityTimer;
@property (nonatomic) unsigned long long userInteractingCount;
@property (nonatomic, getter=isHidingItemsForTransition) BOOL hidingItemsForTransition;
@property (nonatomic, getter=isShowingPlaybackControls) BOOL showingPlaybackControls;
@property (nonatomic, getter=shouldShowVolumeControlInTransportBar) BOOL showingVolumeControlInTransportBar;
@property (weak, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection;
@property (nonatomic) BOOL playerViewControllerIsBeingTransitionedWithResizing;
@property (nonatomic) BOOL playerViewControllerIsPresentingFullScreen;
@property (nonatomic) BOOL playerViewControllerIsPresentedFullScreen;
@property (nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy;
@property (nonatomic) BOOL entersFullScreenWhenPlaybackBegins;
@property (readonly, nonatomic) BOOL shouldEnterFullScreenWhenPlaybackBegins;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic) BOOL allowsEnteringFullScreen;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (nonatomic) BOOL volumeControlsCanShowSlider;
@property (copy, nonatomic) NSArray *customControlItems;
@property (nonatomic) BOOL showsPictureInPictureButton;
@property (nonatomic) BOOL showsPlaybackControls;
@property (nonatomic) BOOL hasCustomPlaybackControls;
@property (nonatomic) BOOL canIncludePlaybackControlsWhenInline;
@property (nonatomic) BOOL showsVideoGravityButton;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter;
@property (nonatomic) BOOL showsDoneButtonWhenFullScreen;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls;
@property (nonatomic) BOOL playbackControlsIncludeStartContentTransitionButtons;
@property (nonatomic) BOOL playbackControlsShouldControlSystemVolume;
@property (nonatomic) BOOL forcePlaybackControlsHidden;
@property (nonatomic) BOOL showsTimecodes;
@property (nonatomic) BOOL wantsExternalPlaybackButtonShown;
@property (copy, nonatomic) id /* block */ playButtonHandlerForLazyPlayerLoading;
@property (nonatomic, getter=isStartLeftwardContentTransitionButtonEnabled) BOOL startLeftwardContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartRightwardContentTransitionButtonEnabled) BOOL startRightwardContentTransitionButtonEnabled;
@property (copy, nonatomic) id /* block */ contentTransitionAction;
@property (readonly, nonatomic) BOOL showsProminentPlayButton;
@property (retain, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (retain, nonatomic) AVSecondScreenContentViewConnection *secondScreenConnection;
@property (readonly, nonatomic) BOOL tapGestureRecognizersCanReceiveTouches;
@property (readonly, nonatomic) BOOL entersFullScreenWhenTapped;
@property (nonatomic) BOOL canHidePlaybackControls;
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (nonatomic, getter=isPopoverBeingPresented) BOOL popoverIsBeingPresented;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_playbackSpeedControlFeatureEnabled;
+ (id)keyPathsForValuesAffectingFullScreen;
+ (id)keyPathsForValuesAffectingShowsRoutePickerView;
+ (id)keyPathsForValuesAffectingShowsProminentPlayButton;
+ (id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+ (id)keyPathsForValuesAffectingShowsTransportControls;
+ (id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+ (id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingMinimumTime;
+ (id)keyPathsForValuesAffectingMaximumTime;
+ (id)keyPathsForValuesAffectingSeekingEnabled;
+ (id)keyPathsForValuesAffectingShowsSkipButtons;
+ (id)keyPathsForValuesAffectingShowsStartContentTransitionButtons;
+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+ (id)keyPathsForValuesAffectingNeedsTimeResolver;

- (void).cxx_destruct;
- (void)dealloc;
- (void)beginChangingVolume;
- (void)endChangingVolume;
- (void)flashPlaybackControlsWithDuration:(double)a0;
- (void)beginScrubbing;
- (void)scrubToTime:(double)a0 resolution:(double)a1;
- (void)endScrubbing;
- (void)routePickerViewDidEndPresentingRoutes:(id)a0;
- (unsigned long long)overrideRouteSharingPolicyForRoutePickerView:(id)a0;
- (id)overrideRoutingContextUIDForRoutePickerView:(id)a0;
- (void)routePickerViewWillBeginPresentingRoutes:(id)a0;
- (void)playerViewControllerContentView:(id)a0 willLoadPlaybackControlsView:(id)a1;
- (void)playerViewControllerContentView:(id)a0 willLoadTurboModePlaceholderView:(id)a1;
- (BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)a0;
- (void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(id)a0;
- (void)playerViewControllerContentViewDidLayoutSubviews:(id)a0;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)a0;
- (BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)a0;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)a0;
- (BOOL)playerViewControllerContentViewHasActiveTransition:(id)a0;
- (BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)a0;
- (id)playerViewControllerContentViewOverrideLayoutClass:(id)a0;
- (void)playerViewControllerContentViewDidUpdateScrollingStatus:(id)a0;
- (id)overflowMenuItemsForControlOverflowButton:(id)a0;
- (void)mediaSelectionMenuController:(id)a0 didSelectOption:(id)a1 atIndex:(unsigned long long)a2;
- (id)volumeControlsController:(id)a0 volumeButtonControl:(id)a1 viewContainingVolumeSlider:(id)a2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)a0;
- (void)transportControls:(id)a0 scrubberDidBeginScrubbing:(id)a1;
- (void)transportControls:(id)a0 scrubberDidScrub:(id)a1;
- (void)transportControls:(id)a0 scrubberDidEndScrubbing:(id)a1;
- (id)initWithPlayerViewController:(id)a0;
- (void)startUpdatesIfNeeded;
- (void)toggleMuted;
- (void)_updateVolumeButtonInclusionAndPrefersVolumeSliderExpandedWithPreferredExpansion:(BOOL)a0;
- (void)playbackControlsViewDidLoad:(id)a0;
- (void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)a0;
- (void)secondScreenConnectionDidBecomeActive:(id)a0;
- (void)secondScreenConnectionDidResignActive:(id)a0;
- (void)handleVolumeChange:(id)a0;
- (void)handleCurrentRouteSupportsVolumeControlChanged:(id)a0;
- (void)volumeSliderValueDidChange:(id)a0;
- (void)volumeButtonTapTriggered:(id)a0;
- (void)volumeButtonLongPressTriggered:(id)a0;
- (void)volumeButtonPanChanged:(id)a0;
- (void)updateVolumeSliderValue:(id)a0 volumeButtonControl:(id)a1;
- (BOOL)_prefersVolumeSliderExpandedAutomatically;
- (void)_showOrHideDisplayModeControls;
- (void)_updateVolumeButtonGlyph;
- (id)_volumeButtonMicaPackageState;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)a0 animated:(BOOL)a1;
- (void)playbackSpeedButtonTapped:(id)a0;
- (void)prominentPlayButtonTouchUpInside:(id)a0;
- (void)skipButtonTouchUpInside:(id)a0;
- (void)skipButtonLongPressTriggered:(id)a0;
- (void)skipButtonLongPressEnded:(id)a0;
- (void)skipButtonForcePressChanged:(id)a0;
- (void)startContentTransitionButtonTouchUpInside:(id)a0;
- (void)_bindEnabledStateOfControls:(id)a0 toKeyPath:(id)a1;
- (void)_bindInclusionOfControlItems:(id)a0 toKeyPath:(id)a1;
- (void)_observeBoolForKeyPath:(id)a0 usingKeyValueObservationController:(id)a1 observationHandler:(id /* block */)a2;
- (void)_seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (void)togglePlaybackControlsVisibility;
- (void)_updatePlaybackControlsVisibilityWantsPlaybackControlsVisible:(BOOL)a0;
- (void)showPlaybackControls:(BOOL)a0 immediately:(BOOL)a1;
- (void)flashVolumeControlsWithDuration:(double)a0;
- (void)_autoHideControlsAfterDelay:(double)a0;
- (void)beginShowingItemsDueToIndirectUserInteraction;
- (void)endShowingItemsDueToIndirectUserInteraction;
- (void)beginUserInteraction;
- (void)endUserInteraction;
- (void)beginHidingItemsForTransition;
- (void)endHidingItemsForTransitionAndShowImmediately:(BOOL)a0;
- (void)_updatePlaybackControlsVisibleAndObservingUpdates;
- (void)_startObservingForPlaybackViewUpdates;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (BOOL)_wantsRouteDetectionEnabled;
- (void)_updateSkipButtonsEnableLongPress;
- (void)_updateControlInclusion;
- (void)_updateContainerInclusion;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_updatePlaybackSpeedControlImageNames;
- (void)_updatePlaybackSpeedControlInclusion;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateVideoGravityButtonType;
- (void)_updateVolumeControllerView;
- (void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)a0 playing:(BOOL)a1 userDidEndTappingProminentPlayButton:(BOOL)a2;
- (void)_updatePrefersInspectionSuspended;
- (void)_updateNowPlayingInfoCenter;
- (void)_updateEdgeInsetsForLetterboxedContentInContentView:(id)a0;
- (void)_updateSecondScreenConnectionReadyToConnect;
- (void)_updateRouteDetectionEnabled;

@end
