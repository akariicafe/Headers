@class EKCalendarEditor, EKCalendar;

@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {
    EKCalendar *_calendar;
    EKCalendarEditor *_calendarEditor;
}

- (void).cxx_destruct;
- (void)save;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calendar:(id)a1;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;

@end
