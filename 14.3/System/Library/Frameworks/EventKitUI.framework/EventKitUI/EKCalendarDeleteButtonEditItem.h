@class UITableViewCell, UIView;

@interface EKCalendarDeleteButtonEditItem : EKCalendarEditItem {
    UITableViewCell *_cell;
    id _deleteButtonTarget;
    SEL _deleteButtonAction;
}

@property (readonly, nonatomic) UIView *deleteButtonView;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (void)setDeleteButtonTarget:(id)a0 action:(SEL)a1;

@end
