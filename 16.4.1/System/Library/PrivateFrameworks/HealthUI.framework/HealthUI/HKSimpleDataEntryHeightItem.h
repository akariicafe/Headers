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

- (void)doneButtonTapped:(id)a0;
- (void)localeDidChange:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (id)cell;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (void)_valueDidChange;
- (double)_defaultCentimeterValue;
- (id)_formattedValueForDisplay;
- (void)_setHeightValueForPicker:(id)a0 selectedRow:(long long)a1;
- (void)_setTextForInputTextField:(id)a0;
- (void)_setupPlaceholder;
- (void)_updateLocaleDependentValues;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)a0 registrantModelKey:(id)a1 heightInCm:(id)a2 defaultHeightInCm:(id)a3;
- (void)updateCellDisplay;

@end
