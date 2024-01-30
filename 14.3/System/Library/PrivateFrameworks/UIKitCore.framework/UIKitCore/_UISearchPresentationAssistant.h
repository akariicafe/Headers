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

- (void)dimmingViewWasTapped:(id)a0;
- (id)dimmingView;
- (double)statusBarAdjustment;
- (BOOL)shouldAccountForStatusBar;
- (BOOL)searchBarToBecomeTopAttached;
- (id)searchBarContainerView;
- (double)resultsControllerContentOffset;
- (BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)a0;
- (id)_searchBarContainerSuperview;
- (void)ensureAppropriatelySizedSearchBar:(id)a0;
- (id)_searchControllerPresenting;
- (BOOL)_currentTransitionIsRotating;
- (struct CGSize { double x0; double x1; })updateSearchBarContainerFrame;
- (void)dealloc;
- (id)initWithSearchPresentationController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })optimalFrameForSearchBar:(id)a0;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (void)removeContainerViewFromSuperview;
- (double)_statusBarHeightChangeDueToRotation;
- (id)locateNavigationController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerFrame;
- (BOOL)searchBarWillResizeForScopeBar;
- (BOOL)_statusBarPreferredHidden;

@end
