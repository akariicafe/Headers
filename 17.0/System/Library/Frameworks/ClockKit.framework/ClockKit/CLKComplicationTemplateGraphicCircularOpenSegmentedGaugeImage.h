@class CLKFullColorImageProvider, CLKTextProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCircularOpenSegmentedGaugeImage : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithImageProvider:(id)a0 gaugeProvider:(id)a1 textProvider:(id)a2;

@end
