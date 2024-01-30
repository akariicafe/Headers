@class SBSceneManager, NSString, SBHModalLibraryPresenter, SBHLibraryViewController, UIApplicationSceneDeactivationAssertion, SBFloatingDockController, SBFloatingDockBehaviorAssertion, SBHIconManager, SBMedusaHostedKeyboardWindowLevelAssertion;
@protocol BSInvalidatable;

@interface SBModalLibraryController : NSObject <SBLayoutStateTransitionObserver, SBHLibraryViewControllerObserver, SBHModalLibraryPresentationDelegate, SBHModalLibraryPresentationObserver, SBIdleTimerProviding>

@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (readonly, weak, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly, weak, nonatomic) SBSceneManager *sceneManager;
@property (readonly, nonatomic) SBHModalLibraryPresenter *libraryPresenter;
@property (readonly, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion;
@property (retain, nonatomic) SBMedusaHostedKeyboardWindowLevelAssertion *keyboardWindowLevelAssertion;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *floatingDockBehaviorAssertion;
@property (retain, nonatomic) id<BSInvalidatable> libraryDisplayLayoutElementAssertion;
@property (retain, nonatomic) id<BSInvalidatable> libraryWindowKeyboardFocusAssertion;
@property (nonatomic, getter=isPresentingOrTransitioningSearch) BOOL presentingOrTransitioningSearch;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly, nonatomic) SBHLibraryViewController *libraryViewController;
@property (readonly, nonatomic, getter=isPresentingLibraryInForeground) BOOL presentingLibraryInForeground;
@property (readonly, nonatomic, getter=isPresentingLibrary) BOOL presentingLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)libraryViewController:(id)a0 willPresentSearchController:(id)a1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)libraryViewController:(id)a0 didDismissSearchController:(id)a1;
- (void)dealloc;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)dismissLibraryAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)modalLibraryPresenter:(id)a0 didDismissLibrary:(id)a1;
- (void)modalLibraryPresenter:(id)a0 didPassCriticalDismissalPoint:(id)a1;
- (void)modalLibraryPresenter:(id)a0 didPresentLibrary:(id)a1;
- (void)modalLibraryPresenter:(id)a0 willDismissLibrary:(id)a1;
- (void)modalLibraryPresenter:(id)a0 willPresentLibrary:(id)a1;
- (BOOL)modalLibraryPresenterShouldAllowSwipeToDismissGesture:(id)a0;
- (void)presentLibraryAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)toggleLibraryPresentedAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_configureFloatingDockBehaviorAssertionForPresented:(BOOL)a0;
- (void)_didCompleteTransitionWithLibraryToPresented:(BOOL)a0;
- (void)_evaluateKeyboardWindowLevelAssertion;
- (void)_evaluateResignActiveAssertion;
- (void)_evaluateWindowStatus;
- (void)_prepareLibraryViewControllerForDismissal:(id)a0;
- (void)_setLibraryDisplayLayoutElementActive:(BOOL)a0;
- (void)_willPerformTransitionWithLibraryToPresented:(BOOL)a0;
- (id)initWithIconManager:(id)a0 libraryViewController:(id)a1 floatingDockController:(id)a2 sceneManager:(id)a3;
- (void)presentLibraryCategoryPodForCategoryIdentifier:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
