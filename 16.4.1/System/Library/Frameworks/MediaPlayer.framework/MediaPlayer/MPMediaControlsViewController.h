@class MPMediaControlsConfiguration, NSString, MPMediaControls;
@protocol MPMediaControlsViewControllerDelegate;

@interface MPMediaControlsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) MPMediaControls *mediaControls;
@property (readonly, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) id /* block */ didDismissHandler;
@property (weak, nonatomic) id<MPMediaControlsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (id)animationControllerForDismissedController:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)animateTransition:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_present;
- (void)startPrewarming;
- (void)_createMediaControlsIfNeeded;
- (void)prepareRemoteViewController;
- (void)setOverrideRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)stopPrewarming;

@end
