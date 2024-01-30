@class UIPageControl, UIViewController, UICollectionView, NSString, UICollectionViewFlowLayout, NSCache;
@protocol FIUIPageViewControllerDelegate, FIUIPageViewControllerDataSource;

@interface FIUIPageViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (nonatomic) BOOL userDidTapPageControl;
@property (retain, nonatomic) NSCache *viewControllerForIndexPath;
@property (nonatomic) BOOL shouldNotifyDelegateWhenScrollViewSettles;
@property (weak, nonatomic) id<FIUIPageViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<FIUIPageViewControllerDelegate> delegate;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) long long currentlyDisplayedIndex;
@property (nonatomic) BOOL showsPagingIndicator;
@property (readonly, nonatomic) UIViewController *currentlyDisplayedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)_addViewController:(id)a0 toCell:(id)a1;
- (void)_pageSelectedWithControl:(id)a0;
- (void)_scrollViewDidStop;
- (void)setCurrentlyDisplayedIndex:(long long)a0 animated:(BOOL)a1;

@end
