@interface HUTriggerActionPickerViewController : HUItemCollectionViewController <WFHomeWorkflowEditorViewControllerDelegate> {
    void /* unknown type, empty encoding */ actionSetModule;
    void /* unknown type, empty encoding */ accessoryModule;
    void /* unknown type, empty encoding */ selectionController;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ triggerBuilder;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ flow;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ delegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)nextWithSender:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)cancelWithSender:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)homeWorkflowEditorViewController:(id)a0 didFinishWithHomeWorkflow:(id)a1 includesSecureAccessory:(BOOL)a2;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 delegate:(id)a2;
- (id)initWithTriggerBuilder:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (void)itemManagerDidUpdate:(id)a0;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
