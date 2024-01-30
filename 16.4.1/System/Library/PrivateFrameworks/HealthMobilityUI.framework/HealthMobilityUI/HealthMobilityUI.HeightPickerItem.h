@interface HealthMobilityUI.HeightPickerItem : NSObject <UIPickerViewDelegate, UIPickerViewDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentHeight;
    void /* unknown type, empty encoding */ valueFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_usesImperialUnits;
}

- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end
