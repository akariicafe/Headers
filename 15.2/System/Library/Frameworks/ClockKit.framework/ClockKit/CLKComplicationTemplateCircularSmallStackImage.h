@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallStackImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

+ (id)templateWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;
+ (void)_imageSDKSize:(struct CGSize { double x0; double x1; } *)a0 deviceSize:(struct CGSize { double x0; double x1; } *)a1 forSDKVersion:(long long)a2;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;

@end
