@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithImageProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithImageProvider:(id)a0;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;

@end
