@class NSDateComponents;

@interface EKUIMiniMonthView : EKUIYearMonthView {
    NSDateComponents *_dateComponents;
}

@property (retain, nonatomic) NSDateComponents *dateComponents;

+ (double)heightForInterfaceOrientation:(long long)a0 windowSize:(struct CGSize { double x0; double x1; })a1 heightSizeClass:(long long)a2;

- (BOOL)opaque;
- (id)headerFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)vibrant;
- (void).cxx_destruct;
- (double)xInset;
- (double)daysXAdjustLeft;
- (id)todayNumberFont;
- (double)_gridOfDaysHeightAdjustment;
- (double)_gridOfDaysYAdjustment;
- (double)circleFrameXAdjustment;
- (double)circleFrameYAdjustment;
- (double)circleSize;
- (double)circleSizeForDoubleDigit;
- (id)dayColor;
- (id)dayColorKey;
- (id)dayNumberFont;
- (double)dayTextSize;
- (double)daysYAdjustTop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForGridOfDays:(BOOL)a0;
- (double)headerFontKerning;
- (double)headerFontMaxSize;
- (double)headerFontMinSize;
- (double)headerXAdjust;
- (id)initWithCalendar:(id)a0 dateComponents:(id)a1;
- (BOOL)showMonthName;
- (BOOL)showWeekDayInitials;
- (double)todayNumberKerning;
- (double)todayTextSize;
- (double)todayTextYAdjustment;
- (double)weekDayInitialsAdjustLeft;
- (double)weekDayInitialsAdjustTop;
- (id)weekDayInitialsFont;
- (double)xSpacing;
- (double)yInset;
- (double)ySpacing;

@end
