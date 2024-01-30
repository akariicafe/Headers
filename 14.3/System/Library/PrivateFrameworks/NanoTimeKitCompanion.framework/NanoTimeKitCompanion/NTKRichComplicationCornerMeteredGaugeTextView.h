@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView

@property (readonly, nonatomic) NTKRichComplicationImageView *outerImageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (long long)progressFillStyle;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;

@end
