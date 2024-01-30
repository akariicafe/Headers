@class NTKRichComplicationRingProgressView, UIView;

@interface NTKRichComplicationCircularClosedGaugeContentView : NTKRichComplicationCircularBaseView {
    UIView *_innerView;
    NTKRichComplicationRingProgressView *_progressView;
}

@property (readonly, nonatomic) NTKRichComplicationRingProgressView *progressView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (id)innerView;
- (id)gaugeProviderFromTemplate:(id)a0;

@end
