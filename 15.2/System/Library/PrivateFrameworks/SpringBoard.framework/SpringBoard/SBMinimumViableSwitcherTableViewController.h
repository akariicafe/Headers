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
@property (nonatomic, getter=isAsyncRenderingDisabled) BOOL asyncRenderingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canInterruptActiveTransition;
@property (readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;

- (double)switcherCardScale;
- (id)trailingStatusBarStyleRequest;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)prepareAnimatedInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1;
- (BOOL)handleHomeButtonDoublePress;
- (void)removeLayoutRole:(long long)a0 inSpace:(id)a1 mutationBlock:(id /* block */)a2 reason:(long long)a3;
- (void)noteModelDidMutateForInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1 willAnimate:(BOOL)a2;
- (void)acquiredViewController:(id)a0 forTransientOverlayAppLayout:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)isWindowVisible;
- (void)viewDidLoad;
- (BOOL)shouldAddAppLayoutToFront:(id)a0 forTransitionWithContext:(id)a1 transitionCompleted:(BOOL)a2;
- (BOOL)isUserInteractionEnabled;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)performKeyboardShortcutAction:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)handleGestureDidUpdate:(id)a0;
- (id)animationControllerForTransitionRequest:(id)a0;
- (void)clickReceivedForHomeGrabberView:(id)a0;
- (void)handleGestureDidEnd:(id)a0;
- (BOOL)handleLockButtonPress;
- (BOOL)shouldRubberbandFullScreenHomeGrabberView;
- (BOOL)handleHomeButtonPress;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (unsigned long long)switcherSupportedInterfaceOrientations;
- (BOOL)shouldAnimateInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1;
- (double)minimumHomeScreenScale;
- (id)iconForAppLayout:(id)a0;
- (long long)switcherPreferredInterfaceOrientation;
- (unsigned long long)_debugSwitcherPostModernRotationSupportedSupportedInterfaceOrientations;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)noteAppLayoutsDidChange;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)a0;
- (BOOL)handleVoiceCommandButtonPress;
- (double)snapshotScaleForSceneHandle:(id)a0;
- (void)tapReceivedForGrabberTongueAtEdge:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationSceneSettingsFrameForInterfaceOrientation:(long long)a0 centerConfiguration:(long long)a1;
- (BOOL)handleHomeButtonLongPress;
- (id)leadingStatusBarStyleRequest;
- (void)handleGestureDidBegin:(id)a0;
- (BOOL)canPerformKeyboardShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (void)relinquishTransientOverlayViewController:(id)a0;
- (BOOL)handleVolumeDownButtonPress;
- (void)performTransitionWithContext:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)performAnimatedInsertionOfAppLayouts:(id)a0 atIndexes:(id)a1 completion:(id /* block */)a2;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)isStatusBarHiddenForAppLayout:(id)a0;
- (void).cxx_destruct;
- (void)failMultitaskingGesturesForReason:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_appLayouts;
- (id)_statusBarStyleRequestForDefaultStyle;

@end
