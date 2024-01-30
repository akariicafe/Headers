@class NSArray;

@interface HealthVisualization.HighlightCalendarView : NUIContainerGridView {
    void /* unknown type, empty encoding */ longWeekdayStrings;
    void /* unknown type, empty encoding */ shortWeekdayStrings;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ringsRenderer;
    void /* unknown type, empty encoding */ weekdayLabels;
    void /* unknown type, empty encoding */ monthLabels;
}

@property (nonatomic, readonly) NSArray *accessibilityWeekdayLabels;
@property (nonatomic, readonly) NSArray *accessibilityMonthLabels;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithArrangedSubviewRows:(id)a0;

@end
