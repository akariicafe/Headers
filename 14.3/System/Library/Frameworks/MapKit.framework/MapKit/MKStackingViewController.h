@class NSHashTable, NSString, NSArray, UIView, _MKStackingContentView, _MKStackView, NSLayoutConstraint, NSMapTable, UIScrollView;
@protocol MKStackingViewControllerDelegate;

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate, UIScrollViewDelegate> {
    _MKStackView *_stackView;
    _MKStackingContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_stackViewWidthConstraint;
    BOOL _isScrollDisabled;
    unsigned long long _countOfCurrentLayoutInvocations;
    NSMapTable *_viewControllersToPreferredHeightConstraints;
    NSMapTable *_viewsToViewControllers;
    NSArray *_titleViewConstraints;
    BOOL _willRelayoutForPreferredContentSizeChange;
    BOOL _isSettingStackedViews;
    BOOL _contentViewConstraintsAdded;
    NSHashTable *_minimallyVisibleViews;
    BOOL _needsToPerformLayout;
    UIView *_overlayView;
    double _overlayViewOriginY;
    BOOL _mayWantSpearators;
    BOOL _needToCallViewControllerLayoutDelegate;
}

@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id<MKStackingViewControllerDelegate> stackingDelegate;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToTopAnimated:(BOOL)a0;
- (void)_didScroll;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)currentHeight;
- (double)stackView:(id)a0 distanceBetweenUpperView:(id)a1 andLowerView:(id)a2;
- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)a0;
- (void)stackViewNeedsLayout:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setOverlayView:(id)a0 withOriginY:(double)a1;
- (void)removeOverlayViewAnimated:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)_setScrollEnabled:(BOOL)a0 forcedUpdate:(BOOL)a1;
- (void)_updateFixedHeightAwareControllers;
- (BOOL)_isSafeToPerformLayout;
- (void)_setUpEnteringViewController:(id)a0;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)a0 exiting:(id)a1;
- (void)_tearDownExitingViewController:(id)a0;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)a0;
- (void)_setOverlayViewFrame;
- (double)_titleHeight;
- (void)_removePreferredHeightConstraintFromViewController:(id)a0;
- (void)_setPreferredHeight:(double)a0 forViewController:(id)a1;
- (void)_updateViewControllerVisibilityAfterPositionChange;
- (void)_sendScrollnotification;
- (void)_callViewControllersLayoutDelegateIfNeeded;
- (BOOL)isViewVisbile:(id)a0 percentageTreshold:(double)a1;
- (double)_fittingHeightForView:(id)a0;
- (void)setWidthConstraintConstant:(double)a0;
- (void)viewWillLayoutSubviews;

@end
