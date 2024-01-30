@interface HomeUI.AccessoryGridModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate> {
    void /* unknown type, empty encoding */ cellSettings;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayoutManager;
}

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;
- (id)displayedItemsInSection:(id)a0;
- (BOOL)shouldShowHeaderForSection:(id)a0;
- (id)transformWithLayoutOptions:(id)a0;

@end
