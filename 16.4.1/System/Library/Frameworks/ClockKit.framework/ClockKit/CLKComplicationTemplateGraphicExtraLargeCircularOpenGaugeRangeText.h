@class CLKTextProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeRangeText : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider;

+ (id)templateWithGaugeProvider:(id)a0 leadingTextProvider:(id)a1 trailingTextProvider:(id)a2 centerTextProvider:(id)a3;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithGaugeProvider:(id)a0 leadingTextProvider:(id)a1 trailingTextProvider:(id)a2 centerTextProvider:(id)a3;

@end
