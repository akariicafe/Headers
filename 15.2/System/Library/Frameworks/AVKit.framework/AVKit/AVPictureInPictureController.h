@class AVPictureInPicturePlatformAdapter, AVPictureInPictureControllerContentSource, UIImage, NSString, AVPictureInPictureViewController, AVPlayerLayer, AVObservationController, AVPlayerController;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePrerollDelegate, AVPictureInPictureControllerDelegate;

@interface AVPictureInPictureController : NSObject <AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureControlsStyleAppearance> {
    BOOL _canPausePlaybackWhenExitingPictureInPicture;
}

@property (class, readonly, nonatomic) UIImage *pictureInPictureButtonStartImage;
@property (class, readonly, nonatomic) UIImage *pictureInPictureButtonStopImage;

@property (readonly, nonatomic) AVPictureInPicturePlatformAdapter *platformAdapter;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) id<AVPictureInPictureContentSource> sourceIfRetainedDuringPictureInPicturePlayback;
@property (retain, nonatomic) id playerControllerIsPlayingObservationToken;
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (nonatomic, getter=isOtherPictureInPictureActive) BOOL otherPictureInPictureActive;
@property (nonatomic, setter=_setCanStopPictureInPicture:) BOOL canStopPictureInPicture;
@property (nonatomic) BOOL wantsImmediateAssetInspection;
@property (nonatomic) BOOL wasPlayingWhenPictureInPictureInterruptionBegan;
@property (readonly, weak, nonatomic) id<AVPictureInPictureContentSource> source;
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (readonly, nonatomic) BOOL wantsResourceReduction;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) BOOL retainsSourceDuringPictureInPicturePlayback;
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (nonatomic) BOOL allowsPictureInPictureFromInlineWhenEnteringBackground;
@property (nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;
@property (nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground;
@property (nonatomic) long long backgroundPlaybackPolicy;
@property (nonatomic) BOOL canPausePlaybackWhenExitingPictureInPicture;
@property (weak, nonatomic) id<AVPictureInPicturePrerollDelegate> prerollDelegate;
@property (retain, nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (weak, nonatomic) id<AVPictureInPictureControllerDelegate> delegate;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyFromInline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long controlsStyle;

+ (id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)a0;
+ (BOOL)isPictureInPictureSupported;
+ (id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)a0;
+ (id)_imageNamed:(id)a0 compatibileWithTraitCollection:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)stopPictureInPicture;
- (void)invalidate;
- (void)dealloc;
- (id)initWithSource:(id)a0;
- (void)startPictureInPicture;
- (id)activitySessionIdentifier;
- (void)setActivitySessionIdentifier:(id)a0;
- (id)initWithPlayerLayer:(id)a0;
- (id)sampleBufferDisplayLayer;
- (void)pictureInPicturePlatformAdapter:(id)a0 failedToStartError:(id)a1;
- (void)pictureInPicturePlatformAdapter:(id)a0 prepareToStopForRestoringUserInterface:(id /* block */)a1;
- (void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)a0;
- (void)pictureInPicturePlatformAdapter:(id)a0 stopPictureInPictureAndRestoreUserInterface:(BOOL)a1;
- (void)pictureInPicturePlatformAdapter:(id)a0 handlePlaybackCommand:(long long)a1;
- (void)pictureInPicturePlatformAdapter:(id)a0 statusDidChange:(long long)a1 fromStatus:(long long)a2;
- (void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
- (void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;
- (id)initWithContentSource:(id)a0;
- (void)_commonInitWithSource:(id)a0;
- (void)stopPictureInPictureEvenWhenInBackground;
- (void)contentSourceVideoRectInWindowChanged;
- (void)startObservingPlayerController:(id)a0;
- (void)stopObservingPlayerController:(id)a0;
- (void)reloadPrerollAttributes;
- (void)invalidatePlaybackState;
- (void)sampleBufferDisplayLayerRenderSizeDidChangeToSize:(struct CGSize { double x0; double x1; })a0;
- (void)sampleBufferDisplayLayerDidAppear;
- (void)sampleBufferDisplayLayerDidDisappear;
- (id)_sbdlPlayerController;
- (void)_invalidateContentSourceForVideoCallsIfNeeded:(id)a0;
- (void)_configureContentSourceForVideoCallsIfNeeded:(id)a0;
- (id)_delegateIfRespondsToSelector:(SEL)a0;
- (BOOL)_shouldPauseWhenExitingPictureInPicture;
- (void)_stopPictureInPictureAndRestoreUserInterface:(BOOL)a0;
- (void)_startObservationsForContentSource:(id)a0;
- (void)_startObservingPlayerLayerContentSource:(id)a0;
- (void)_updateBackgroundPlaybackPolicyFromPlayerController;
- (void)_startObservingSampleBufferDisplayLayerContentSource:(id)a0;
- (void)_updateEnqueuedBufferDimensions;

@end
