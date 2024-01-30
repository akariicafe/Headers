@class NSArray, NSString, UIPickerView;

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *_picker;
}

@property (nonatomic) long long chosenValueIndex;
@property (retain, nonatomic) NSArray *possibleValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginEditing;
- (void).cxx_destruct;
- (id)formattedValue;
- (void)commitEditing;
- (void)dealloc;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)_showPicker;
- (void)_hidePicker;

@end
