@interface HKMonthDayCell : HKCalendarDayCell {
    long long _dayOfWeek;
}

@property (readonly, nonatomic) long long circleState;

+ (double)dayLabelFontSize;

- (id)initWithDateCache:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)dealloc;
- (void)updateWithDate:(id)a0 dayOfMonth:(long long)a1;
- (void)_updateFontAndCircle;
- (void)_setCircleState:(long long)a0;
- (BOOL)_representsWeekendDay;
- (void)pressToTransition:(BOOL)a0;

@end
