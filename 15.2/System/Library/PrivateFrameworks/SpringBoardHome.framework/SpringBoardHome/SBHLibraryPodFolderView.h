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

+ (id)defaultIconLocation;
+ (Class)defaultIconListViewClass;

- (void)scrollViewDidEndScrolling:(id)a0;
- (void)iconList:(id)a0 didMoveIcon:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIconListAtIndex:(unsigned long long)a0;
- (long long)iconVisibilityHandling;
- (BOOL)_animatesRotationForAllVisibleIconListViews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_scrollingInteractionVisibleInsets;
- (struct CGSize { double x0; double x1; })_scrollViewContentSize;
- (void)_positionNavBarAbuttingListView;
- (void)_layoutSubviews;
- (void)_layoutNavBarAndContentInsets;
- (void)_updateVisibleRowRange;
- (void)scrollViewWillBeginScrolling:(id)a0;
- (void)_configureScrollingInteraction:(id)a0;
- (struct CGSize { double x0; double x1; })_iconSpacingForIconListView;
- (struct CGPoint { double x0; double x1; })_restingContentOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isLibraryPodCategoryFolderView;
- (double)_pageWidth;
- (void)_updateIconListContainment:(id)a0 atIndex:(unsigned long long)a1;
- (void)_enumerateScrollableIconViewsUsingBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (BOOL)_shouldUseScrollableIconViewInteraction;
- (void)iconList:(id)a0 didRemoveIcon:(id)a1;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (void)setFolder:(id)a0;
- (void)updateAccessibilityTintColors;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_layoutMarginsforNavigationBar:(id)a0;
- (void)_orientationDidChange:(long long)a0;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (long long)positionForBar:(id)a0;
- (void)_zeroFirstListViewOriginIfNeeded;
- (struct CGSize { double x0; double x1; })_iconListViewSize;
- (void)_configureIconListView:(id)a0;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)iconListViewDidChangeBoundsSize:(id)a0;
- (void)setLegibilitySettings:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_updateScrollViewContentSize;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)didMoveToWindow;

@end
