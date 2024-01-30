@class CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicRectangularLargeText : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *bodyTextProvider;

+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 bodyTextProvider:(id)a2;
+ (id)templateWithHeaderTextProvider:(id)a0 bodyTextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 bodyTextProvider:(id)a2;
- (id)initWithHeaderTextProvider:(id)a0 bodyTextProvider:(id)a1;

@end
