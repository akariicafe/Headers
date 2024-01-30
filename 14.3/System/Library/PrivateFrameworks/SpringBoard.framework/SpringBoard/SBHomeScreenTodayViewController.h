@class NSString, _UILegibilitySettings, FBDisplayLayoutElement, SBUISpotlightBarNavigationController, WGWidgetGroupViewController, SPUISearchBarController, UIViewController, SBViewControllerTransitionContext;
@protocol SBHomeScreenTodayViewControllerDelegate;

@interface SBHomeScreenTodayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SPUISearchBarDelegate, SBUICoronaAnimationControllerParticipant, SBUISpotlightInitiating, SBHLegibility, SBHOccludable> {
    WGWidgetGroupViewController *_widgetViewController;
    SBUISpotlightBarNavigationController *_spotlightNavController;
    FBDisplayLayoutElement *_displayLayoutElement;
    SPUISearchBarController *_searchBarViewController;
    BOOL _scrollViewContentOffsetDirty;
    struct CGPoint { double x; double y; } _scrollViewLastContentOffset;
}

@property (weak, nonatomic) id<SBHomeScreenTodayViewControllerDelegate> delegate;
@property (nonatomic) long long pullToSearchState;
@property (nonatomic) BOOL ignoresScrolling;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UIViewController *spotlightViewController;
@property (nonatomic) BOOL showsSearchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;
@property (nonatomic, getter=isOccluded) BOOL occluded;

+ (double)_verticalSpacingBetweenWidgets;

- (void)resetForSpotlightDismissalAnimated:(BOOL)a0;
- (void)cleanupAfterSpotlightDismissal;
- (BOOL)canBeginPullDownSearchGesture;
- (void).cxx_destruct;
- (void)_coverSheetDidPresent:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setDisplayLayoutElementActive:(BOOL)a0;
- (void)_widgetEditViewDidDisappear:(id)a0;
- (void)_configureInnerMatchMoveAnimation;
- (void)_statusBarHeightDidChange:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })widgetGroupViewController:(id)a0 contentOccludingInsetsForInterfaceOrientation:(long long)a1;
- (double)pullDownSearchGesturePercentComplete;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_widgetGroupViewController;
- (void)_configureOuterMatchMoveAnimation;
- (void)searchBarDidFocus;
- (void)_configureMatchMoveAnimations;
- (void)_updateScrollViewContentInsetAndOffsetIfNecessary;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_setRequestDisableRootFolderScrolling:(BOOL)a0 reason:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_suggestedTodayViewFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })widgetListViewEdgeInsetsIncludingSearchHeader:(BOOL)a0;
- (void)_widgetEditViewDidDisappearImplementation;
- (double)_topContentInsetForNavigationBar:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setRequestDisableRootFolderParallax:(BOOL)a0 reason:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleScrollingEnded:(id)a0;
- (void)_resetScrollViewInsets;
- (id)_majorScrollView;
- (double)pullDownSearchGestureYOffset;
- (double)_maxClippingOffset;
- (void)coronaAnimationController:(id)a0 willAnimateCoronaTransitionWithAnimator:(id)a1;
- (void)_applyScaleOnlyMatchMoveToView:(id)a0 withSourceView:(id)a1 animationKey:(id)a2;
- (BOOL)pullDownSearchGestureDraggingFromTopOfScrollView:(id)a0;
- (id)_eligibleScrollViews;
- (void)_updateLegibilitySettings;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)_removeMatchMoveAnimations;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)spotlightHeaderAcquiringViewController;
- (void)handleDraggingWillEndWithTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 forScrollView:(id)a2;
- (void)_widgetEditViewWillAppear:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })widgetGroupViewController:(id)a0 sizeForInterfaceOrientation:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultTodayViewContentInsets;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
