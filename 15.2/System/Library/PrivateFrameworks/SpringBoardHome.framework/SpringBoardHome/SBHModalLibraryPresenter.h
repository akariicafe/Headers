@class UIPanGestureRecognizer, SBHSearchBar, SBHLibraryIconViewController, SBIconView, SBHViewControllerTransition, NSMutableArray, UIViewController, UIView, UIScrollView, NSString, SBHAppLibrarySettings, MTMaterialView, SBHLibraryViewController, NSTimer, NSCountedSet, SBIconListView;
@protocol SBHModalLibraryPresentationDelegate, SBHModalLibraryPresenterContextProviding, BSInvalidatable;

@interface SBHModalLibraryPresenter : NSObject <SBHModalLibraryPresentationContext, SBHViewControllerTransitionDelegate, UIGestureRecognizerDelegate, BSDescriptionProviding> {
    NSMutableArray *_didPresentCompletions;
    NSMutableArray *_didDismissCompletions;
    NSCountedSet *_reasonsToSnapshotBackgroundView;
    id<BSInvalidatable> _librarySearchPrewarmAssertion;
    SBHAppLibrarySettings *_librarySettings;
    NSTimer *_criticalDismissalNotifyTimer;
}

@property (readonly, nonatomic) UIViewController *containerViewController;
@property (readonly, nonatomic) SBHLibraryViewController *libraryViewController;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (readonly, nonatomic) SBHViewControllerTransition *transition;
@property (nonatomic) unsigned long long preferredTransitionStyle;
@property (readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (nonatomic) BOOL shouldUseTranslatingAnimationBehavior;
@property (weak, nonatomic) id<SBHModalLibraryPresenterContextProviding> contextProvider;
@property (weak, nonatomic) id<SBHModalLibraryPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) UIViewController *overrideContainerViewController;
@property (readonly, nonatomic, getter=isLibraryContainedInForeground) BOOL libraryContainedInForeground;
@property (readonly, nonatomic, getter=isPresentingLibrary) BOOL presentingLibrary;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *libraryView;
@property (readonly, nonatomic) SBHSearchBar *searchBar;
@property (readonly, nonatomic) UIScrollView *podScrollView;
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (readonly, nonatomic) UIView *sourceContainerView;
@property (readonly, nonatomic) SBIconView *libraryPodIconView;
@property (readonly, nonatomic) SBHLibraryIconViewController *libraryIconViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)acquireUseSnapshotAsBackgroundViewAssertionForReason:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithContainerViewController:(id)a0 libraryViewController:(id)a1;
- (void)presentLibraryWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissLibraryWithTransition:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dismissLibraryWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)toggleLibraryPresentedInForegroundWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)transitionWillProgressToEndState:(id)a0;
- (void)prepareTransition:(id)a0;
- (void)transitionWillReturnToBeginningState:(id)a0;
- (void)transitionDidProgressToEndState:(id)a0;
- (void)transitionDidReturnToBeginningState:(id)a0;
- (id)animatorForTransition:(id)a0;
- (id)acquireOrderPresentationSourceContainerViewBeforeLibraryViewAssertionForReason:(id)a0;
- (void)noteWillAnimateToEndpoint:(long long)a0 withAnimationDuration:(double)a1;
- (void)_handlePanGestureRecognizerUpdated:(id)a0;
- (void)_fireDismissCompletionsWithResult:(BOOL)a0;
- (void)dismissLibraryWithTransition:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_firePresentCompletionWithResult:(BOOL)a0;
- (void)_updateBackgroundViewSnapshotted;
- (void)_updateLibraryTranslation:(double)a0 withVelocity:(double)a1 animated:(BOOL)a2;
- (BOOL)_isPanGestureQuantityTowardDismissalDirection:(double)a0;
- (BOOL)_dismissLibraryIfNecessaryForTranslation:(double)a0 velocity:(double)a1;

@end
