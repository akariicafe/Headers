@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCornerCircularImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithImageProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithImageProvider:(id)a0;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;

@end
