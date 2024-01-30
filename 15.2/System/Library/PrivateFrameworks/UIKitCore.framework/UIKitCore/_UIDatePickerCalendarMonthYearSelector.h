@class _UIDatePickerDateRange, NSCalendar, NSLocale, UIDatePicker, _UIDatePickerCalendarMonth;
@protocol _UIDatePickerCalendarMonthYearSelectorDelegate;

@interface _UIDatePickerCalendarMonthYearSelector : UIView {
    UIDatePicker *_datePicker;
}

@property (weak, nonatomic) id<_UIDatePickerCalendarMonthYearSelectorDelegate> delegate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange;
@property (retain, nonatomic) _UIDatePickerCalendarMonth *selectedMonth;

- (void)reloadWithCalendar:(id)a0 locale:(id)a1 dateRange:(id)a2 selectedMonth:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reload;
- (void).cxx_destruct;
- (void)setSelectedMonth:(id)a0 animated:(BOOL)a1;
- (void)_setupViewHierarchy;
- (void)_didSelectDate:(id)a0;
- (void)_setSelectedMonth:(id)a0 animated:(BOOL)a1 updatePicker:(BOOL)a2 notifyDelegate:(BOOL)a3;

@end
