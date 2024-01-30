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

- (void)beginEditing;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (void)_datePickerDidChange:(id)a0;
- (void)_generateValue:(id /* block */)a0;
- (void)_saveDisambiguatedDate:(id)a0;
- (id)generateValue;
- (id)initWithMaximumDate:(id)a0 highlightWhenEditing:(BOOL)a1;
- (id)tableViewCells;

@end
