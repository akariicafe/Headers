@class SKUIStyledImageDataConsumer, SKUIItemList, SKUIResourceLoader, NSString, SKUIItemCollectionController, SKUIClientContext, SKUIItemArtworkContext, NSOperationQueue, SSVLoadURLOperation, SKUIUber, NSMutableIndexSet;
@protocol SKUIItemListTableDelegate;

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate> {
    BOOL _delegateWantsCanRemove;
    BOOL _delegateWantsDidRemove;
    BOOL _delegateWantsWillDisplay;
    BOOL _didLoadMore;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    SSVLoadURLOperation *_loadMoreOperation;
    BOOL _requestedLoadMore;
}

@property (weak, nonatomic) id<SKUIItemListTableDelegate> delegate;
@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (retain, nonatomic) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) struct CGSize { double width; double height; } imageBoundingSize;
@property (retain, nonatomic) SKUIItemList *itemList;
@property (nonatomic) BOOL loadsMoreItems;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) double rowHeight;
@property (nonatomic) long long selectionStyle;
@property (nonatomic) long long separatorStyle;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (retain, nonatomic) SKUIUber *uber;
@property (readonly, nonatomic) NSString *visibleMetricsImpressions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addItems:(id)a0;
- (void)loadView;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(long long)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)itemTableView:(id)a0 didConfirmItemOfferForTableViewCell:(id)a1;
- (id)_itemCollectionController;
- (void)loadNextPageOfArtworkWithReason:(long long)a0;
- (id)itemCollectionController:(id)a0 cellLayoutForItemIndex:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemCollectionController:(id)a0 itemPageRangeForOffset:(struct CGPoint { double x0; double x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleItemRangeForItemCollectionController:(id)a0;
- (id)popIconImageViewForItemAtIndex:(long long)a0;
- (void)setItemCellClass:(Class)a0;
- (void)unhideIcons;
- (void)_loadRemainingItemsWithPriority:(long long)a0;
- (void)_finishLoadMoreOperationWithItems:(id)a0 error:(id)a1;
- (void)deleteRowsAtIndexPaths:(id)a0;
- (void)setItemArtworkContext:(id)a0;
- (void)itemTableView:(id)a0 didRemoveCell:(id)a1;

@end
