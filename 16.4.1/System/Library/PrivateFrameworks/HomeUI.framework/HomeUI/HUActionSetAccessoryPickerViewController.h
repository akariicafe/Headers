@interface HUActionSetAccessoryPickerViewController : HUItemCollectionViewController {
    void /* unknown type, empty encoding */ accessoryElementModule;
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ actionSetBuilder;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)doneWithSender:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)cancelWithSender:(id)a0;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithActionSetBuilder:(id)a0 delegate:(id)a1;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
