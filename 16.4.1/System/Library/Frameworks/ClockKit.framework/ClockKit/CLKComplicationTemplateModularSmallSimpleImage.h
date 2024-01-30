@class CLKImageProvider;

@interface CLKComplicationTemplateModularSmallSimpleImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider;

+ (id)templateWithImageProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithImageProvider:(id)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;

@end
