@class UILabel, UIDatePicker;

@interface PSDateTimePickerCell : PSTableCell {
    UIDatePicker *_datePicker;
    UILabel *_titleLabel;
}

+ (double)preferredHeight;

- (id)datePicker;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)timeZoneChanged:(id)a0;

@end
