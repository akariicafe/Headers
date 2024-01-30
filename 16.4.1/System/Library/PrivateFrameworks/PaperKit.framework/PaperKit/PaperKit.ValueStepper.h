@interface PaperKit.ValueStepper : UIControl {
    void /* unknown type, empty encoding */ decreaseButton;
    void /* unknown type, empty encoding */ increaseButton;
    void /* unknown type, empty encoding */ valueLabel;
    void /* unknown type, empty encoding */ contentStackView;
    void /* unknown type, empty encoding */ interItemSpacing;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ valueLabelWidth;
    void /* unknown type, empty encoding */ valueLabelBorderWidth;
    void /* unknown type, empty encoding */ minValue;
    void /* unknown type, empty encoding */ maxValue;
    void /* unknown type, empty encoding */ unit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentValue;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didTapLeftButton;
- (void)didTapRightButton;

@end
