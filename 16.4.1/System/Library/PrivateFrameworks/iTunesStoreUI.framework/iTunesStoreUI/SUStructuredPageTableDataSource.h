@class SUItem, SUStructuredPage, NSMutableArray, SUClientInterface;

@interface SUStructuredPageTableDataSource : SUTableDataSource {
    NSMutableArray *_cachedHeaderViews;
    double _offerButtonWidth;
}

@property (retain, nonatomic) SUItem *activeLoadMoreItem;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (retain, nonatomic) SUStructuredPage *structuredPage;
@property (nonatomic) long long style;

- (id)sectionIndexTitles;
- (long long)numberOfSections;
- (id)titleForHeaderInSection:(long long)a0;
- (void)reloadData;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)dealloc;
- (id)headerViewForSection:(long long)a0;
- (long long)tableViewStyle;
- (id)cellForIndexPath:(id)a0;
- (id)cellConfigurationForIndex:(long long)a0 item:(id)a1;
- (void)_configureLoadMoreCell:(id)a0 forItem:(id)a1;
- (id)_itemOfferButtonForCell:(id)a0 item:(id)a1;
- (BOOL)_shouldShowItemOfferButtonForItem:(id)a0;
- (BOOL)canDeleteIndexPath:(id)a0;
- (BOOL)canSelectIndexPath:(id)a0;
- (BOOL)canShowItemOfferButtonForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 reuseIdentifier:(id *)a1;
- (Class)cellConfigurationClassForItem:(id)a0;
- (double)cellHeightForIndexPath:(id)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)deleteIndexPath:(id)a0;
- (id)newHeaderViewForSection:(long long)a0;
- (void)reloadCellContexts;
- (long long)sectionIndexForIndexTitle:(id)a0 atIndex:(long long)a1;
- (id)titleForDeleteConfirmationForIndexPath:(id)a0;

@end
