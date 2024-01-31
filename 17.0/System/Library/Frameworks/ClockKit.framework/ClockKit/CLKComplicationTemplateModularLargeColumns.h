@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate

@property (nonatomic) BOOL useNoColumnPadding;
@property (copy, nonatomic) CLKImageProvider *row1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider;
@property (copy, nonatomic) CLKImageProvider *row2ImageProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider;
@property (copy, nonatomic) CLKImageProvider *row3ImageProvider;
@property (copy, nonatomic) CLKTextProvider *row3Column1TextProvider;
@property (copy, nonatomic) CLKTextProvider *row3Column2TextProvider;
@property (nonatomic) long long column2Alignment;

+ (id)templateWithRow1Column1TextProvider:(id)a0 row1Column2TextProvider:(id)a1 row2Column1TextProvider:(id)a2 row2Column2TextProvider:(id)a3 row3Column1TextProvider:(id)a4 row3Column2TextProvider:(id)a5;
+ (id)templateWithRow1ImageProvider:(id)a0 row1Column1TextProvider:(id)a1 row1Column2TextProvider:(id)a2 row2ImageProvider:(id)a3 row2Column1TextProvider:(id)a4 row2Column2TextProvider:(id)a5 row3ImageProvider:(id)a6 row3Column1TextProvider:(id)a7 row3Column2TextProvider:(id)a8;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithRow1Column1TextProvider:(id)a0 row1Column2TextProvider:(id)a1 row2Column1TextProvider:(id)a2 row2Column2TextProvider:(id)a3 row3Column1TextProvider:(id)a4 row3Column2TextProvider:(id)a5;
- (id)initWithRow1ImageProvider:(id)a0 row1Column1TextProvider:(id)a1 row1Column2TextProvider:(id)a2 row2ImageProvider:(id)a3 row2Column1TextProvider:(id)a4 row2Column2TextProvider:(id)a5 row3ImageProvider:(id)a6 row3Column1TextProvider:(id)a7 row3Column2TextProvider:(id)a8;

@end
