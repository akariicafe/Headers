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

- (void)_configureScrollingInteraction:(id)a0;
- (void)_configureIconListView:(id)a0;
- (void)scrollViewWillBeginScrolling:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_scrollingInteractionVisibleInsets;
- (void)scrollViewDidEndScrolling:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)_updateVisibleRowRange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIconListAtIndex:(unsigned long long)a0;
- (void)iconListViewDidChangeBoundsSize:(id)a0;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (BOOL)_shouldUseScrollableIconViewInteraction;
- (double)_pageWidth;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (void)_layoutSubviews;
- (void)_updateIconListContainment:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_animatesRotationForAllVisibleIconListViews;
- (void)iconList:(id)a0 didRemoveIcon:(id)a1;
- (void)setLegibilitySettings:(id)a0;
- (struct CGSize { double x0; double x1; })_scrollViewContentSize;
- (void)iconList:(id)a0 didMoveIcon:(id)a1;
- (void)_enumerateScrollableIconViewsUsingBlock:(id /* block */)a0;
- (void)_zeroFirstListViewOriginIfNeeded;
- (struct CGSize { double x0; double x1; })_iconListViewSize;
- (long long)positionForBar:(id)a0;
- (void)_orientationDidChange:(long long)a0;
- (struct CGSize { double x0; double x1; })_iconSpacingForIconListView;
- (void)_updateScrollViewContentSize;
- (BOOL)isLibraryPodCategoryFolderView;
- (void)_positionNavBarAbuttingListView;
- (void)didMoveToWindow;
- (void)updateAccessibilityTintColors;
- (long long)iconVisibilityHandling;
- (void)scrollViewDidScroll:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_layoutMarginsforNavigationBar:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)setFolder:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_restingContentOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_layoutNavBarAndContentInsets;

@end
