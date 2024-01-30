@interface WorkflowEditor.DurationPickerView : UIControl <UIPickerViewDataSource, UIPickerViewDelegate> {
    void /* unknown type, empty encoding */ timePicker;
    void /* unknown type, empty encoding */ hoursLabel;
    void /* unknown type, empty encoding */ minutesLabel;
    void /* unknown type, empty encoding */ secondsLabel;
    void /* unknown type, empty encoding */ onDurationChange;
}

- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
