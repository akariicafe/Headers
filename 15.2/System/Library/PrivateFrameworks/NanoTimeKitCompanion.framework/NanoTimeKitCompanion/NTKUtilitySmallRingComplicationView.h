@class NTKColoringImageView;

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView {
    BOOL _didDrawOnce;
}

@property (retain, nonatomic) NTKColoringImageView *fillFractionRing;
@property (nonatomic) float fillFraction;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)ringColor;
- (void)updateRingWithRingDescription:(id)a0;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)_applyForegroundAlpha;
- (void)updateRingWithRingDescription:(id)a0 backgroundRingAlpha:(double)a1;

@end
