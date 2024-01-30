@class CLKTextProvider;

@interface CLKComplicationTemplateSimpleText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)a0;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithTextProvider:(id)a0;

@end
