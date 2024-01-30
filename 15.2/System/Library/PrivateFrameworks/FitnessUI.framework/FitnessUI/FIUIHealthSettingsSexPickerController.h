@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController

@property (copy, nonatomic) id /* block */ sexUpdateHandler;

- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)forceUpdate;
- (void).cxx_destruct;
- (void)setBiologicalSex:(long long)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)_biologicalSexForRow:(long long)a0;
- (void)_updateWithBiologicalSex:(long long)a0;

@end
