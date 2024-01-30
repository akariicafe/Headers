@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeSimpleText : CLKComplicationTemplate

@property (nonatomic) long long maxDynamicFontSize;
@property (copy, nonatomic) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTextProvider:(id)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;

@end
