@interface HKMonthDayCell : HKCalendarDayCell {
    long long _dayOfWeek;
}

@property (readonly, nonatomic) long long circleState;

+ (double)dayLabelFontSize;

- (void)setSelected:(BOOL)a0;
- (void)dealloc;
- (id)initWithDateCache:(id)a0;
- (BOOL)_representsWeekendDay;
- (void)_setCircleState:(long long)a0;
- (void)_updateFontAndCircle;
- (void)pressToTransition:(BOOL)a0;
- (void)updateWithDate:(id)a0 dayOfMonth:(long long)a1;

@end
