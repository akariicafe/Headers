@interface MenstrualCyclesAppPlugin.CycleHistoryFiltersCollectionViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterMapping;
    void /* unknown type, empty encoding */ delegate;
}

- (id)initWithCollectionViewLayout:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)doneAndDismiss;

@end
