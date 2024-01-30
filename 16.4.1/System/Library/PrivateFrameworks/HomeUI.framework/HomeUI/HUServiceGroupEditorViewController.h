@interface HUServiceGroupEditorViewController : HUItemCollectionViewController <HUPresentationDelegateHost, HUCollectionLayoutManagerDelegate> {
    void /* unknown type, empty encoding */ editingName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayoutManager;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ presentationDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ serviceGroupEditorDelegate;

+ (id)forCreatingNewServiceGroupWithServices:(id)a0 inHome:(id)a1;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (void)doneWithSender:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)cancelWithSender:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)displayedItemsInSection:(id)a0;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithServiceGroupBuilder:(id)a0;
- (void)itemManagerDidUpdate:(id)a0;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (BOOL)shouldShowHeaderForSection:(id)a0;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;

@end
