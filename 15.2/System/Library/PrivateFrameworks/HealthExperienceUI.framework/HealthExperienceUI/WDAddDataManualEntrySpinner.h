@class NSString, UIPickerView, WDManualDataEntryTableViewCell;
@protocol WDAddDataManualEntrySpinnerDataSource;

@interface WDAddDataManualEntrySpinner : WDAddDataManualEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *_pickerView;
    WDManualDataEntryTableViewCell *_tableViewCell;
    long long _selectedPickerViewIndex;
}

@property (nonatomic) long long _wd_deliveryReason;
@property (weak, nonatomic) id<WDAddDataManualEntrySpinnerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setValue:(id)a0;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)generateValue;
- (id)tableViewCells;
- (void)_updateTableViewCellValue;

@end
