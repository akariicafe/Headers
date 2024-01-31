@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate

@property (nonatomic) BOOL useNoColumnPadding;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider;
@property (nonatomic) long long column2Alignment;

+ (id)templateWithHeaderTextProvider:(id)a0 row1Column1TextProvider:(id)a1 row1Column2TextProvider:(id)a2 row2Column1TextProvider:(id)a3 row2Column2TextProvider:(id)a4;
+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 row1Column1TextProvider:(id)a2 row1Column2TextProvider:(id)a3 row2Column1TextProvider:(id)a4 row2Column2TextProvider:(id)a5;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 row1Column1TextProvider:(id)a2 row1Column2TextProvider:(id)a3 row2Column1TextProvider:(id)a4 row2Column2TextProvider:(id)a5;
- (id)initWithHeaderTextProvider:(id)a0 row1Column1TextProvider:(id)a1 row1Column2TextProvider:(id)a2 row2Column1TextProvider:(id)a3 row2Column2TextProvider:(id)a4;

@end
