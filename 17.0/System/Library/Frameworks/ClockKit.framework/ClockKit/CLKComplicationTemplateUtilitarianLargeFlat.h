@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateUtilitarianLargeFlat : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *textProvider;
@property (copy, nonatomic) CLKImageProvider *imageProvider;

+ (id)templateWithTextProvider:(id)a0;
+ (id)templateWithTextProvider:(id)a0 imageProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithTextProvider:(id)a0;
- (id)initWithTextProvider:(id)a0 imageProvider:(id)a1;

@end
