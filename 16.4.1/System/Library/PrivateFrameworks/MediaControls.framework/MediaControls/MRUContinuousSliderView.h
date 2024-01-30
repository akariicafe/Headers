@class UIImageSymbolConfiguration, MRUOutputDeviceAsset, UIView;

@interface MRUContinuousSliderView : CCUIContinuousSliderView

@property (nonatomic) double referenceGlyphScale;
@property (readonly, nonatomic) UIView *materialView;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setGlyphScale:(double)a0;
- (void)setContinuousSliderCornerRadius:(double)a0;
- (void)layoutSubviews;
- (void)setOutputDeviceAsset:(id)a0 state:(id)a1 animated:(BOOL)a2;
- (id)createBackgroundView;
- (void).cxx_destruct;

@end
