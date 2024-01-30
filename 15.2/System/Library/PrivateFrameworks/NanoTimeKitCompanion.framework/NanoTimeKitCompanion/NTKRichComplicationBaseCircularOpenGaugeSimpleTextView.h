@class NTKRichComplicationCurvedProgressView, NTKColoringLabel;

@interface NTKRichComplicationBaseCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKColoringLabel *smallLabel;
@property (retain, nonatomic) NTKColoringLabel *centerLabel;
@property (retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;

@end
