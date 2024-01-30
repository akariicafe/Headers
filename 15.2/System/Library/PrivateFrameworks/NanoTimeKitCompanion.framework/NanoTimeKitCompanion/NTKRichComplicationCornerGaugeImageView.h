@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerGaugeImageView : NTKRichComplicationCornerGaugeCustomView

@property (readonly, nonatomic) NTKRichComplicationImageView *imageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)_outerView;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (long long)tritiumUpdateMode;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
