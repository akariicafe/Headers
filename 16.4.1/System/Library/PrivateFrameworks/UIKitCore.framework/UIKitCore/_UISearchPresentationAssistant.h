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

- (BOOL)shouldAccountForStatusBar;
- (id)dimmingView;
- (id)_searchBarContainerSuperview;
- (id)locateNavigationController;
- (BOOL)searchBarToBecomeTopAttached;
- (void)removeContainerViewFromSuperview;
- (double)_statusBarHeightChangeDueToRotation;
- (id)searchBarContainerView;
- (id)initWithSearchPresentationController:(id)a0;
- (double)statusBarAdjustment;
- (double)resultsControllerContentOffset;
- (BOOL)_currentTransitionIsRotating;
- (id)_searchControllerPresenting;
- (struct CGSize { double x0; double x1; })updateSearchBarContainerFrame;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)a0;
- (BOOL)searchBarWillResizeForScopeBar;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })optimalFrameForSearchBar:(id)a0;
- (void)ensureAppropriatelySizedSearchBar:(id)a0;
- (BOOL)_statusBarPreferredHidden;
- (void)dimmingViewWasTapped:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerFrame;

@end
