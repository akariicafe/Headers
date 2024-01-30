@class NSString, HKSimpleDataEntryPlainTextCell, UIPickerView, NSNumber;

@interface HKSimpleDataEntryWeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    UIPickerView *_picker;
    long long _localWeightUnit;
    long long _numberOfRowsForPicker;
    NSNumber *_defaultValue;
    NSNumber *_kilogramValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)localeDidChange:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (id)cell;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)_valueDidChange;
- (double)_defaultKilogramValue;
- (id)_formattedValueForDisplay;
- (void)_setTextForInputTextField:(id)a0;
- (void)_setWeightValueForSelectedRow:(long long)a0;
- (void)_setupPlaceholder;
- (void)_updateLocaleDependentValues;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)a0 registrantModelKey:(id)a1 weightInKg:(id)a2 defaultWeightInKg:(id)a3;
- (void)updateCellDisplay;

@end
