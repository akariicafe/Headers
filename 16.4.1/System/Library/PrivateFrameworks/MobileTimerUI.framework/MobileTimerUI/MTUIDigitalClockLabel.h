@class NSCalendar, NSDate;

@interface MTUIDigitalClockLabel : MTUIDateLabel {
    NSCalendar *_calendar;
    NSDate *_baseDate;
    long long _hour;
    long long _minute;
}

- (void)refreshUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTimeLabelText:(id)a0;
- (BOOL)setHour:(long long)a0 minute:(long long)a1;
- (void)forceSetHour:(long long)a0 minute:(long long)a1;
- (void)resetFontSizes;
- (void).cxx_destruct;
- (void)significantTimeChange:(id)a0;

@end
