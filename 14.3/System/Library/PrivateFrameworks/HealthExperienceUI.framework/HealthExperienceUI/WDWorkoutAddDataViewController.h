@class NSString, NSArray, WDAddDataManualEntrySpinner, WDAddDataManualEntryItem, HKQuantityType;

@interface WDWorkoutAddDataViewController : WDAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate> {
    NSArray *_workoutActivityTypePairs;
    HKQuantityType *_distanceType;
    NSArray *_sectionsWithDistance;
    NSArray *_sectionsWithoutDistance;
    WDAddDataManualEntrySpinner *_activityTypeEntryItem;
    WDAddDataManualEntryItem *_distanceEntryItem;
    WDAddDataManualEntryItem *_activeEnergyEntryItem;
    WDAddDataManualEntryItem *_dateRangeEntryItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (id)_totalEnergyBurned;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (long long)numberOfRowsInManualEntrySpinner:(id)a0;
- (id)manualEntrySpinner:(id)a0 titleForRow:(long long)a1;
- (id)manualEntryItemsForSection:(long long)a0;
- (unsigned long long)_selectedActivityType;
- (id)_generateSortedActivityTypes;
- (void)_createEntryItems;
- (void)_updateCurrentDistanceTypeWithActivityType:(unsigned long long)a0;
- (void)unitPreferencesDidChange:(id)a0;
- (long long)_indexOfActivityType:(unsigned long long)a0;
- (id)_activeEnergyDisplayName;
- (id)_distanceDisplayName;
- (id)_unitForDistanceType:(id)a0;
- (id)_quantityFromEntryItem:(id)a0 unit:(id)a1;
- (id)_displayTypeForIdentifier:(long long)a0;
- (id)_displayTypeForDistanceType:(id)a0;
- (id)_sectionsForDistanceType:(id)a0;
- (unsigned long long)_activityTypeForIndex:(long long)a0;
- (id)_activityTypeDescriptionForIndex:(long long)a0;
- (void)manualEntryItemDidUpdate:(id)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;
- (void)saveHKObjectWithCompletion:(id /* block */)a0;
- (id)_totalDistance;

@end
