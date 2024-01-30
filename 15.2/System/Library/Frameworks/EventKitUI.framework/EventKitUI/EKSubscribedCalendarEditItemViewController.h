@class EKAbstractCalendarEditor, EKCalendar;

@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {
    EKCalendar *_calendar;
    EKAbstractCalendarEditor *_calendarEditor;
}

- (void)save;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calendar:(id)a1;

@end
