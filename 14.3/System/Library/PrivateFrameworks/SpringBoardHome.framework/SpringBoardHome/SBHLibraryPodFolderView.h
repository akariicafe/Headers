@class NSString, BSUIScrollView, NSArray, SBHFeatherBlurNavigationBar;
@protocol UIScrollViewDelegate, BSUIScrollViewDelegate;

@interface SBHLibraryPodFolderView : SBFolderView <SBIconListModelObserver, SBIconListLayoutObserver, UINavigationBarDelegate, SBHLibrarySearchControllerContentViewControllerScrollViewProvider> {
    BOOL _usingCenteredLayout;
    double _minimumNavBarHeight;
    double _maximumNavBarHeight;
    NSArray *_podScrollViewGradientMaskLayers;
}

@property (readonly, nonatomic) BSUIScrollView *podScrollView;
@property (readonly, nonatomic) SBHFeatherBlurNavigationBar *navigationBar;
@property (nonatomic) BOOL centersContentIfPossible;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BSUIScrollViewDelegate> librarySearchControllerScrollViewDelegate;

+ (Class)defaultIconListViewClass;
+ (id)defaultIconLocation;

- (void)updateAccessibilityTintColors;
- (long long)iconVisibilityHandling;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (void)_positionNavBarAbuttingListView;
- (void)setLegibilitySettings:(id)a0;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (double)_pageWidth;
- (void).cxx_destruct;
- (void)_updateIconListContainment:(id)a0 atIndex:(unsigned long long)a1;
- (void)_layoutSubviews;
- (void)_configureIconListView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)iconListViewDidChangeBoundsSize:(id)a0;
- (struct CGSize { double x0; double x1; })_iconListViewSize;
- (void)_updateVisibleRowRange;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (void)_layoutNavBarAndContentInsets;
- (struct CGSize { double x0; double x1; })_scrollViewContentSize;
- (struct CGPoint { double x0; double x1; })_restingContentOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewDidEndScrolling:(id)a0;
- (void)setFolder:(id)a0;
- (BOOL)_shouldManageScrolledHiddenClippedIconView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIconListAtIndex:(unsigned long long)a0;
- (id)initWithConfiguration:(id)a0;
- (id)_findHiddenIconView;
- (void)didMoveToWindow;
- (long long)positionForBar:(id)a0;
- (void)_updateScrollViewContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)iconList:(id)a0 didRemoveIcon:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)iconList:(id)a0 didMoveIcon:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_layoutMarginsforNavigationBar:(id)a0;
- (void)_zeroFirstListViewOriginIfNeeded;

@end
