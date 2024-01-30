@class NSSet;

@interface HUInformationalAccessoryGridViewController : HUItemCollectionViewController {
    void /* unknown type, empty encoding */ visibleAccessories;
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ moduleController;
}

@property (nonatomic, copy) NSSet *visibleAccessories;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (id)layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (id)initWithVisibleAccessories:(id)a0;

@end
