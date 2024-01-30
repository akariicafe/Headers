@interface HUAccessoryListModuleController : HomeUI.SelectableItemModuleController <HUCollectionLayoutManagerDelegate> {
    void /* unknown type, empty encoding */ collectionLayoutManager;
    void /* unknown type, empty encoding */ cellVerticalContentInset;
}

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;
- (id)displayedItemsInSection:(id)a0;
- (BOOL)shouldShowHeaderForSection:(id)a0;

@end
