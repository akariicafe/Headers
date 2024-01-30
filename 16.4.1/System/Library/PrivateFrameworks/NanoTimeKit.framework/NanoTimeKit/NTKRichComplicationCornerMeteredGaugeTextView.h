@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView

@property (readonly, nonatomic) NTKRichComplicationImageView *outerImageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (long long)progressFillStyle;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (id)initWithFontFallback:(long long)a0;
- (long long)tritiumUpdateMode;

@end
