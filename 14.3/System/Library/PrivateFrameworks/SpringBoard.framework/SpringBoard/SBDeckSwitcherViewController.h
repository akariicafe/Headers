@class NSString, SBSwitcherAppSuggestionViewController;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>

@property (retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (long long)orientationForSuggestionViewController:(id)a0;
- (id)initWithRootModifier:(id)a0 liveContentOverlayCoordinator:(id)a1 debugName:(id)a2;
- (void)suggestionViewController:(id)a0 activatedSuggestion:(id)a1;
- (void)handleGestureDidBegin:(id)a0;
- (void)performTransitionWithContext:(id)a0 animated:(BOOL)a1 alongsideAnimationHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)setBestAppSuggestion:(id)a0;
- (id)bestAppSuggestion;
- (void)_setBestAppSuggestion:(id)a0 animationCompletion:(id /* block */)a1;
- (void)viewWillLayoutSubviews;

@end
