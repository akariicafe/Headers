@class NSString, NSMapTable, SKUIMissingItemLoader, SKUIGridComponent, UIImage;

@interface SKUIBrickGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {
    NSMapTable *_artworkRequests;
    double _baseHeight;
    double _columnWidth;
    NSMapTable *_editorialLayouts;
    SKUIMissingItemLoader *_missingItemLoader;
    long long _numberOfColumns;
    double _paddingHorizontal;
    double _paddingTop;
    UIImage *_placeholderImage;
}

@property (readonly, nonatomic) SKUIGridComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)dealloc;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)prefetchResourcesWithReason:(long long)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)clickEventWithLink:(id)a0 elementName:(id)a1 index:(long long)a2;
- (void)_loadMissingItemsFromIndex:(long long)a0 withReason:(long long)a1;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsForColumnIndex:(long long)a0 rowWidth:(double)a1;
- (id)_editorialLayoutForBrick:(id)a0;
- (void)_loadArtworkForBrick:(id)a0 artworkLoader:(id)a1 reason:(long long)a2;
- (void)_enumerateVisibleBricksUsingBlock:(id /* block */)a0;

@end
