@class UIView, NSString, AVZoomingBehavior, AVHomeIPCameraPlayerController, AVPlayerViewController, AVPlayerController, AVHomeIPCameraBehavior, AVObservationController;

@interface AVHomeIPCameraBehaviorContext : NSObject <AVPlayerViewControllerBehaviorContext, AVBehaviorContextInternal, AVBehaviorContext, AVScrubbing>

@property (weak, nonatomic) AVHomeIPCameraBehavior *behavior;
@property (retain, nonatomic) AVZoomingBehavior *zoomingBehavior;
@property (weak, nonatomic) AVHomeIPCameraPlayerController *livePreviewPlayerController;
@property (retain, nonatomic) AVPlayerController *playerControllerToRestore;
@property (retain, nonatomic) AVObservationController *observationController;
@property (nonatomic) BOOL playbackControlsShowsLoadingIndicator;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls;
@property (nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;
@property (readonly, nonatomic) UIView *livePreviewContainerView;
@property (nonatomic, getter=isLivePreviewActive) BOOL livePreviewActive;
@property (nonatomic) BOOL hasMicrophone;
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyWhenEnteringBackground;
@property (nonatomic) BOOL playbackControlsIncludePictureInPictureButton;
@property (nonatomic) struct CGSize { double width; double height; } livePreviewAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)scrubToTime:(double)a0 resolution:(double)a1;
- (void)setBackgroundColor:(id)a0 forContainerOfControlItem:(id)a1;
- (void)_updatePlaybackControlsControllerAndZoomingBehavior;
- (void)_updatePictureInPictureController;
- (void)viewDidLoad;
- (void)willStartPictureInPictureWithViewController:(id)a0;
- (void)didStopPictureInPicture;
- (id)initWithAVKitOwner:(id)a0;
- (void)willAddBehavior:(id)a0;
- (void)didAddBehavior:(id)a0;
- (void)willRemoveBehavior:(id)a0;
- (void)didRemoveBehavior:(id)a0;

@end
