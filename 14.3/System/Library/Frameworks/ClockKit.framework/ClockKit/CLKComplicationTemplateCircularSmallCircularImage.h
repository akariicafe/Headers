@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider;

+ (struct CGSize { double x0; double x1; })_imageSize;
+ (id)templateWithImageProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithImageProvider:(id)a0;
- (long long)compatibleFamily;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;

@end
