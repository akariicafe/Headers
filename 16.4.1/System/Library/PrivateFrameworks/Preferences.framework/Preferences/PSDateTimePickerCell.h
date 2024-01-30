@class UILabel, UIDatePicker;

@interface PSDateTimePickerCell : PSTableCell {
    UIDatePicker *_datePicker;
    UILabel *_titleLabel;
}

+ (double)preferredHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)dealloc;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)datePicker;
- (void)timeZoneChanged:(id)a0;

@end
