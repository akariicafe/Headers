@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView

@property (readonly, nonatomic) NTKRichComplicationImageView *outerImageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (long long)progressFillStyle;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (long long)tritiumUpdateMode;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;

@end
