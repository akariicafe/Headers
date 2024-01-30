@class SKUIStyledImageDataConsumer, NSString, UIImage, SKUIItemCollectionController, SKUIClientContext, SKUIItemArtworkContext, NSOperationQueue, NSMutableArray, SKUIUber, UICollectionView, NSMutableIndexSet;
@protocol SKUIItemGridDelegate;

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    UIImage *_placeholderImage;
    NSMutableIndexSet *_selectedItemIndexSet;
}

@property (readonly, nonatomic) double rowHeight;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (weak, nonatomic) id<SKUIItemGridDelegate> delegate;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (nonatomic) struct CGSize { double width; double height; } imageBoundingSize;
@property (copy, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUIUber *uber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_collectionView;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)_collectionViewLayout;
- (void)removeItemsAtIndexes:(id)a0;
- (id)popIconImageViewForItemAtIndex:(long long)a0;
- (id)_itemCollectionController;
- (void)_reloadLayout;
- (id)initWithRowHeight:(double)a0;
- (id)itemCollectionController:(id)a0 cellLayoutForItemIndex:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemCollectionController:(id)a0 itemPageRangeForOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)itemCollectionView:(id)a0 didConfirmItemOfferForCell:(id)a1;
- (void)itemCollectionView:(id)a0 didPerformEditActionForCell:(id)a1;
- (void)loadNextPageOfArtworkWithReason:(long long)a0;
- (void)setItemCellClass:(Class)a0;
- (void)unhideIcons;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleItemRangeForItemCollectionController:(id)a0;

@end
