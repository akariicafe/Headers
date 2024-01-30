@class NSString, NSArray, HKSimpleDataEntryPlainTextCell, NSNumber, UIPickerView;

@interface HKSimpleDataEntryMultipleChoiceItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSNumber *_chosenIndex;
    NSArray *_choiceDisplayValues;
    NSArray *_choices;
    UIPickerView *_picker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (id)cell;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)_setTextForInputTextField:(id)a0;
- (void)_setupPlaceholder;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)a0 registrantModelKey:(id)a1 choices:(id)a2 choiceDisplayNames:(id)a3 defaultChoice:(id)a4;
- (void)updateCellDisplay;

@end
