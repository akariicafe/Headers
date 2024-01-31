@class CLKTextProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *bottomTextProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider;

+ (id)templateWithGaugeProvider:(id)a0 bottomTextProvider:(id)a1 centerTextProvider:(id)a2;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithGaugeProvider:(id)a0 bottomTextProvider:(id)a1 centerTextProvider:(id)a2;

@end
