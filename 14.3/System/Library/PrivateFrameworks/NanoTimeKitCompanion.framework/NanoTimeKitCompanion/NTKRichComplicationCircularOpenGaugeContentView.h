@class NTKRichComplicationCurvedProgressView, UIView, NTKColoringLabel;

@interface NTKRichComplicationCircularOpenGaugeContentView : NTKRichComplicationCircularBaseView {
    NTKRichComplicationCurvedProgressView *_progressView;
    NTKColoringLabel *_centerLabel;
    UIView *_bottomView;
}

@property (readonly, nonatomic) NTKRichComplicationCurvedProgressView *progressView;
@property (readonly, nonatomic) NTKColoringLabel *centerLabel;

+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (long long)progressFillStyle;

- (void).cxx_destruct;
- (id)bottomView;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)gaugeProvider:(id *)a0 andCenterTextProvider:(id *)a1 fromTemplate:(id)a2;

@end
