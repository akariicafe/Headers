@class NSDateComponents;
@protocol UICalendarSelectionSingleDateDelegate;

@interface UICalendarSelectionSingleDate : UICalendarSelection {
    struct { unsigned char canSelect : 1; unsigned char didSelect : 1; } _delegateImplements;
}

@property (nonatomic) BOOL _selectionFollowsMonthSelection;
@property (readonly, weak, nonatomic) id<UICalendarSelectionSingleDateDelegate> delegate;
@property (copy, nonatomic) NSDateComponents *selectedDate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_sendDelegateForSelectedDateChange;
- (BOOL)canSelectDate:(id)a0;
- (void)didChangeAvailableDateRange:(id)a0;
- (void)didChangeCalendar:(id)a0;
- (void)didChangeVisibleMonth:(id)a0;
- (void)didDeselectDate:(id)a0;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)a0;
- (void)selectAllDatesAnimated:(BOOL)a0;
- (void)setSelectedDate:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldDeselectDate:(id)a0;
- (void)willMoveToCalendarView:(id)a0;

@end
