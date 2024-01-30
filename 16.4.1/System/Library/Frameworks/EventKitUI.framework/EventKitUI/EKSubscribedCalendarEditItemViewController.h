@class EKAbstractCalendarEditor, EKCalendar;

@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {
    EKCalendar *_calendar;
    EKAbstractCalendarEditor *_calendarEditor;
}

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)save;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calendar:(id)a1;

@end
