@class UIDatePicker;

@interface PKDatePickerCellAccessory : UIView {
    UIDatePicker *_datePicker;
}

+ (id)accessoryWithDatePicker:(id)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_initWithDatePicker:(id)a0;

@end
