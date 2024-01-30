@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {
    NSLengthFormatter *_heightFormatter;
}

@property (copy, nonatomic) id /* block */ heightUpdateHandler;

- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)forceUpdate;
- (void).cxx_destruct;
- (void)setHeightQuantity:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)_heightPickerUpdated;
- (id)_pickerDisplayStringForHeightForRow:(long long)a0 forComponent:(long long)a1;

@end
