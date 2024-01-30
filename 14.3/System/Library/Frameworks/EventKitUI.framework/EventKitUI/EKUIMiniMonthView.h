@class NSDateComponents;

@interface EKUIMiniMonthView : EKUIYearMonthView {
    NSDateComponents *_dateComponents;
}

@property (retain, nonatomic) NSDateComponents *dateComponents;

+ (double)heightForInterfaceOrientation:(long long)a0 windowSize:(struct CGSize { double x0; double x1; })a1 heightSizeClass:(long long)a2;

- (BOOL)opaque;
- (void).cxx_destruct;
- (double)yInset;
- (BOOL)vibrant;
- (double)xInset;
- (BOOL)showMonthName;
- (BOOL)showWeekDayInitials;
- (double)weekDayInitialsAdjustLeft;
- (double)weekDayInitialsAdjustTop;
- (double)daysXAdjustLeft;
- (double)daysYAdjustTop;
- (id)todayNumberFont;
- (id)dayNumberFont;
- (double)circleSizeForDoubleDigit;
- (double)circleSize;
- (double)circleFrameYAdjustment;
- (double)circleFrameXAdjustment;
- (double)todayTextYAdjustment;
- (double)todayNumberKerning;
- (id)initWithCalendar:(id)a0 dateComponents:(id)a1;
- (double)_gridOfDaysYAdjustment;
- (double)_gridOfDaysHeightAdjustment;
- (id)headerFont;
- (double)headerXAdjust;
- (double)headerFontMaxSize;
- (double)headerFontMinSize;
- (double)headerFontKerning;
- (id)weekDayInitialsFont;
- (id)dayColorKey;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForGridOfDays:(BOOL)a0;
- (double)dayTextSize;
- (double)todayTextSize;
- (double)xSpacing;
- (double)ySpacing;
- (id)dayColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
