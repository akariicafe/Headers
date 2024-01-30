@class NSString, UITableViewCell;

@interface EKCalendarSubscriptionURLEditItem : EKCalendarEditItem {
    UITableViewCell *_cell;
    NSString *_urlString;
}

@property (retain, nonatomic) NSString *urlString;
@property (nonatomic) BOOL editable;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)headerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)saveStateToCalendar:(id)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (id)_textFieldColorForEditable:(BOOL)a0;
- (long long)_cellSelectionStyleForEditable:(BOOL)a0;

@end
