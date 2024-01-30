@class NSCalendar, NSDateInterval, NSDateFormatter, UIDatePicker, NSDate, NSDateIntervalFormatter;
@protocol SCLTimePickerTableViewCellDelegate;

@interface SCLTimePickerTableViewCell : UITableViewCell {
    unsigned long long _constraintMode;
    NSDateFormatter *_dateFormatter;
    NSDateIntervalFormatter *_intervalFormatter;
}

@property (readonly) UIDatePicker *datePicker;
@property (copy, nonatomic) NSDateInterval *constraintInterval;
@property (copy, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) NSDate *selectedDate;
@property (weak, nonatomic) id<SCLTimePickerTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)calendar;
- (void)setCalendar:(id)a0;
- (void).cxx_destruct;
- (void)_updateConstraintModeWithInterval:(id)a0 selectedDate:(id)a1;
- (void)datePickerDidChangeDate:(id)a0;

@end
