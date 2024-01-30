@interface MenstrualCyclesAppPlugin.StaticPillView : UIView {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ isFutureDay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fertilityProjectionReversed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menstruationProjectionHighReversed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menstruationProjectionLowReversed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pill;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillMask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menstruationIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_menstruationIndicatorMask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logIndicator;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
