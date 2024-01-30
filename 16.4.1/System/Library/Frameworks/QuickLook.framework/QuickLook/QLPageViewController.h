@class NSString, NSMapTable, QLDelegateProxy, UIScrollView, UIViewController;
@protocol UIScrollViewDelegate, UIPageViewControllerDelegate, QLPageViewControllerDataSource;

@interface QLPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    NSMapTable *_pages;
    unsigned long long _nextPageIndex;
    struct CGPoint { double x; double y; } _scrollingStartOffset;
    id<UIPageViewControllerDelegate> _definedDelegate;
    UIScrollView *_scrollView;
    QLDelegateProxy *_scrollViewDelegateProxy;
    QLDelegateProxy *_pageViewControllerDelegateProxy;
    double _interPageSpacing;
    long long _currentPageIndexForAppliedParallaxEffect;
    BOOL _pageClipsToBounds[3];
    BOOL _isTransitioning;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (readonly, weak, nonatomic) UIViewController *currentPage;
@property (weak, nonatomic) id<QLPageViewControllerDataSource> indexedDataSource;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double parallaxIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setUp;
- (id)delegate;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setDelegate:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)setDataSource:(id)a0;
- (void)setCurrentPageIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithTransitionStyle:(long long)a0 navigationOrientation:(long long)a1 options:(id)a2;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)setViewControllers:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_applyParallaxEffectWithTransitionProgress:(double)a0;
- (id)_cachedViewControllerAtIndex:(unsigned long long)a0 offset:(long long)a1;
- (unsigned long long)_indexOfViewController:(id)a0;
- (void)_loadAndCacheViewControllersBeforeAndAfterIndex:(long long)a0;
- (void)_rearrangeCachedViewControllersWithNewCurrentPageIndex:(long long)a0;
- (id)_retrieveAndStoreViewControllerAtIndex:(unsigned long long)a0 offset:(unsigned long long)a1;
- (void)_setCurrentPageIndex:(unsigned long long)a0 direction:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_setViewControllers:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_unsetParallaxEffect;
- (id)_viewControllerAtIndex:(unsigned long long)a0 offset:(long long)a1;
- (void)clearInternalCache;

@end
