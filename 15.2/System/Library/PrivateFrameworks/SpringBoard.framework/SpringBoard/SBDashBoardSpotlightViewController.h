@class UIViewController, NSString, _SBDashBoardSpotlightViewController, FBDisplayLayoutTransition, SBSearchBackdropView, _UILegibilitySettings;
@protocol SBDashBoardSpotlightViewControllerDelegate, SBUISpotlightInitiating, SPUIRemoteSearchViewDelegate;

@interface SBDashBoardSpotlightViewController : SBHomeGestureDismissableCoverSheetViewController <_SBDashBoardSpotlightViewControllerDelegate, SBViewControllerTransitionContextDelegate> {
    SBSearchBackdropView *_backdropView;
}

@property (retain, nonatomic) _SBDashBoardSpotlightViewController *spotlightViewController;
@property (retain, nonatomic) FBDisplayLayoutTransition *displayLayoutTransition;
@property (retain, nonatomic) _UILegibilitySettings *spotlightLegibilitySettings;
@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> spotlightDelegate;
@property (retain, nonatomic) UIViewController<SBUISpotlightInitiating> *initiatingViewController;
@property (weak, nonatomic) id<SBDashBoardSpotlightViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isTransitioning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)presentationStyle;
- (void)viewWillLayoutSubviews;
- (void)transitionDidFinish:(id)a0;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)displayLayoutElementIdentifier;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (long long)presentationTransition;
- (void)aggregateBehavior:(id)a0;
- (void)transitionWillBegin:(id)a0;
- (void)transitionDidReverse:(id)a0;
- (void)transitionWillFinish:(id)a0;
- (long long)homeGestureParticipantIdentifier;
- (long long)zStackParticipantIdentifier;
- (BOOL)shouldDismissForHomeGestureRecognizer:(id)a0;
- (BOOL)presentationCancelsTouches;
- (unsigned long long)spotlightMultiplexingLevelForSpotlightViewController:(id)a0;
- (unsigned long long)remoteSearchViewPresentationSourceForSpotlightViewController:(id)a0;
- (id)transitionContextToShowSpotlight:(BOOL)a0 animated:(BOOL)a1 interactive:(BOOL)a2;
- (BOOL)_transitioningIntoSpotlight:(id)a0;
- (BOOL)_initiallyTransitioningToSpotlight:(id)a0;
- (BOOL)_shouldCancelInteractiveDismissGesture:(id)a0;

@end
