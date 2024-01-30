@class CLKFullColorImageProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCircularClosedGaugeImage : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithGaugeProvider:(id)a0 imageProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithGaugeProvider:(id)a0 imageProvider:(id)a1;

@end
