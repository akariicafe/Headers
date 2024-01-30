@class NSString, WDAddDataManualEntryItem;

@interface WDDisplayTypeAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate> {
    WDAddDataManualEntryItem *_dateTimeEntryItem;
}

@property (retain, nonatomic) WDAddDataManualEntryItem *valueFieldManualEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)manualEntryItemsForSection:(long long)a0;
- (void)manualEntryItemDidUpdate:(id)a0;
- (void)validateDataWithCompletion:(id /* block */)a0;
- (id)createValueFieldManualEntryItem;
- (id)defaultEditingItem;
- (id)generateHKObjects;
- (void)_setDefaultValuesIfNecessary;
- (void)_updateManualEntryItemWithCurrentBMI:(id)a0;

@end
