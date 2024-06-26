@class UIView, CKAppGrabberView, UILongPressGestureRecognizer, CKBrowserTransitionCoordinator, NSDate, NSMutableDictionary, IMBalloonPlugin, CKBrowserSwitcherCell, NSString, UIViewController, CKImmediatePanGestureRecognizer, UIViewPropertyAnimator;
@protocol CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol;

@interface CKBrowserSwitcherViewController : UIViewController <UIGestureRecognizerDelegate, CKBrowserTransitionCoordinatorDelegate, CKAppGrabberViewDelegate, _UIBackdropViewGraphicsQualityChangeDelegate> {
    CKImmediatePanGestureRecognizer *_expandGestureTracker;
    UIViewPropertyAnimator *_expandPropertyAnimator;
    BOOL _isDoingExpandInteraction;
    BOOL _expandInteractionDidMove;
    BOOL _expandGestureStartedOnGrabber;
    double _expandGestureTranslationOffset;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CKBrowserTransitionCoordinator *transitionCoordinator;
@property (retain, nonatomic) UIView *browserContainer;
@property (retain, nonatomic) CKBrowserSwitcherCell *cell;
@property (retain, nonatomic) NSMutableDictionary *livePluginIdentifierToTimestampMap;
@property (retain, nonatomic) UILongPressGestureRecognizer *touchTracker;
@property (retain, nonatomic) IMBalloonPlugin *currentVisiblePlugin;
@property (retain, nonatomic) CKAppGrabberView *grabberView;
@property (retain, nonatomic) UIView *shadowView;
@property (nonatomic) BOOL insertedViaCollapse;
@property (nonatomic, getter=isBrowserReadyForUserInteraction) BOOL browserViewReadyForUserInteraction;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic, getter=isInDragAndDrop) BOOL inDragAndDrop;
@property (nonatomic) BOOL interactiveExpandStarted;
@property (retain, nonatomic) IMBalloonPlugin *balloonPlugin;
@property (nonatomic, getter=isTransitioningFromSnapshotToLiveView) BOOL transitioningFromSnapshotToLiveView;
@property (nonatomic, getter=isTransitioningExpandedState) BOOL transitioningExpandedState;
@property (nonatomic) BOOL allowFooterLabelUpdates;
@property (nonatomic) BOOL allowPluginLaunchNotifications;
@property (copy, nonatomic) id /* block */ performAfterFirstLayoutBlock;
@property (nonatomic) BOOL viewHasLaidOutSubviews;
@property (retain, nonatomic) NSDate *timeOfLastScrollingDecelerationEnded;
@property (nonatomic) BOOL browserIsLoadingCompact;
@property (nonatomic) BOOL browserIsCollapsingFromFullscreen;
@property (weak, nonatomic) id<CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate> delegate;
@property (readonly, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)traitCollection;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutMarginsDidChange;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (double)_rubberBandOffsetWithoutDecorationForOffset:(double)a0 maxOffset:(double)a1 minOffset:(double)a2 range:(double)a3 outside:(BOOL *)a4;
- (void)backdropView:(id)a0 didChangeToGraphicsQuality:(long long)a1;
- (id)backdropView:(id)a0 willChangeToGraphicsQuality:(long long)a1;
- (void)animateInCompactWithCompletion:(id /* block */)a0;
- (id)appIconOverride;
- (void)browserTransitionCoordinator:(id)a0 expandedStateDidChange:(BOOL)a1 withReason:(long long)a2;
- (void)reverseAndCleanupExpandAnimator;
- (struct CGSize { double x0; double x1; })_browserSize;
- (BOOL)_currentPluginIsJellyfish;
- (void)_handleRemoteViewControllerConnectionInterrupted:(id)a0;
- (void)_handleVisibleSwitcherPluginsChanged:(id)a0;
- (BOOL)_hasLandscapeGutters;
- (void)_insertCurrentBrowserAndRemoveOldBrowsersIfNeeded;
- (void)_loadBrowserForBalloonPlugin:(id)a0 datasource:(id)a1;
- (void)_performAfterFirstLayout:(id /* block */)a0;
- (BOOL)_pluginHasLiveBrowserViewInSwitcher:(id)a0;
- (void)_removeBrowserFromViewHierarchy:(id)a0;
- (void)_removeBrowserWithPluginIdentifierFromViewHierarchy:(id)a0;
- (BOOL)_shouldLimitExpandGestureToGrabber;
- (void)_snapshotCurrentViewController;
- (BOOL)_switchToVisiblePluginWithIdentifier:(id)a0;
- (void)_transitionSnapshotViewToBrowserView;
- (void)_transitionSnapshotViewToBrowserViewAfterViewDidPrepareForDisplay:(id)a0;
- (void)_updateActiveBrowserAlphaStateOnInsertForCurrentController:(id)a0 currentView:(id)a1;
- (void)_updateActiveBrowserTimestampForCurrentBalloonPlugin;
- (void)_updateBrowserViewPositionForPluginAndInsertIfNecessary:(id)a0;
- (void)_updateCurrentBrowserSnapshotIfPossible;
- (void)_updateVisibleBrowserView;
- (id)activeBrowserView;
- (void)animateOutCompactWithCompletion:(id /* block */)a0;
- (id)appGrabberForBrowserTransitionCoordinator:(id)a0;
- (void)appGrabberViewCloseButtonTapped:(id)a0;
- (id)appTitleOverride;
- (void)browserTransitionCoordinator:(id)a0 browserWillBecomeInactive:(id)a1;
- (void)browserTransitionCoordinator:(id)a0 didSwitchToPlugin:(id)a1;
- (void)browserTransitionCoordinator:(id)a0 didTransitionFromOrientation:(long long)a1 toOrientation:(long long)a2;
- (void)browserTransitionCoordinator:(id)a0 hasUpdatedLastTouchDate:(id)a1;
- (struct CGSize { double x0; double x1; })browserTransitionCoordinator:(id)a0 preferredSizeForBrowser:(id)a1;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)a0;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)a0 withReason:(long long)a1;
- (BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)a0;
- (void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)a0;
- (void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)a0;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)a0 withReason:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(id)a0;
- (void)cleanupExpandAnimatorState;
- (void)dismissBrowserFullscreenAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)dragManagerDidEndDragging:(id)a0;
- (void)dragManagerDidStartDrag:(id)a0;
- (void)dragManagerWillStartDrag:(id)a0;
- (void)expandGestureTouchMoved:(id)a0;
- (void)handleExpandButton:(id)a0;
- (id)initWithConversation:(id)a0 sendDelegate:(id)a1 presentingViewController:(id)a2;
- (BOOL)isBrowserSwitcherFirstLaunch;
- (void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(id)a0;
- (double)restingContainerViewOriginY;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })restingGrabberFrame;
- (void)saveSnapshotForCurrentBrowserViewControllerIfPossible;
- (void)setCurrentViewController:(id)a0;
- (void)setupPausedExpandAnimatorIfNeeded;
- (BOOL)shouldAlwaysShowAppTitle;
- (void)showBrowserFullscreenForPlugin:(id)a0 datasource:(id)a1;
- (void)showBrowserFullscreenModalForPlugin:(id)a0 datasource:(id)a1;
- (void)showBrowserInSwitcherForPlugin:(id)a0 datasource:(id)a1 reloadData:(BOOL)a2;
- (void)showPlugin:(id)a0;
- (void)stopExpandAnimatorAndCleanupState;
- (void)transitionToCollapsed;
- (void)transitionToFullscreen;
- (id)transitionsPresentationViewController;
- (void)unloadRemoteViewControllers;
- (void)updateGrabberTitleAndIconForPlugin:(id)a0;

@end
