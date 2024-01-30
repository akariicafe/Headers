@class SKUIScrollingSegmentedControllerNavigationBarTitleView, NSString, NSArray, SKUIInteractiveSegmentedControl, SKUIScrollingSegmentedControllerCollectionView, SKUIProxyScrollView, NSMutableArray, UIViewController, NSMapTable, UIScrollView;
@protocol SKUIScrollingSegmentedControllerDelegate;

@interface SKUIScrollingSegmentedController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController> {
    struct CGSize { double width; double height; } _contentCollectionViewItemSize;
    SKUIScrollingSegmentedControllerCollectionView *_contentCollectionView;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _proxyScrollViewContentInsetAdjustment;
    struct { double progress; BOOL isBouncingOffTheEdge; } _scrollingTabAppearanceStatus;
    NSMutableArray *_titleObservingViewControllers;
    BOOL _viewBackgroundIsWhite;
    NSMapTable *_viewControllerToItemContext;
}

@property (readonly, nonatomic, getter=_titlesSegmentedControl) SKUIInteractiveSegmentedControl *titlesSegmentedControl;
@property (weak, nonatomic) id<SKUIScrollingSegmentedControllerDelegate> delegate;
@property (nonatomic) double maximumContentWidth;
@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } segmentedControlContentEdgeInsets;
@property (nonatomic) double segmentedControlHeight;
@property (nonatomic) long long segmentedControlLayoutStyle;
@property (readonly, nonatomic) unsigned long long focusedViewControllerIndex;
@property (readonly, nonatomic) SKUIScrollingSegmentedControllerNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
@property (readonly, nonatomic) UIViewController *focusedViewController;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)contentScrollView;
- (void)setClientContext:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)selectViewControllerAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)scrollingTabAppearanceStatusWasUpdated:(struct { double x0; BOOL x1; })a0;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)a0;
- (void)replaceViewControllerAtIndex:(unsigned long long)a0 withViewController:(id)a1;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)scrollViewDidChangeContentInset:(id)a0;
- (void)scrollViewDidMoveToWindow:(id)a0;
- (void)_titlesSegmentedControlValueChangeAction:(id)a0;
- (void)_updateViewBackgroundColor;
- (void)_reloadTitleSegments;
- (void)_updateTitlesSelectionProgress;
- (BOOL)_configureSegment:(id)a0 forViewController:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_viewControllerContentScrollViewContentInset;
- (id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(BOOL)a0;
- (void)_setViewControllers:(id)a0 viewUpdatesHandler:(id /* block */)a1;
- (void)_scrollToTitlesSelectionProgress:(double)a0 animated:(BOOL)a1;
- (void)_updateTitleValueObservation;
- (void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)a0;
- (void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)a0;
- (void)_viewControllerNeedsContentScrollViewUpdates:(id)a0;

@end
