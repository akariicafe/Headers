@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallSimpleImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider;

+ (void)_imageSDKSize:(struct CGSize { double x0; double x1; } *)a0 deviceSize:(struct CGSize { double x0; double x1; } *)a1 forSDKVersion:(long long)a2;
+ (id)templateWithImageProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithImageProvider:(id)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;

@end
