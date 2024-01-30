@class NSString, UIPresentationController, UIView, UIDimmingView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {
    UIPresentationController *_searchPresentationController;
    UIView *_searchBarContainerView;
    UIDimmingView *_dimmingView;
    BOOL _isFormSheetPresentation;
}

@property (nonatomic) BOOL presentationWasAnimated;
@property (nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (retain, nonatomic) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)statusBarAdjustment;
- (BOOL)shouldAccountForStatusBar;
- (void)ensureAppropriatelySizedSearchBar:(id)a0;
- (id)dimmingView;
- (double)resultsControllerContentOffset;
- (id)searchBarContainerView;
- (void)dimmingViewWasTapped:(id)a0;
- (BOOL)_currentTransitionIsRotating;
- (BOOL)searchBarToBecomeTopAttached;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (id)_searchControllerPresenting;
- (BOOL)_statusBarPreferredHidden;
- (id)locateNavigationController;
- (void)removeContainerViewFromSuperview;
- (BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerFrame;
- (id)_searchBarContainerSuperview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })optimalFrameForSearchBar:(id)a0;
- (id)initWithSearchPresentationController:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })updateSearchBarContainerFrame;
- (double)_statusBarHeightChangeDueToRotation;
- (BOOL)searchBarWillResizeForScopeBar;

@end
