@class _UICalendarDateRange, NSDateComponents;
@protocol _UICalendarRangeSelectionDelegate;

@interface _UICalendarRangeSelection : UICalendarSelection {
    struct { unsigned char canSelectDate : 1; unsigned char didBeginSelection : 1; unsigned char didEndSelection : 1; unsigned char didSelectRange : 1; } _delegateImplements;
    NSDateComponents *_pendingStartDate;
}

@property (copy, nonatomic) _UICalendarDateRange *dateRange;
@property (readonly, weak, nonatomic) id<_UICalendarRangeSelectionDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_deselectDatesInRange:(id)a0 animated:(BOOL)a1;
- (id)_sanitizedDateRange:(id)a0 calendar:(id)a1;
- (BOOL)canSelectDate:(id)a0;
- (void)didChangeAvailableDateRange:(id)a0;
- (void)didChangeCalendar:(id)a0;
- (void)didChangeVisibleMonth:(id)a0;
- (void)didDeselectDate:(id)a0;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)a0;
- (void)selectAllDatesAnimated:(BOOL)a0;
- (void)setDateRange:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldDeselectDate:(id)a0;
- (void)willMoveToCalendarView:(id)a0;

@end
