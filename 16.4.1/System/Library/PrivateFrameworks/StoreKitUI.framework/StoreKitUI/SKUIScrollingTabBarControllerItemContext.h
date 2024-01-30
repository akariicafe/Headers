@class NSString, SKUIViewControllerContainerCollectionViewCell, UIScrollView, UIViewController;
@protocol SKUIScrollingTabBarControllerItemContextDelegate;

@interface SKUIScrollingTabBarControllerItemContext : NSObject <SKUINavigationStackObserver> {
    BOOL _adjustingNestedPagingScrollViewContentOffset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _appliedContentInsetsAdjustment;
    struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset; double bottomInsetValueAddedForScrollingTabBar; } _desiredContentInsetAdjustmentDescriptor;
    UIScrollView *_insetAdjustedContentScrollView;
    double _lastSeenContentWidth;
    struct { double progress; BOOL isBouncingOffTheEdge; } _lastSentAppearanceStatus;
    UIScrollView *_observedNestedPagingScrollView;
    unsigned long long _originalAutoresizingMask;
    BOOL _readyForDisplay;
    char _viewControllerIsNavigationController;
}

@property (retain, nonatomic) SKUIViewControllerContainerCollectionViewCell *collectionViewCell;
@property (weak, nonatomic) id<SKUIScrollingTabBarControllerItemContextDelegate> delegate;
@property (nonatomic) unsigned long long lastSelectedPageIndex;
@property (readonly, nonatomic) UIScrollView *nestedPagingScrollView;
@property (readonly, nonatomic) double nestedPagingScrollViewContentWidth;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) BOOL viewControllerIsNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)applyNewContentInsetDescriptor:(struct { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; double x1; })a0;
- (id)_appearanceStatusObserver;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 withOldContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 toContentScrollView:(id)a2;
- (id)_nestedPagedScrollingConformingViewControllerForcingViewLoading:(BOOL)a0;
- (void)_notifyDelegateOfUpdatedContentWidthInObservedNestedPagingScrollView;
- (void)_prepareViewControllerForDisplayWithViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateContentOffset:(BOOL)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_prepareViewControllerForTearDown;
- (void)_updateAppliedContentInsetsAdjustment;
- (void)notifyOfUpdatedAppearanceStatus:(struct { double x0; BOOL x1; })a0;
- (void)observedNavigationStackDidChange:(id)a0;
- (void)prepareViewControllerForDisplayWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)prepareViewControllerForTearDown;
- (void)updateForPossibleNestedPagingScrollViewChange;
- (void)updateNestedPagingScrollViewContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)viewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)a0;

@end
