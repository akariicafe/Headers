@class NTKRichComplicationCurvedProgressView, NTKColoringLabel;

@interface NTKRichComplicationBaseCircularOpenGaugeRangeTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView;
@property (retain, nonatomic) NTKColoringLabel *leadingSmallLabel;
@property (retain, nonatomic) NTKColoringLabel *trailingSmallLabel;
@property (retain, nonatomic) NTKColoringLabel *centerLabel;

+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (long long)progressFillStyle;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;

@end
