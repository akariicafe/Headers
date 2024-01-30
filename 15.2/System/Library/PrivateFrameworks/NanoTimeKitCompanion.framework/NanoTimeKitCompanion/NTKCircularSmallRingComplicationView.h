@class NTKColoringImageView, UIColor;

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView {
    NTKColoringImageView *_fillFractionRing;
    double _fillFraction;
    BOOL _didDrawOnce;
    UIColor *_ringOverrideColor;
}

- (void)setForegroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)setUsesMediumLayout:(BOOL)a0;
- (void)updateRingWithRingDescription:(id)a0;
- (void)updateRingWithOverrideColor:(id)a0;

@end
