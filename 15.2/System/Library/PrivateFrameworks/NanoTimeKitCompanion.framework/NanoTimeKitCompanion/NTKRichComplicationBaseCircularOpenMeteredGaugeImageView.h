@class NTKRichComplicationCurvedProgressView, NTKRichComplicationImageView, NTKColoringLabel;

@interface NTKRichComplicationBaseCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView;
@property (retain, nonatomic) NTKRichComplicationImageView *centerImageView;
@property (retain, nonatomic) NTKColoringLabel *smallLabel;

+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (long long)progressFillStyle;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (long long)tritiumUpdateMode;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })_layoutConstraintsWithDevice:(id)a0 family:(long long)a1;
- (double)_smallLabelFontWeight;

@end
