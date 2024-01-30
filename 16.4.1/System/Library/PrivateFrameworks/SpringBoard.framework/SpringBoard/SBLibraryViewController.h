@class SBAsynchronousRenderingAssertion, SBWindowSceneStatusBarSettingsAssertion, SBBarSwipeAffordanceViewController, SBSceneManager, ATXAppDirectoryClient, NSString;
@protocol BSInvalidatable;

@interface SBLibraryViewController : SBHLibraryViewController <SBHLibraryViewControllerObserver, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBLayoutStateTransitionObserver>

@property (retain, nonatomic) SBBarSwipeAffordanceViewController *barSwipeViewController;
@property (retain, nonatomic) SBWindowSceneStatusBarSettingsAssertion *statusBarSettingsAssertion;
@property (retain, nonatomic) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion;
@property (retain, nonatomic) id<BSInvalidatable> expandedPodDisplayLayoutElementAssertion;
@property (retain, nonatomic) id<BSInvalidatable> useSnapshotAsBackgroundViewAssertion;
@property (nonatomic, getter=isRotating) BOOL rotating;
@property (readonly, weak, nonatomic) SBSceneManager *sceneManager;
@property (readonly, nonatomic) ATXAppDirectoryClient *loggingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)_handleKeyUIEvent:(id)a0;
- (void)libraryViewController:(id)a0 willPresentFolderController:(id)a1;
- (void)libraryViewController:(id)a0 didDismissSearchController:(id)a1;
- (void)dealloc;
- (void)_setStatusBarSettingsAssertionActive:(BOOL)a0;
- (void)overlayController:(id)a0 didChangePresentationProgress:(double)a1 newPresentationProgress:(double)a2 fromLeading:(BOOL)a3;
- (void)libraryViewController:(id)a0 willDismissSearchController:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)libraryViewControllerDidDismiss:(id)a0;
- (void)libraryViewController:(id)a0 willDismissFolderController:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)setPresenter:(id)a0;
- (unsigned long long)barSwipeAffordanceView:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)libraryViewControllerWillPresent:(id)a0;
- (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)libraryViewController:(id)a0 didPresentSearchController:(id)a1;
- (void)libraryViewControllerDidPresent:(id)a0;
- (void)libraryViewControllerWillDismiss:(id)a0;
- (void)_acquireUseSnapshotAsBackgroundViewAssertionIfNecessary;
- (BOOL)_canHandleKeyEvents;
- (BOOL)_canHandleKeyUIEvent:(id)a0;
- (void)_didActivateTypeAheadSearchWithPhysicalKeyboardEvent:(id)a0;
- (void)_evaluateAffordanceActivation;
- (void)_evaluateAsyncRenderingAssertion;
- (void)_setExpandedPodDisplayLayoutElementActive:(BOOL)a0;
- (void)_setStatusBarSettingsAssertionActive:(BOOL)a0 quickly:(BOOL)a1;
- (id)initWithCategoryMapProvider:(id)a0 windowScene:(id)a1;

@end
