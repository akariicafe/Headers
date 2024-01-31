@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *innerTextProvider;
@property (copy, nonatomic) CLKTextProvider *outerTextProvider;

+ (id)templateWithInnerTextProvider:(id)a0 outerTextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithInnerTextProvider:(id)a0 outerTextProvider:(id)a1;

@end
