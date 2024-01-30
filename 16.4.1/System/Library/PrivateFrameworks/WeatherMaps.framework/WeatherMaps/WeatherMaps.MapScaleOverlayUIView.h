@interface WeatherMaps.MapScaleOverlayUIView : UIView {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ titleHeight;
    void /* unknown type, empty encoding */ maximumWidth;
    void /* unknown type, empty encoding */ minimumWidth;
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ titleDividerSpacing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundEffectManagerVibrancy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backdropLayerVibrancy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleVibrancyEffectView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_continuousScaleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_discreteScaleView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)handleInvertColorsStatusDidChangeWithNotification:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
