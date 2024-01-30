@class CLKTextProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCornerGaugeText : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider;
@property (copy, nonatomic) CLKTextProvider *outerTextProvider;

+ (id)templateWithGaugeProvider:(id)a0 outerTextProvider:(id)a1;
+ (id)templateWithGaugeProvider:(id)a0 leadingTextProvider:(id)a1 trailingTextProvider:(id)a2 outerTextProvider:(id)a3;

- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithGaugeProvider:(id)a0 leadingTextProvider:(id)a1 trailingTextProvider:(id)a2 outerTextProvider:(id)a3;
- (id)initWithGaugeProvider:(id)a0 outerTextProvider:(id)a1;

@end
