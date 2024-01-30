@interface MenstrualCyclesAppPlugin.CycleHistoryFiltersCollectionViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterMapping;
    void /* unknown type, empty encoding */ delegate;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)doneAndDismiss;

@end
