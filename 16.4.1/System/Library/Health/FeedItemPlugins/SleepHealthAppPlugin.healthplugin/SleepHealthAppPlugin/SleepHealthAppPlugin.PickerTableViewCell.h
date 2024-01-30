@interface SleepHealthAppPlugin.PickerTableViewCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    void /* unknown type, empty encoding */ picker;
    void /* unknown type, empty encoding */ pickerData;
    void /* unknown type, empty encoding */ delegate;
}

- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
