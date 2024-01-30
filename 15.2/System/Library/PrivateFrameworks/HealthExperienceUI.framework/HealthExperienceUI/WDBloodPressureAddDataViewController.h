@class NSString, WDAddDataManualEntryItem;

@interface WDBloodPressureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntryItem *_systolicEntryItem;
    WDAddDataManualEntryItem *_diastolicEntryItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)manualEntryItemDidUpdate:(id)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;
- (BOOL)_systolicAndDiastolicHaveValues;
- (id)defaultEditingItem;
- (id)generateHKObjects;

@end
