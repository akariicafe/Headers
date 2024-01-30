@class HKMCDayViewModel, NSDate;

@interface MenstrualCyclesAppPlugin.TimelineDayCell : UICollectionViewCell <CAAnimationDelegate> {
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ supplementaryDisplayTypes;
    void /* unknown type, empty encoding */ cycleDay;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fertilityProjectionReversed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menstruationProjectionHighReversed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menstruationProjectionLowReversed;
    void /* unknown type, empty encoding */ didUpdateFromCycleDay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dayOfWeekLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_formatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pill;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menstruationIndicator;
    void /* unknown type, empty encoding */ zoomLevel;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, readonly) HKMCDayViewModel *axCycleDayViewModel;
@property (nonatomic, readonly) NSDate *axCycleDay;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
