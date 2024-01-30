@class NSString, WDAddDataManualEntryItem, WDAddDataManualEntrySpinner;

@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate>

@property (retain, nonatomic) WDAddDataManualEntryItem *dateTimeEntryItem;
@property (retain, nonatomic) WDAddDataManualEntrySpinner *deliveryReasonEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)defaultMetadata;
- (id)manualEntrySpinner:(id)a0 titleForRow:(long long)a1;
- (id)generateHKObjects;
- (void)manualEntryItemDidUpdate:(id)a0;
- (id)manualEntryItemsForSection:(long long)a0;
- (long long)numberOfRowsInManualEntrySpinner:(id)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;

@end
