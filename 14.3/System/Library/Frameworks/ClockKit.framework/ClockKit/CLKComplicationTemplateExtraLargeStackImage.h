@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateExtraLargeStackImage : CLKComplicationTemplate

@property (nonatomic) unsigned long long highlightMode;
@property (copy, nonatomic) CLKImageProvider *line1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;
@property (nonatomic) BOOL highlightLine2;

+ (struct CGSize { double x0; double x1; })imageSize;
+ (id)templateWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (id)initPrivateWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (id)initWithLine1ImageProvider:(id)a0 line2TextProvider:(id)a1;

@end
