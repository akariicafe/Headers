@class NSDateComponents;

@interface EKUIMiniMonthView : EKUIYearMonthView {
    NSDateComponents *_dateComponents;
}

@property (retain, nonatomic) NSDateComponents *dateComponents;

+ (double)heightForInterfaceOrientation:(long long)a0 windowSize:(struct CGSize { double x0; double x1; })a1 heightSizeClass:(long long)a2;

- (double)xInset;
- (id)headerFont;
- (BOOL)opaque;
- (BOOL)vibrant;
- (double)yInset;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)xSpacing;
- (double)ySpacing;
- (id)dayColor;
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
- (double)headerXAdjust;
- (double)headerFontMaxSize;
- (double)headerFontMinSize;
- (double)headerFontKerning;
- (id)weekDayInitialsFont;
- (id)dayColorKey;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForGridOfDays:(BOOL)a0;
- (double)dayTextSize;
- (double)todayTextSize;
- (id)initWithCalendar:(id)a0 dateComponents:(id)a1;
- (double)_gridOfDaysYAdjustment;
- (double)_gridOfDaysHeightAdjustment;

@end
