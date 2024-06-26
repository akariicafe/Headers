@class SVKeyValueObserver, UIViewController, SVVideoVolumeObserver, SVAutomaticFullscreenVideoPlaybackBehaviorManager, SVVideoPlaybackQueue, SVVideoAdSkipButton, UIGestureRecognizer, NSString, UIActivityIndicatorView, SVLearnMoreButton, SVAdPrivacyButton, AVPlayerViewController, SVPlaybackCoordinator;
@protocol SVVideoPlayerViewControllerDataSource, SVVideoPlayerViewControllerDelegate, SVVolumeReporting, SVVideoAdProviding;

@interface SVVideoPlayerViewController : UIViewController <SVVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SVVideoAdViewControllerProviding>

@property (retain, nonatomic) SVVideoPlaybackQueue *queue;
@property (retain, nonatomic) SVPlaybackCoordinator *coordinator;
@property (retain, nonatomic) id<SVVideoAdProviding> videoAd;
@property (nonatomic) BOOL playButtonTapped;
@property (retain, nonatomic) SVLearnMoreButton *learnMoreButton;
@property (retain, nonatomic) SVVideoAdSkipButton *skipButton;
@property (retain, nonatomic) SVAdPrivacyButton *adPrivacyButton;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) SVKeyValueObserver *videoBoundsObserver;
@property (readonly, nonatomic) SVAutomaticFullscreenVideoPlaybackBehaviorManager *fullscreenBehaviorManager;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, nonatomic) id<SVVolumeReporting> volumeReporter;
@property (retain, nonatomic) SVVideoVolumeObserver *volumeObserver;
@property (readonly, nonatomic) UIGestureRecognizer *tapGesture;
@property (nonatomic) BOOL showsPlaybackControls;
@property (weak, nonatomic) id<SVVideoPlayerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SVVideoPlayerViewControllerDataSource> dataSource;
@property (nonatomic) BOOL enablePictureInPictureBehaviors;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) unsigned long long fullscreenBehavior;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *viewControllerForModalPresentation;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)tapped;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)advance;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stopPictureInPicture;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)playerViewController:(id)a0 shouldExitFullScreenWithReason:(long long)a1;
- (void)playerViewController:(id)a0 willTransitionToVisibilityOfPlaybackControls:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)playerViewController:(id)a0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)playerViewControllerWillStartPictureInPicture:(id)a0;
- (void)playerViewControllerDidStartPictureInPicture:(id)a0;
- (void)playerViewControllerWillStopPictureInPicture:(id)a0;
- (void)playerViewControllerDidStopPictureInPicture:(id)a0;
- (void)playerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)finished;
- (void)playerViewController:(id)a0 metricsCollectionEventOccured:(long long)a1;
- (void)playWithButtonTapped:(BOOL)a0;
- (void)removeVideoPlayerIfNeeded;
- (void)embedVideoPlayerIfNeeded;
- (void)startPictureInPictureIfPossible;
- (id)initWithVolumeReporter:(id)a0;
- (void)addDebuggerAction:(id /* block */)a0;
- (void)learnMoreButtonTapped:(id)a0;
- (void)enterFullscreenWithCompletionBlock:(id /* block */)a0;
- (void)playbackCoordinatorStartedPlayback:(id)a0;
- (void)playbackCoordinatorResumedPlayback:(id)a0;
- (void)playbackCoordinatorPausedPlayback:(id)a0;
- (void)playbackCoordinatorFinishedPlayback:(id)a0;
- (void)playbackCoordinator:(id)a0 playbackFailedWithError:(id)a1;
- (void)playbackCoordinator:(id)a0 timeElapsed:(double)a1 duration:(double)a2;
- (void)playbackCoordinatorStateChanged:(id)a0;
- (void)fullscreenBehaviorManagerRequiresFullscreenPlayback:(id)a0;
- (void)adSkipButtonTapped:(id)a0;
- (void)setupQueueIfNeeded;
- (void)startPlaybackForCoordinatorIfAllowed:(id)a0;
- (void)refreshControlsForPlaybackCoordinator:(id)a0;
- (void)updateSkipButtonWithThreshold:(unsigned long long)a0 time:(double)a1;
- (BOOL)playbackAllowedForPlaybackCoordinator:(id)a0;
- (void)transitionToCoordinator:(id)a0;
- (void)exitFullscreenWithCompletionBlock:(id /* block */)a0;

@end
