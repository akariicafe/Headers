@class CLKTextProvider, CLKFullColorImageProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider;
@property (copy, nonatomic) CLKTextProvider *outerTextProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *outerImageProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;

@end
