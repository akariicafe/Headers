@class UIColor;

@interface CoreAudioKit.AUMeterView : UIView {
    void /* unknown type, empty encoding */ minValue;
    void /* unknown type, empty encoding */ maxValue;
    void /* unknown type, empty encoding */ currentValue;
    void /* unknown type, empty encoding */ peakValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_meterFillLayer;
}

@property (nonatomic, retain) UIColor *tintColor;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
