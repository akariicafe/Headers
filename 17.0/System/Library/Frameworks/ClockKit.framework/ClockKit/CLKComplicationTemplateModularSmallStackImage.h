@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularSmallStackImage : CLKComplicationTemplate

@property (nonatomic) unsigned long long highlightMode;
@property (copy, nonatomic) CLKImageProvider *line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;
@property (nonatomic) BOOL highlightLine2;

+ (id)templateWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;
+ (void)imageSDKSize:(struct CGSize { double x0; double x1; } *)a0 deviceSize:(struct CGSize { double x0; double x1; } *)a1 forSDKVersion:(long long)a2;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initPrivateWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)initWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;

@end
