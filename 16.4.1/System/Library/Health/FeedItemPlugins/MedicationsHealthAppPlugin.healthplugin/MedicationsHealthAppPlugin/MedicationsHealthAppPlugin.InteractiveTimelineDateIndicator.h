@interface MedicationsHealthAppPlugin.InteractiveTimelineDateIndicator : UIView {
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ alwaysFormatForCurrentYear;
    void /* unknown type, empty encoding */ dateLabel;
    void /* unknown type, empty encoding */ cachedStartOfCurrentYear;
    void /* unknown type, empty encoding */ previousYearsFormatter;
    void /* unknown type, empty encoding */ currentYearFormatter;
    void /* unknown type, empty encoding */ timelineDay;
}

- (void)significantTimeChange;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
