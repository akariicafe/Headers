@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView

@property (retain, nonatomic) NTKRichComplicationImageView *imageView;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)innerView;
- (id)gaugeProviderFromTemplate:(id)a0;

@end
