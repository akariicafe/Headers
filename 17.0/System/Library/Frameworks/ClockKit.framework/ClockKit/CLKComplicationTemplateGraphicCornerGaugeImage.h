@class CLKTextProvider, CLKFullColorImageProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicCornerGaugeImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider;
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithGaugeProvider:(id)a0 imageProvider:(id)a1;
+ (id)templateWithGaugeProvider:(id)a0 leadingTextProvider:(id)a1 trailingTextProvider:(id)a2 imageProvider:(id)a3;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithGaugeProvider:(id)a0 imageProvider:(id)a1;
- (id)initWithGaugeProvider:(id)a0 leadingTextProvider:(id)a1 trailingTextProvider:(id)a2 imageProvider:(id)a3;

@end
