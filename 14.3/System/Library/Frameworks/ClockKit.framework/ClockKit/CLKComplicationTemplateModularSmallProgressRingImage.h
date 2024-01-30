@class CLKProgressProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularSmallProgressRingImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider;
@property (copy, nonatomic) CLKProgressProvider *progressProvider;
@property (nonatomic) long long ringStyle;

+ (struct CGSize { double x0; double x1; })imageSize;
+ (id)templateWithImageProvider:(id)a0 progressProvider:(id)a1 ringStyle:(long long)a2;

- (void).cxx_destruct;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (id)initWithImageProvider:(id)a0 progressProvider:(id)a1 ringStyle:(long long)a2;

@end
