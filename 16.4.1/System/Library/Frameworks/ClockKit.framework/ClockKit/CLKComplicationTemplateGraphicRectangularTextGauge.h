@class CLKTextProvider, CLKGaugeProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicRectangularTextGauge : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *body1TextProvider;
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;

+ (id)templateWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1 gaugeProvider:(id)a2;
+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2 gaugeProvider:(id)a3;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2 gaugeProvider:(id)a3;
- (id)initWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1 gaugeProvider:(id)a2;

@end
