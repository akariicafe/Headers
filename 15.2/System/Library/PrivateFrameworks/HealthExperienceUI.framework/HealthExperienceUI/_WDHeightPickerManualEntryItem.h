@class NSString, UIPickerView, WDManualDataEntryTableViewCell;

@interface _WDHeightPickerManualEntryItem : WDAddDataManualEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {
    UIPickerView *_heightPicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
}

@property (retain, nonatomic) NSString *feetUnitString;
@property (retain, nonatomic) NSString *inchUnitString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginEditing;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)generateValue;
- (id)tableViewCells;
- (id)_setupHeightPicker;
- (void)_updateTableViewCell;

@end
