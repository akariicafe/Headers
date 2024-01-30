@class HMCameraProfile, NSDate, HUCameraPlayerAVBehavior, HUCameraBlurViewController, HMCameraClip, HFCameraPlaybackEngine, HUCameraPlayerAccessoryViewController, HUNCCameraPlayerPlaceholderContentViewController, NSString, HUCameraPlayerLiveContentViewController, HFItemManager, HFCameraItem, HUNCCameraScrubberViewController, NAUILayoutConstraintSet, NSUUID;

@interface HUNCCameraPlayerViewController : AVPlayerViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate>

@property (retain, nonatomic) HFItemManager *itemManager;
@property (retain, nonatomic) HFCameraItem *cameraItem;
@property (retain, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HUCameraPlayerAVBehavior *behavior;
@property (retain, nonatomic) HUCameraPlayerLiveContentViewController *liveContentViewController;
@property (retain, nonatomic) HUNCCameraScrubberViewController *miniScrubberViewController;
@property (retain, nonatomic) HUCameraPlayerAccessoryViewController *accessoryViewController;
@property (retain, nonatomic) HUNCCameraPlayerPlaceholderContentViewController *placeholderContentViewController;
@property (retain, nonatomic) HUCameraBlurViewController *blurViewController;
@property (retain, nonatomic) NAUILayoutConstraintSet *staticConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *scrubberConstraintSet;
@property (weak, nonatomic) HMCameraClip *currentClip;
@property (retain, nonatomic) NSUUID *notificationUUID;
@property (retain, nonatomic) NSUUID *clipUUID;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSDate *playbackStartDateFromSignificantEvent;
@property (nonatomic) BOOL hu_playbackControlsAreVisible;
@property (nonatomic) unsigned long long numberOfAssociatedAccessoriesDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)home;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)a0;
- (void)playerViewController:(id)a0 willTransitionToVisibilityOfPlaybackControls:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)playbackControlsDidChangePlayerVolume:(float)a0;
- (void)playbackControlsDidToggleMuted:(BOOL)a0;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateTimeControlStatus:(unsigned long long)a1;
- (void)playbackEngine:(id)a0 didUpdateScrubbingStatus:(BOOL)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateLiveCameraSource:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateEvents:(id)a1;
- (void)_setupPlaybackEngine;
- (void)_updatedRecordedClipInterfaceAvailabilityAnimated:(BOOL)a0;
- (void)_updateStateForPlaybackPosition:(id)a0 animated:(BOOL)a1;
- (void)_setupConstraintSets;
- (BOOL)_shouldAutoPlayOnViewAppearance;
- (void)_updateLivePreviewAspectRatio;
- (void)_updatePlayerVolumeSliderState;
- (void)_updateCameraStatus;
- (void)_updateStateForScrubbingStatus:(BOOL)a0 animated:(BOOL)a1;
- (double)currentScrubberResolutionForBehavior:(id)a0;
- (void)loadCameraClip;
- (void)toggleMicrophoneState;
- (void)updateMicrophone;
- (void)miniScrubberDidToggleLive:(id)a0;
- (void)reloadForCurrentClip;
- (void)addPlaybackEngineObservation;
- (void)updateMicrophoneVisibility;
- (BOOL)shouldDisplayMicrophoneControl;
- (id)initWithCameraProfile:(id)a0 notificationUUID:(id)a1 clipUUID:(id)a2 imageURL:(id)a3;
- (void)reloadAfterNotificationUpdate;

@end
