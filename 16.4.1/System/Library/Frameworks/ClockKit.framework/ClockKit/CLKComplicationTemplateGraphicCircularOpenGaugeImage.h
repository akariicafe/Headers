@class CLKFullColorImageProvider, CLKTextProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeImage : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *bottomImageProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider;

+ (id)templateWithGaugeProvider:(id)a0 bottomImageProvider:(id)a1 centerTextProvider:(id)a2;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithGaugeProvider:(id)a0 bottomImageProvider:(id)a1 centerTextProvider:(id)a2;

@end
