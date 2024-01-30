@interface MenstrualCyclesAppPlugin.CalendarViewDataSource : NSObject <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ cellProvider;
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ includeSpacerCellsFromFirstWeekday;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ startComponents;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ endComponents;
}

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
