@class CLKTextProvider, CLKFullColorImageProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCornerSegmentedGaugeImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithImageProvider:(id)a0 gaugeProvider:(id)a1 textProvider:(id)a2;

@end
