@interface SleepHealthUI.TimeIntervalPickerView : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ selectedHourIndex;
    void /* unknown type, empty encoding */ selectedMinuteIndex;
    void /* unknown type, empty encoding */ timeIntervalSubscriber;
    void /* unknown type, empty encoding */ timeIntervalPublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hourFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_minuteFormatter;
}

- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
