@class UICalendarView, NSString;

@interface UICalendarSelection : NSObject <_UICalendarSelection>

@property (weak, nonatomic) UICalendarView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (void).cxx_destruct;
- (BOOL)highlightsToday;
- (BOOL)canSelectDate:(id)a0;
- (void)didChangeAvailableDateRange:(id)a0;
- (void)didChangeCalendar:(id)a0;
- (void)didChangeVisibleMonth:(id)a0;
- (void)didDeselectDate:(id)a0;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)a0;
- (void)selectAllDatesAnimated:(BOOL)a0;
- (BOOL)shouldDeselectDate:(id)a0;
- (void)updateSelectableDates;
- (void)willMoveToCalendarView:(id)a0;

@end
