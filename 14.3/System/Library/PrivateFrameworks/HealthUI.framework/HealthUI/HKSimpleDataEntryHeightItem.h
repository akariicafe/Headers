@class NSString, HKSimpleDataEntryPlainTextCell, UIPickerView, NSNumber;

@interface HKSimpleDataEntryHeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    UIPickerView *_picker;
    BOOL _usesImperialUnits;
    NSNumber *_defaultValue;
    NSNumber *_centimeterValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cell;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)doneButtonTapped:(id)a0;
- (void)beginEditing;
- (void)localeDidChange:(id)a0;
- (void)updateCellDisplay;
- (id)formattedKeyAndValue;
- (void)_setupPlaceholder;
- (void)_setTextForInputTextField:(id)a0;
- (void)_updateLocaleDependentValues;
- (id)_formattedValueForDisplay;
- (void)_valueDidChange;
- (double)_defaultCentimeterValue;
- (void)_setHeightValueForPicker:(id)a0 selectedRow:(long long)a1;
- (id)initWithTitle:(id)a0 registrantModelKey:(id)a1 heightInCm:(id)a2 defaultHeightInCm:(id)a3;

@end
