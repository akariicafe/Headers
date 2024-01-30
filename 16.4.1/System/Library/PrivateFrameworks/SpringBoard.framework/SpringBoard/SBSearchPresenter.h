@class SBFFluidBehaviorSettings, NSString, NSArray, NSHashTable, UIScrollView, SBHHomePullToSearchSettings;
@protocol SBSearchPresenterDelegate;

@interface SBSearchPresenter : NSObject <PTSettingsKeyObserver, SBHSearchPresenting>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) UIScrollView *trackingScrollView;
@property (retain, nonatomic) SBHHomePullToSearchSettings *pullToSearchSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings;
@property (nonatomic) long long presentationState;
@property (nonatomic) double presentationProgress;
@property (nonatomic) double presentationOffset;
@property (nonatomic) BOOL scrollViewBeganScrollingFromTop;
@property (nonatomic) double topOffset;
@property (copy, nonatomic) NSArray *presentables;
@property (copy, nonatomic) NSArray *interactionCompletions;
@property (weak, nonatomic) id<SBSearchPresenterDelegate> searchPresenterDelegate;
@property (nonatomic) struct SBHSearchInteractivePresentationMetrics { double interactiveTransitionDistance; double interactiveTransitionBeganFromTopLeeway; double interactiveActivationThreshold; } interactivePresentationMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;

- (void)_sendWillPresentSearchToDelegateAndObservers:(BOOL)a0;
- (void)removeSearchPresenterObserver:(id)a0;
- (void)_updatePresentablesWithMode:(long long)a0 withCompletion:(id /* block */)a1;
- (double)_searchPresentationProgressForOffset:(double)a0;
- (void)_didDismissSearch;
- (void)_sendDidDismissSearchToObserver:(id)a0;
- (id)initWithSettings:(id)a0 identifier:(id)a1;
- (void)_sendWillDismissSearchToDelegateAndObservers:(BOOL)a0;
- (void)layout;
- (void)_updatePresentables:(id)a0 withMode:(long long)a1;
- (void)addSearchPresenterObserver:(id)a0;
- (void)_setUpInteractivePresentationMetrics;
- (void)_willPresentSearchAnimated:(BOOL)a0;
- (BOOL)_canPresent;
- (void)scrollViewDidScroll:(id)a0;
- (void)dismissSearchAnimated:(BOOL)a0;
- (void)_sendWillDismissSearch:(BOOL)a0 toObserver:(id)a1;
- (double)_rubberbandingOffsetForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)_noteWillBeginModifyingPresentationProgressForState:(long long)a0 animated:(BOOL)a1;
- (void)_sendWillPresentSearch:(BOOL)a0 toObserver:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_didPresentSearch;
- (void)scrollViewWillEndDragging:(id)a0;
- (void)_setUpSearchAnimationSettings;
- (void)presentSearchAnimated:(BOOL)a0;
- (void)_sendDidPresentSearchToObserver:(id)a0;
- (void)_willDismissSearchAnimated:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_sendDidPresentSearchToDelegateAndObservers;
- (void)_sendDidDismissSearchToDelegateAndObservers;
- (void)_updatePresentables:(id)a0 withMode:(long long)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
