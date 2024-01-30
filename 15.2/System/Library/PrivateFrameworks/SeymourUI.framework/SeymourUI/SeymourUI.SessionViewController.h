@class NSArray, UIViewController;

@interface SeymourUI.SessionViewController : UIViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ pictureInPictureSurrogate;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ sessionContainer;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ instructionsView;
    void /* unknown type, empty encoding */ watchDiscoveryView;
    void /* unknown type, empty encoding */ continueOnWatchView;
    void /* unknown type, empty encoding */ ongoingWorkoutDetectedView;
    void /* unknown type, empty encoding */ bufferView;
    void /* unknown type, empty encoding */ introSequenceView;
    void /* unknown type, empty encoding */ introSequenceCompleted;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ castingView;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ displayPreferencesViewController;
    void /* unknown type, empty encoding */ summaryViewController;
    void /* unknown type, empty encoding */ activityTypeBehavior;
    void /* unknown type, empty encoding */ menuGestureRecognizer;
    void /* unknown type, empty encoding */ overlayConstraints;
}

@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)playerViewController:(id)a0 willTransitionToVisibilityOfPlaybackControls:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)playerViewControllerWillStartPictureInPicture:(id)a0;
- (void)playerViewController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)playerViewControllerWillStopPictureInPicture:(id)a0;
- (void)playerViewControllerDidStopPictureInPicture:(id)a0;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)menuButtonTapped;
- (void)onDisplayLink;

@end
