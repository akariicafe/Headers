@interface TSCHText : NSObject {
    Class _tswpTextClass;
}

@property (nonatomic) BOOL textColorShouldBeBlack;

+ (void)clearCachesForDocumentRoot:(id)a0;
+ (struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; })initializeTextLayoutResults;
+ (id)sharedInteriorWrappingText;
+ (id)sharedText;
+ (BOOL)shouldLayoutTextForWrapWidth:(double)a0 textLayoutProperties:(id)a1;

- (void)drawTextIntoContext:(struct CGContext { } *)a0 position:(struct CGPoint { double x0; double x1; })a1 textEngine:(id)a2 column:(id)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 viewScale:(double)a5;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 atPosition:(struct CGPoint { double x0; double x1; })a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 viewScale:(double)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2 wrapWidth:(double)a3 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (void)drawAttributedString:(const struct __CFAttributedString { } *)a0 paragraphStyle:(id)a1 styleProvidingSource:(id)a2 intoContext:(struct CGContext { } *)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 atPosition:(struct CGPoint { double x0; double x1; })a3 viewScale:(double)a4;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 viewScale:(double)a4;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 viewScale:(double)a3;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6 layoutProperties:(id)a7;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6 layoutProperties:(id)a7 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a8;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6 layoutProperties:(id)a7 styleProvidingSource:(id)a8 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a9;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 viewScale:(double)a5;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 viewScale:(double)a5 layoutProperties:(id)a6;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 viewScale:(double)a5 layoutProperties:(id)a6 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a7;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2 wrapWidth:(double)a3 layoutProperties:(id)a4 styleProvidingSource:(id)a5 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6;
- (id)initWithTSWPTextClass:(Class)a0;
- (struct CGSize { double x0; double x1; })measureAttributedString:(const struct __CFAttributedString { } *)a0 paragraphStyle:(id)a1 styleProvidingSource:(id)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 checkNumberTemplates:(BOOL)a3 layoutProperties:(id)a4 styleProvidingSource:(id)a5 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a7;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 layoutProperties:(id)a3;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 checkNumberTemplates:(BOOL)a4;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 layoutProperties:(id)a4 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a5;
- (id)p_newWPColumnForText:(id)a0 wpTextObject:(id)a1 wrapWidth:(double)a2 layoutProperties:(id)a3;
- (struct CGSize { double x0; double x1; })p_sizeForNumberTemplate:(id)a0 paragraphStyle:(id)a1 styleProvidingSource:(id)a2 textCache:(id)a3 layoutProperties:(id)a4;
- (BOOL)p_styleSupportsEqualDigits:(id)a0 textCache:(id)a1;
- (id)p_textCacheForParagraphStyle:(id)a0 styleProvidingSource:(id)a1;
- (id)p_wpColumnForText:(id)a0 paragraphStyle:(id)a1 textBlack:(BOOL)a2 wrapWidth:(double)a3 styleProvidingSource:(id)a4 textCache:(id)a5 layoutProperties:(id)a6;
- (id)p_wpStorageForAttributedString:(const struct __CFAttributedString { } *)a0 paragraphStyle:(id)a1;
- (id)p_wpTextForParagraphStyle:(id)a0 text:(id)a1 textBlack:(BOOL)a2 styleProvidingSource:(id)a3 cacheKey:(id)a4 textCache:(id)a5;
- (const struct __CTFont { } *)retainedCTFontForParagraphStyle:(id)a0;
- (struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; })textLayoutResultsForColumn:(id)a0;

@end
