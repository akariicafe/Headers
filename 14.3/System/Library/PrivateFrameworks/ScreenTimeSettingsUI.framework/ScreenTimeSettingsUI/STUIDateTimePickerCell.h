@class UIDatePicker;

@interface STUIDateTimePickerCell : PSTableCell {
    UIDatePicker *_datePicker;
}

@property (readonly) UIDatePicker *datePicker;

+ (double)preferredHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)timeZoneChanged:(id)a0;

@end
