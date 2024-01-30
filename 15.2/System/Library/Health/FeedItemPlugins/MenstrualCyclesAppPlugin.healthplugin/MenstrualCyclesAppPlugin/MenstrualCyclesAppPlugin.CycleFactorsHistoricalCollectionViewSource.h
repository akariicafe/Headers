@interface MenstrualCyclesAppPlugin.CycleFactorsHistoricalCollectionViewSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settingsManager;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortMonthDayYearDateFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yearDateFormatter;
    void /* unknown type, empty encoding */ factorsQuery;
    void /* unknown type, empty encoding */ factorObserverQuery;
    void /* unknown type, empty encoding */ periodPredictionStatus;
    void /* unknown type, empty encoding */ fertileWindowPredictionStatus;
    void /* unknown type, empty encoding */ ongoingCycleFactors;
    void /* unknown type, empty encoding */ historicalCycleFactors;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ historicalCycleFactorYears;
    void /* unknown type, empty encoding */ sectionedHistoricalCycleFactors;
}

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
