@interface HealthExperienceUI.WeightPickerItem : NSObject <UIPickerViewDelegate, UIPickerViewDataSource> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_localeUnit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localeMaxWeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localeMinWeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localeAverageWeight;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentWeight;
    void /* unknown type, empty encoding */ valueFormatter;
}

- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
