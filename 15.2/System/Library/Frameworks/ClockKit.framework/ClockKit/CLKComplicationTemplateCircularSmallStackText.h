@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *line1TextProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

+ (id)templateWithLine1TextProvider:(id)a0 line2TextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithLine1TextProvider:(id)a0 line2TextProvider:(id)a1;

@end
