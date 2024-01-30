@class SKUIStyledImageDataConsumer, NSString, SKUIResourceLoader, NSArray, SKUIMissingItemLoader, UIImage, SKUIProductPageTableSeparatorView, SKUIProductPageTableHeaderView, NSMapTable;

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {
    NSMapTable *_artworkRequests;
    SKUIProductPageTableSeparatorView *_footerView;
    SKUIProductPageTableHeaderView *_headerView;
    NSArray *_lockups;
    SKUIMissingItemLoader *_missingItemLoader;
    UIImage *_placeholderImage;
    SKUIStyledImageDataConsumer *_productImageDataConsumer;
}

@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)numberOfRowsInSection;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (id)headerViewForTableView:(id)a0;
- (id)footerViewForTableView:(id)a0;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (id)initWithLockups:(id)a0 title:(id)a1;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;
- (id)_productImageForItem:(id)a0;

@end
