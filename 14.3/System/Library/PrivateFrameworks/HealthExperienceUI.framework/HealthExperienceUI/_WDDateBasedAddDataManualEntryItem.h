@class NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell, NSDate;

@interface _WDDateBasedAddDataManualEntryItem : WDAddDataManualEntryItem {
    UIDatePicker *_datePicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
    BOOL _highlightWhenEditing;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) long long datePickerMode;

- (void).cxx_destruct;
- (id)generateValue;
- (void)setTitle:(id)a0;
- (id)tableViewCells;
- (id)initWithMaximumDate:(id)a0 highlightWhenEditing:(BOOL)a1;
- (void)_datePickerDidChange:(id)a0;
- (void)_saveDisambiguatedDate:(id)a0;
- (void)_generateValue:(id /* block */)a0;
- (void)setValue:(id)a0;
- (void)beginEditing;

@end
