@interface FIUIHealthSettingsWheelchairUsePickerController : FIUIHealthSettingsPickerController

@property (copy, nonatomic) id /* block */ wheelchairUseUpdateHandler;

- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setWheelchairUse:(long long)a0;
- (long long)_wheelchairUseForRow:(long long)a0;

@end
