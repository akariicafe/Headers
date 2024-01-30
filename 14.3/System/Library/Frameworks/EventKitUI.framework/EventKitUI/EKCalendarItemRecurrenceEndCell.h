@class UIButton, UIDatePicker, NSDate;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell

@property (readonly, nonatomic) UIButton *neverButton;
@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)viewDidMoveToSuperview;

@end
