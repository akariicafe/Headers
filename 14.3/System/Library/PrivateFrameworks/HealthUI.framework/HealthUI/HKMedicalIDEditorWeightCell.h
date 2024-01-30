@class NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *_picker;
    long long _localWeightUnit;
    long long _numberOfRowsForPicker;
}

@property (retain, nonatomic) NSNumber *kilogramValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)formattedValue;
- (void)dealloc;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)_localeDidChange:(id)a0;
- (void)beginEditing;
- (void)commitEditing;
- (void)_showPicker;
- (void)_hidePicker;

@end
