@class UIButton, UIDatePicker, NSDate;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell

@property (readonly, nonatomic) UIButton *neverButton;
@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) NSDate *date;

- (void)layoutSubviews;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (id)init;

@end
