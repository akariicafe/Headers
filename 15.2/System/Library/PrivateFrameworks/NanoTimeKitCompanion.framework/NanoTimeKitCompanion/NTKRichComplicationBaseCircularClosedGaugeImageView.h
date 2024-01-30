@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView

@property (retain, nonatomic) NTKRichComplicationImageView *imageView;

- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (long long)tritiumUpdateMode;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)innerView;
- (id)gaugeProviderFromTemplate:(id)a0;

@end
