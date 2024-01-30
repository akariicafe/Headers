@interface MenstrualCyclesAppPlugin.SingleCycleViewDataSource : NSObject <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ dataFetchingState;
    void /* unknown type, empty encoding */ cycle;
    void /* unknown type, empty encoding */ cycleViewModelProvider;
    void /* unknown type, empty encoding */ today;
}

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
