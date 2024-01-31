@class CLKProgressProvider, CLKImageProvider;

@interface CLKComplicationTemplateUtilitarianSmallProgressRingImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider;
@property (copy, nonatomic) CLKProgressProvider *progressProvider;
@property (nonatomic) long long ringStyle;

+ (id)templateWithImageProvider:(id)a0 progressProvider:(id)a1 ringStyle:(long long)a2;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithImageProvider:(id)a0 progressProvider:(id)a1 ringStyle:(long long)a2;

@end
