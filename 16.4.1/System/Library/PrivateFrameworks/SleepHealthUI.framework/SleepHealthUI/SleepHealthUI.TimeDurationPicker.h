@interface SleepHealthUI.TimeDurationPicker : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_formatter;
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ plusButton;
    void /* unknown type, empty encoding */ minusButton;
    void /* unknown type, empty encoding */ durationLabel;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)accessibilityDurationLabel;
- (void)decrease;
- (void)increase;

@end
