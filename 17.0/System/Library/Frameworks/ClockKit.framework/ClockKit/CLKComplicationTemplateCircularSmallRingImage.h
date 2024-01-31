@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallRingImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider;
@property (nonatomic) float fillFraction;
@property (nonatomic) long long ringStyle;

+ (void)_imageSDKSize:(struct CGSize { double x0; double x1; } *)a0 deviceSize:(struct CGSize { double x0; double x1; } *)a1 forSDKVersion:(long long)a2;
+ (id)templateWithImageProvider:(id)a0 fillFraction:(float)a1 ringStyle:(long long)a2;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithImageProvider:(id)a0 fillFraction:(float)a1 ringStyle:(long long)a2;

@end
