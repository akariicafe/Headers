@class SBBestAppSuggestion, NSString, SBApplicationSceneView, BSAnimationSettings;
@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBSwitcherContentViewControlling> {
    SBApplicationSceneView *_temporaryAppView;
    SBApplicationSceneView *_temporarySideAppView;
}

@property (weak, nonatomic) id<SBSwitcherContentViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SBSwitcherContentViewControllerDataSource> dataSource;
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic, getter=isShowingModifierTimeline) BOOL showModifierTimeline;
@property (nonatomic) long long contentOrientation;
@property (nonatomic, getter=isLiveContentRasterizationDisabled) BOOL liveContentRasterizationDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canInterruptActiveTransition;
@property (readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;

- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonDoublePress;
- (void)relinquishTransientOverlayViewController:(id)a0;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (void)handleGestureDidUpdate:(id)a0;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleLockButtonPress;
- (BOOL)isStatusBarHiddenForAppLayout:(id)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)handleGestureDidEnd:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)animationControllerForTransitionRequest:(id)a0;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (void).cxx_destruct;
- (BOOL)isWindowVisible;
- (double)minimumHomeScreenScale;
- (BOOL)shouldAnimateInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1;
- (void)performAnimatedInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1 completion:(id /* block */)a2;
- (double)switcherCardScale;
- (BOOL)isUserInteractionEnabled;
- (void)noteModelDidMutateForInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1 willAnimate:(BOOL)a2;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)a0;
- (id)iconForAppLayout:(id)a0;
- (void)prepareAnimatedInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1;
- (BOOL)shouldAddAppLayoutToFront:(id)a0 forTransitionWithContext:(id)a1 transitionCompleted:(BOOL)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)snapshotScaleForSceneHandle:(id)a0;
- (void)noteAppLayoutsDidChange;
- (void)handleGestureDidBegin:(id)a0;
- (void)performTransitionWithContext:(id)a0 animated:(BOOL)a1 alongsideAnimationHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)shouldAnimateRemovalOfAppLayout:(id)a0 forReason:(long long)a1;
- (void)noteModelDidMutateForRemovalOfAppLayout:(id)a0 forReason:(long long)a1 animated:(BOOL)a2;
- (BOOL)shouldRubberbandFullScreenHomeGrabberView;
- (void)failMultitaskingGesturesForReason:(id)a0;
- (void)prepareAnimatedRemovalOfAppLayout:(id)a0 forReason:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)acquiredViewController:(id)a0 forTransientOverlayAppLayout:(id)a1;
- (void)performAnimatedRemovalOfAppLayout:(id)a0 forReason:(long long)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (id)_appLayouts;

@end
