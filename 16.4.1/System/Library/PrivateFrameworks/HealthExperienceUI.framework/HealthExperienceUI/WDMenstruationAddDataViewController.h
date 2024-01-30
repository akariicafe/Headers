@class NSString, WDAddDataManualEntrySpinner;

@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController <WDAddDataManualEntrySpinnerDataSource> {
    WDAddDataManualEntrySpinner *_isStartOfCycleEntryItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)defaultMetadata;
- (id)manualEntrySpinner:(id)a0 titleForRow:(long long)a1;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (id)manualEntryItemsForSection:(long long)a0;
- (long long)numberOfRowsInManualEntrySpinner:(id)a0;
- (BOOL)useSingleStartAndEndDate;

@end
