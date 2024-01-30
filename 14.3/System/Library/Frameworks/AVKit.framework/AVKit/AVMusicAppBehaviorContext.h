@class AVMusicAppBehavior, NSNumber, AVPlayerViewController, NSString, AVObservationController, AVPlayerController;

@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVMetricsCollectionBehaviorContext, AVBehaviorContext>

@property (weak, nonatomic) AVMusicAppBehavior *behavior;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (retain, nonatomic) NSNumber *seekTargetTime;
@property (nonatomic) BOOL showsSkipItemButtons;
@property (nonatomic, getter=isSkipToPreviousItemButtonEnabled) BOOL skipToPreviousItemButtonEnabled;
@property (nonatomic, getter=isSkipToNextItemButtonEnabled) BOOL skipToNextItemButtonEnabled;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)playerViewController:(id)a0 didCollectMetricsEvent:(long long)a1;
- (id)initWithAVKitOwner:(id)a0;
- (void)willAddBehavior:(id)a0;
- (void)didAddBehavior:(id)a0;
- (void)willRemoveBehavior:(id)a0;
- (void)didRemoveBehavior:(id)a0;
- (void)_updateSkipItemButtonsEnabled;
- (void)_updatePlaybackControlsInclusion;

@end
