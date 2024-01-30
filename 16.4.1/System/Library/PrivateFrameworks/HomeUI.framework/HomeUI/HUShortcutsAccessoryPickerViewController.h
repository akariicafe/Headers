@interface HUShortcutsAccessoryPickerViewController : HUItemCollectionViewController {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ moduleContext;
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ moduleController;
}

- (void)setServices:(id)a0;
- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)configureWithDefaultSelectionController;
- (id)getServices;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithHome:(id)a0 configuration:(id)a1;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;

@end
