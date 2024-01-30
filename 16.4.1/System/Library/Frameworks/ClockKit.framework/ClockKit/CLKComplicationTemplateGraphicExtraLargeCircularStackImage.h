@class CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularStackImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKFullColorImageProvider *line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

+ (id)templateWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;

@end
