@class PGPictureInPictureViewController, NSString, SBPIPDefaultPositionHyperregionComposer, SBPIPStashTabSuppressionPolicyProvider, SBPIPContainerViewController, UIButton;
@protocol SBPIPContainerViewControllerAdapterContextProviding;

@interface SBPIPPegasusContainerAdapter : NSObject <PGPictureInPictureViewControllerContentContainer, SBPIPStashTabSuppressionPolicyProviderObserver, SBPIPContainerViewControllerAdapter, SBPIPInteractionControllerDataSource> {
    SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> *_containerViewController;
    UIButton *_menuButton;
    BOOL _isAnyInteractionGestureActive;
    struct CGSize { double width; double height; } _minimumStashTabSize;
    BOOL _invalidated;
    BOOL _isChangingSize;
    SBPIPStashTabSuppressionPolicyProvider *_stashTabVisibilityPolicyProvider;
    SBPIPDefaultPositionHyperregionComposer *_pipPositionHyperregionComposer;
}

@property (readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewControllerStartReducingResourcesUsage:(id)a0;
- (id)layoutSettings;
- (id)debugName;
- (void)setContainerViewController:(id)a0;
- (void)containerViewControllerStopReducingResourcesUsage:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)a0 initialLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)performRotateAnimationWithRotation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)acquireInterfaceOrientationLock;
- (void)relinquishInterfaceOrientationLock;
- (BOOL)handleTapWhileStashedGesture;
- (BOOL)handleDoubleTapGesture;
- (void)notePictureInPictureViewControllerTetheringDidUpdate;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
- (void)performStartInIsolationWithCompletionHandler:(id /* block */)a0;
- (void)performStartAnimationWithCompletionHandler:(id /* block */)a0;
- (void)_performStopAnimationWithFinalInterfaceOrientation:(long long)a0 finalLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)performStopInIsolationWithCompletionHandler:(id /* block */)a0;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)a0 finalLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)updateMenuItems;
- (void)notePictureInPictureViewControllerPrefersHiddenFromClonedDisplayDidChange;
- (void)_reloadMenuButton;
- (id)contentViewControllerForContainerViewController:(id)a0;
- (id)initWithPictureInPictureViewController:(id)a0;
- (BOOL)interactionControllerUseSystemGesturesForResizing:(id)a0;
- (id)defaultPositionHyperregionComposers;
- (BOOL)interactionControllerScalesDuringPanGesture:(id)a0;
- (void)interactionController:(id)a0 updateScaleInteractor:(id)a1 pipSize:(struct CGSize { double x0; double x1; })a2 forPanGesture:(id)a3;
- (void)loadSubviewsForContainerViewController:(id)a0;
- (void)layoutSubviewsForContainerViewController:(id)a0;
- (void)containerViewControllerWillBeginSizeChange:(id)a0 behavior:(int)a1;
- (void)containerViewControllerDidEndSizeChange:(id)a0;
- (void)containerViewController:(id)a0 didUpdateStashProgress:(double)a1;
- (void)containerViewController:(id)a0 willBeginInteractionWithGestureRecognizer:(id)a1;
- (void)containerViewControllerDidEndInteraction:(id)a0;
- (BOOL)isStashTabHiddenForContainerViewController:(id)a0;
- (void)containerViewController:(id)a0 wantsStashTabHidden:(BOOL)a1 left:(BOOL)a2 springSettings:(id)a3 completion:(id /* block */)a4;
- (BOOL)shouldDisableIdleTimerForContainerViewController:(id)a0;
- (void)transitionAnimationWillBeginForContainerViewController:(id)a0;
- (void)transitionAnimationDidEndForContainerViewController:(id)a0;
- (id)morphAnimatorTargetViewForContainerViewController:(id)a0;
- (id)morphAnimatorTargetContainerViewForContainerViewController:(id)a0;
- (void)containerViewController:(id)a0 didUpdateContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 reason:(id)a2;
- (void)containerViewController:(id)a0 didUpdateStashState:(BOOL)a1 springSettings:(id)a2;
- (int)processIdentifierForContainerViewController:(id)a0;
- (id)bundleIdentifierForContainerViewController:(id)a0;
- (id)scenePersistenceIdentifierForContainerViewController:(id)a0;
- (void)stashTabVisibilityPolicyProviderDidUpdatePolicy:(id)a0;
- (void)_layoutMenuButton;
- (void)_createOrInvalidateStashTabVisibilityPolicyProvider;

@end
