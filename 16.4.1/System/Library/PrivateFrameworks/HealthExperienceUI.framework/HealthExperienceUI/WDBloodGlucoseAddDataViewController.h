@class NSString, WDAddDataManualEntrySpinner;

@interface WDBloodGlucoseAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource>

@property (retain, nonatomic) WDAddDataManualEntrySpinner *mealTimeEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)defaultMetadata;
- (id)manualEntrySpinner:(id)a0 titleForRow:(long long)a1;
- (id)manualEntryItemsForSection:(long long)a0;
- (long long)numberOfRowsInManualEntrySpinner:(id)a0;

@end
