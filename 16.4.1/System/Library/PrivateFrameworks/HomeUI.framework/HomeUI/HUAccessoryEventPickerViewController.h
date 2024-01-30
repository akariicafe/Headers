@interface HUAccessoryEventPickerViewController : HUItemCollectionViewController {
    void /* unknown type, empty encoding */ accessoryElementModule;
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ filter;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ eventBuilderItem;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ triggerBuilder;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ mode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ source;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) id /* block */ filter;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)nextWithSender:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithEventBuilderItem:(id)a0 triggerBuilder:(id)a1 mode:(unsigned long long)a2 source:(unsigned long long)a3 delegate:(id)a4;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)validateNextButton;

@end
