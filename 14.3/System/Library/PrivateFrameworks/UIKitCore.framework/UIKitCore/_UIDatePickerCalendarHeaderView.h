@class NSDate, _UIDatePickerLinkedLabel, NSLocale, _UIDatePickerCalendarDay, NSDateFormatter, UIButton, UIView, NSCalendar, NSString, UIPointerInteraction, _UIDatePickerCalendarMonth, _UIDatePickerDateRange, UIImageView;
@protocol _UIDatePickerCalendarHeaderViewDelegate;

@interface _UIDatePickerCalendarHeaderView : UIView <UIPointerInteractionDelegate> {
    UIPointerInteraction *_pointerInteraction;
    NSDateFormatter *_longFormatter;
    NSDateFormatter *_shortFormatter;
    UIView *_monthYearSelectorContainer;
    _UIDatePickerLinkedLabel *_monthYearLabel;
    UIImageView *_chevron;
    UIButton *_previousMonthButton;
    UIButton *_nextMonthButton;
    NSDate *_lastCalculatedYearStart;
    NSDate *_lastCalculatedYearEnd;
}

@property (weak, nonatomic) id<_UIDatePickerCalendarHeaderViewDelegate> delegate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange;
@property (retain, nonatomic) NSString *customFontDesign;
@property (retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth;
@property (retain, nonatomic) _UIDatePickerCalendarDay *selectedDay;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFonts;
- (void)reloadWithCalendar:(id)a0 locale:(id)a1 dateRange:(id)a2 visibleMonth:(id)a3 selectedDay:(id)a4;
- (void)tintColorDidChange;
- (void)_didTap:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_reload;
- (void)_setupDateFormatter;
- (void)_setupViewHierarchy;
- (void)_reloadDateFormatters;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupGestureRecognizers;
- (void)_adjustMonth:(id)a0;
- (void)_updateMonthButtonImages;
- (void)_updateMonthYearLabel;
- (void)_updateMonthButtonEnablement;
- (void)_updatePossibleTitlesIfNeccessaryForDate:(id)a0;
- (void)_updateMonthButtonVisibility;
- (void)traitCollectionDidChange:(id)a0;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;

@end
