@interface MenstrualCyclesAppPlugin.InteractiveTimelineDateIndicator : UIView {
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ alwaysFormatForCurrentYear;
    void /* unknown type, empty encoding */ dateLabel;
    void /* unknown type, empty encoding */ cachedStartOfCurrentYear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previousYearsFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentYearFormatter;
    void /* unknown type, empty encoding */ cycleDay;
}

- (void)significantTimeChange;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
