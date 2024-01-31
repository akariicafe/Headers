@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallSimpleText : CLKComplicationTemplate

@property (nonatomic) long long maxDynamicFontSize;
@property (copy, nonatomic) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithTextProvider:(id)a0;

@end
