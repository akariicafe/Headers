@class NSDateComponents;
@protocol _UICalendarSingleSelectionDelegate;

@interface _UICalendarSingleSelection : UICalendarSelection {
    struct { unsigned char canSelect : 1; unsigned char didSelect : 1; } _delegateImplements;
}

@property (retain, nonatomic) NSDateComponents *selectedDate;
@property (readonly, weak, nonatomic) id<_UICalendarSingleSelectionDelegate> delegate;
@property (readonly, nonatomic) BOOL allowsNoDate;
@property (nonatomic) BOOL selectionFollowsMonthSelection;

- (id)init;
- (void).cxx_destruct;
- (void)_sendDelegateForSelectedDateChange;
- (BOOL)canSelectDate:(id)a0;
- (void)didChangeAvailableDateRange:(id)a0;
- (void)didChangeCalendar:(id)a0;
- (void)didChangeVisibleMonth:(id)a0;
- (void)didDeselectDate:(id)a0;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)a0;
- (id)initWithDelegate:(id)a0 allowsNoDate:(BOOL)a1;
- (void)selectAllDatesAnimated:(BOOL)a0;
- (void)setSelectedDate:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldDeselectDate:(id)a0;
- (void)willMoveToCalendarView:(id)a0;

@end
