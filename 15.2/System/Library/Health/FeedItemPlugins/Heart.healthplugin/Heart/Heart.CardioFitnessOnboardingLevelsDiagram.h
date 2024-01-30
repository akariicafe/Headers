@interface Heart.CardioFitnessOnboardingLevelsDiagram : UIView {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ textSupport;
    void /* unknown type, empty encoding */ layoutCalculator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bucketLabels;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thresholdLabels;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thresholdLines;
    void /* unknown type, empty encoding */ $__lazy_storage_$_valueBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillUpperThresholdLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillLowerThresholdLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_measurementLabel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
