@class NSString, OKPageViewController, NSArray, OKNavigatorCollectionView;

@interface OKNavigatorCollectionViewControllerProxy : OKNavigatorViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate> {
    OKNavigatorCollectionView *_collectionView;
    struct CGPoint { double x; double y; } _collectionViewContentPreviousOffset;
    BOOL _scrollViewDidEndDragging;
    NSArray *_orderedPagesNames;
}

@property (retain, nonatomic) OKPageViewController *lastPageViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (BOOL)prepareForDisplay;
- (void)willMoveToParentViewController:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)commonInit;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isHorizontal;
- (void)_scrollViewDidCompleteScrolling;
- (void)updateCurrentPageViewController;
- (id)currentPageViewControllerIndexPath;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareAdjacentPages;
- (void)prepareAdjacentPages:(unsigned long long)a0;
- (void)prepareAdjacentPages:(unsigned long long)a0 withDirection:(unsigned long long)a1;
- (void)prepareAdjacentPagesForScrolling;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)resolutionDidChange;
- (void)setSettingOrientation:(unsigned long long)a0;
- (void)setSettingTransition:(unsigned long long)a0;
- (void)updateCollectionView;
- (void)updateCollectionViewLayoutItemSize;

@end
