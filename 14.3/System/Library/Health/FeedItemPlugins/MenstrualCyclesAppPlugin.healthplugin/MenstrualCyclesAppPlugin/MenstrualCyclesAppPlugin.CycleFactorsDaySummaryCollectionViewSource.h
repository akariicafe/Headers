@interface MenstrualCyclesAppPlugin.CycleFactorsDaySummaryCollectionViewSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ cycleDay;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortMonthDayYearDateFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yearDateFormatter;
    void /* unknown type, empty encoding */ cycleFactors;
    void /* unknown type, empty encoding */ rows;
    void /* unknown type, empty encoding */ gregorianCalenadar;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
