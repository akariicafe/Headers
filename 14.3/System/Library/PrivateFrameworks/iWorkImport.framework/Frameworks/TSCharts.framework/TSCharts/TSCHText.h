@interface TSCHText : NSObject {
    Class _tswpTextClass;
}

@property (nonatomic) BOOL textColorShouldBeBlack;

+ (void)clearCachesForDocumentRoot:(id)a0;
+ (id)sharedText;
+ (id)sharedInteriorWrappingText;
+ (struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; })initializeTextLayoutResults;
+ (BOOL)shouldLayoutTextForWrapWidth:(double)a0 textLayoutProperties:(id)a1;

- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 viewScale:(double)a5;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 viewScale:(double)a3;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 atPosition:(struct CGPoint { double x0; double x1; })a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 viewScale:(double)a5;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 atPosition:(struct CGPoint { double x0; double x1; })a3 viewScale:(double)a4;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6 layoutProperties:(id)a7 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a8;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 viewScale:(double)a5 layoutProperties:(id)a6 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a7;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 viewScale:(double)a5 layoutProperties:(id)a6;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 layoutProperties:(id)a4 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2 wrapWidth:(double)a3 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 layoutProperties:(id)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2 wrapWidth:(double)a3 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (const struct __CTFont { } *)retainedCTFontForParagraphStyle:(id)a0;
- (id)initWithTSWPTextClass:(Class)a0;
- (id)p_wpTextForParagraphStyle:(id)a0 text:(id)a1 textBlack:(BOOL)a2 textCache:(id)a3 cacheKey:(id)a4;
- (id)p_newWPColumnForText:(id)a0 wpTextObject:(id)a1 wrapWidth:(double)a2 layoutProperties:(id)a3;
- (id)p_wpTextForParagraphStyle:(id)a0 text:(id)a1 textBlack:(BOOL)a2 textCache:(id)a3;
- (id)p_wpColumnForText:(id)a0 paragraphStyle:(id)a1 textBlack:(BOOL)a2 wrapWidth:(double)a3 textCache:(id)a4 layoutProperties:(id)a5;
- (id)p_textCacheForParagraphStyle:(id)a0;
- (id)p_wpStorageForAttributedString:(const struct __CFAttributedString { } *)a0 paragraphStyle:(id)a1;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 checkNumberTemplates:(BOOL)a4;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 checkNumberTemplates:(BOOL)a4 layoutProperties:(id)a5 outTextLayoutResults:(struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; } *)a6;
- (BOOL)p_styleSupportsEqualDigits:(id)a0 textCache:(id)a1;
- (struct CGSize { double x0; double x1; })p_sizeForNumberTemplate:(id)a0 paragraphStyle:(id)a1 textCache:(id)a2 layoutProperties:(id)a3;
- (struct TSCHTextLayoutResults { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; BOOL x2; })textLayoutResultsForColumn:(id)a0;
- (void)drawTextIntoContext:(struct CGContext { } *)a0 position:(struct CGPoint { double x0; double x1; })a1 textEngine:(id)a2 column:(id)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 viewScale:(double)a5;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 wrapWidth:(double)a3 atPosition:(struct CGPoint { double x0; double x1; })a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 viewScale:(double)a6 layoutProperties:(id)a7;
- (struct CGSize { double x0; double x1; })measureAttributedString:(const struct __CFAttributedString { } *)a0 paragraphStyle:(id)a1 outErasableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (struct CGSize { double x0; double x1; })measureText:(id)a0 paragraphStyle:(id)a1 wrapWidth:(double)a2 layoutProperties:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1 paragraphStyle:(id)a2;
- (void)drawAttributedString:(const struct __CFAttributedString { } *)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 atPosition:(struct CGPoint { double x0; double x1; })a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 viewScale:(double)a5;
- (void)drawText:(id)a0 paragraphStyle:(id)a1 intoContext:(struct CGContext { } *)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 viewScale:(double)a4;

@end
