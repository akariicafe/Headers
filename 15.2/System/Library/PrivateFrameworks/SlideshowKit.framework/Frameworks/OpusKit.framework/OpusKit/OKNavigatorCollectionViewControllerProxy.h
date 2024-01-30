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

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)prepareForDisplay;
- (void)didReceiveMemoryWarning;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)commonInit;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)isHorizontal;
- (void)dealloc;
- (void)_scrollViewDidCompleteScrolling;
- (void)resolutionDidChange;
- (BOOL)prepareForWarmup;
- (BOOL)prepareForUnload;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setSettingTransition:(unsigned long long)a0;
- (void)setSettingOrientation:(unsigned long long)a0;
- (void)prepareAdjacentPages;
- (void)updateCollectionView;
- (void)prepareAdjacentPages:(unsigned long long)a0 withDirection:(unsigned long long)a1;
- (void)prepareAdjacentPages:(unsigned long long)a0;
- (void)prepareAdjacentPagesForScrolling;
- (void)updateCurrentPageViewController;
- (void)updateCollectionViewLayoutItemSize;
- (id)currentPageViewControllerIndexPath;

@end
