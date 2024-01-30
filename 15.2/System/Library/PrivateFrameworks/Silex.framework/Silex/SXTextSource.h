@class NSString, NSMutableIndexSet, SXTextSourceDefaults, NSLocale;
@protocol SXSmartFieldFactory, SXFontAttributesConstructor, SXTextStyleFontDescribing, SXDocumentLanguageProviding, SXTextSourceDataSource;

@interface SXTextSource : NSObject

@property (readonly, nonatomic) SXTextSourceDefaults *defaults;
@property (readonly, nonatomic) id<SXSmartFieldFactory> smartFieldFactory;
@property (retain, nonatomic) NSMutableIndexSet *deletedRangeOffsets;
@property (retain, nonatomic) NSMutableIndexSet *insertedRangeOffsets;
@property (retain, nonatomic) NSMutableIndexSet *rangesExcludedOfParagraphSpacing;
@property (readonly, nonatomic) id<SXFontAttributesConstructor> fontAttributeConstructor;
@property (readonly, nonatomic) id<SXTextStyleFontDescribing> defaultFontDescribing;
@property (readonly, nonatomic) id<SXDocumentLanguageProviding> documentLanguageProvider;
@property (readonly, weak, nonatomic) id<SXTextSourceDataSource> dataSource;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSLocale *locale;

- (id)description;
- (void).cxx_destruct;
- (void)applyStylingOnTextTangierStorage:(id)a0;
- (void)applyAdditionsOnTextTangierStorage:(id)a0;
- (id)initWithString:(id)a0 smartFieldFactory:(id)a1 dataSource:(id)a2 documentLanguageProvider:(id)a3 fontAttributesConstructor:(id)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)cleanString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInBounds:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 maxLength:(unsigned long long)a1;
- (id)fontDescriptionsForTextStyleFontDescription:(id)a0 defaultTextStyleFontDesciptions:(id)a1;
- (long long)fontSizeForTextStyle:(id)a0;
- (id)fontFaceForTextStyleFontDescription:(id)a0 defaultTextStyleFontDescription:(id)a1 fontAttributes:(id)a2 fontSize:(long long)a3;
- (id)attributesForTextStyle:(id)a0 onParagraphStyle:(id)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 resultingDropCapStyle:(id *)a3 textResizer:(id)a4 fontFace:(id)a5;
- (void)transform:(id)a0 forTextStyle:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)applyListStylingOnTextTangierStorage:(id)a0 usingAttributesMap:(id)a1;
- (id)characterStyleFromAttributes:(id)a0 context:(id)a1;
- (id)populateArray:(id)a0 withValue:(id)a1 forSize:(unsigned long long)a2;
- (int)listLabelTypeForListType:(unsigned long long)a0;
- (int)listNumberTypeForListType:(unsigned long long)a0;
- (long long)scaledFontSizeForFontSize:(long long)a0;
- (unsigned int)paragraphAlignmentForTextAlignment:(long long)a0;
- (id)randomColorWithAlpha:(double)a0;

@end
