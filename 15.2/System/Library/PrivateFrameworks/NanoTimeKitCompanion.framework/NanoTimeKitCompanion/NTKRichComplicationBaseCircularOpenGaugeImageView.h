@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularOpenGaugeImageView : NTKRichComplicationCircularOpenGaugeContentView

@property (retain, nonatomic) NTKRichComplicationImageView *bottomImageView;

- (id)bottomView;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (long long)tritiumUpdateMode;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)gaugeProvider:(id *)a0 andCenterTextProvider:(id *)a1 fromTemplate:(id)a2;

@end
