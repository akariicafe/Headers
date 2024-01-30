@class NSArray, UIViewController;

@interface SeymourUI.SessionViewController : UIViewController <AVPlayerViewControllerDelegatePrivate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ sessionContainer;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ instructionsView;
    void /* unknown type, empty encoding */ watchDiscoveryView;
    void /* unknown type, empty encoding */ continueOnWatchView;
    void /* unknown type, empty encoding */ ongoingWorkoutDetectedView;
    void /* unknown type, empty encoding */ bufferView;
    void /* unknown type, empty encoding */ introSequenceView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ castingView;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ displayPreferencesViewController;
    void /* unknown type, empty encoding */ summaryViewController;
    void /* unknown type, empty encoding */ activityTypeBehavior;
    void /* unknown type, empty encoding */ overlayConstraints;
}

@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)playerViewController:(id)a0 willTransitionToVisibilityOfPlaybackControls:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)menuButtonTapped;
- (void)onDisplayLink;

@end
