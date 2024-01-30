@interface SleepHealthUI.SleepScheduleComponentsHeader : UIView {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ bedtimeTitleLabel;
    void /* unknown type, empty encoding */ wakeUpTitleLabel;
    void /* unknown type, empty encoding */ bedtimeTimeLabel;
    void /* unknown type, empty encoding */ wakeUpTimeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bedtimeDayLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wakeUpDayLabel;
    void /* unknown type, empty encoding */ sizingTimeLabel;
    void /* unknown type, empty encoding */ isIn24HourTime;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)tintColorDidChange;
- (id)accessibilityBedtimeTimeLabel;
- (id)accessibilityWakeUpTimeLabel;

@end
