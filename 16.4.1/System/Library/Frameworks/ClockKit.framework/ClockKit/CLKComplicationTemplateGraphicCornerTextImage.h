@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerTextImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithTextProvider:(id)a0 imageProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithTextProvider:(id)a0 imageProvider:(id)a1;

@end
