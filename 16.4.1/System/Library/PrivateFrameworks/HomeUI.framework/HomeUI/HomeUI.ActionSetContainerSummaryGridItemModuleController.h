@interface HomeUI.ActionSetContainerSummaryGridItemModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate, HUSceneEditorDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayoutManager;
    void /* unknown type, empty encoding */ sceneEditorDelegate;
}

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;
- (id)displayedItemsInSection:(id)a0;
- (void)sceneEditor:(id)a0 removeActionSetBuilderFromTrigger:(id)a1;
- (BOOL)shouldShowHeaderForSection:(id)a0;
- (id)transformWithLayoutOptions:(id)a0;

@end
