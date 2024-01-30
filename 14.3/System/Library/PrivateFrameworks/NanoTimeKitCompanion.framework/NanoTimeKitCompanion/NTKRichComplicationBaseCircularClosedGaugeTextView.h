@class NTKRichComplicationRingProgressView, NTKColoringLabel;

@interface NTKRichComplicationBaseCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKColoringLabel *centerLabel;
@property (retain, nonatomic) NTKRichComplicationRingProgressView *progressView;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;

@end
