@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackText : CLKComplicationTemplateGraphicCircular

@property (nonatomic) unsigned long long highlightMode;
@property (copy, nonatomic) CLKTextProvider *line1TextProvider;
@property (copy, nonatomic) CLKTextProvider *line2TextProvider;

+ (id)templateWithLine1TextProvider:(id)a0 line2TextProvider:(id)a1;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (BOOL)highlightLine2;
- (id)initPrivateWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)initWithLine1TextProvider:(id)a0 line2TextProvider:(id)a1;
- (void)setHighlightLine2:(BOOL)a0;

@end
