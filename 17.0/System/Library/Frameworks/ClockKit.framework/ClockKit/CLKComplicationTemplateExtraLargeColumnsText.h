@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeColumnsText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider;
@property (nonatomic) long long column2Alignment;
@property (nonatomic) BOOL highlightColumn2;

+ (id)templateWithRow1Column1TextProvider:(id)a0 row1Column2TextProvider:(id)a1 row2Column1TextProvider:(id)a2 row2Column2TextProvider:(id)a3;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithRow1Column1TextProvider:(id)a0 row1Column2TextProvider:(id)a1 row2Column1TextProvider:(id)a2 row2Column2TextProvider:(id)a3;

@end
