@class NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell, NSDate;

@interface _WDTwoPartDateTimeManualEntryItem : WDAddDataManualEntryItem {
    UIDatePicker *_datePicker;
    UIDatePicker *_timePicker;
    WDManualDataEntryTableViewCell *_dateTableViewCell;
    WDManualDataEntryTableViewCell *_timeTableViewCell;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
}

- (void).cxx_destruct;
- (id)generateValue;
- (id)tableViewCells;
- (id)initWithMaximumDate:(id)a0;
- (void)_datePickerDidChange:(id)a0;
- (void)_saveDisambiguatedDate:(id)a0;
- (void)_generateValue:(id /* block */)a0;
- (void)_setupTableViewCells;
- (void)_timePickerDidChange:(id)a0;
- (void)_updateCellLabels;
- (void)setValue:(id)a0;
- (void)beginEditing;

@end
