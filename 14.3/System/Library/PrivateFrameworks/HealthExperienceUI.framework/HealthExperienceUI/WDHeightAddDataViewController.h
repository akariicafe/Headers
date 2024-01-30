@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController {
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;
}

- (id)_feetUnitString;
- (id)_inchUnitString;
- (BOOL)_inputUnitIsFeetWithDisplayType:(id)a0 unitController:(id)a1;
- (id)createValueFieldManualEntryItem;
- (void).cxx_destruct;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 unitController:(id)a2 initialStartDate:(id)a3 dateCache:(id)a4;

@end
