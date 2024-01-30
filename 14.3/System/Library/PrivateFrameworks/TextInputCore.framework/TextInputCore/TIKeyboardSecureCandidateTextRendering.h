@interface TIKeyboardSecureCandidateTextRendering : NSObject

+ (struct CGColor { } *)_newCgColorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)truncatedWidthsForItemWidths:(id)a0 availableWidth:(double)a1;
+ (BOOL)_textRunsHaveFixedFontSize:(id)a0;
+ (struct __CFAttributedString { } *)_newAttributedStringWithText:(id)a0 font:(struct __CTFont { } *)a1 color:(struct CGColor { } *)a2;
+ (void)_handleEllipsisTruncationForTextRuns:(id)a0 textRunResponses:(id)a1 inAvailableWidth:(double)a2;
+ (id)_requestLayoutForSimplifiedTextRuns:(id)a0 inWidthGroups:(id)a1 steps:(unsigned long long)a2;
+ (id)requestLayoutForTextRuns:(id)a0 inWidthGroups:(id)a1 steps:(unsigned long long)a2;
+ (double)_totalWidthForCell:(unsigned long long)a0 fromTextRunResponses:(id)a1;
+ (id)_defaultLayoutTraitsForTraits:(id)a0;
+ (BOOL)_isAllSingleLineStrings:(id)a0;
+ (struct CGColor { } *)_newCgColorWithTraitsColor:(id)a0;
+ (void)_drawLineFromCellAtIndex:(unsigned long long)a0 ofResponse:(id)a1 atYCoordinate:(double)a2 inContext:(struct CGContext { } *)a3 withAvailableWidth:(double)a4;
+ (void)_drawTwoLineCellsWithSecureHeaders:(id)a0 secureContents:(id)a1 layoutTraits:(id)a2 renderTraits:(id)a3 contexts:(struct __CFArray { } *)a4 availableWidth:(double)a5 truncationSentinel:(id)a6;
+ (BOOL)_drawSingleLineSecureHeaders:(id)a0 secureContents:(id)a1 layoutTraits:(id)a2 renderTraits:(id)a3 contexts:(struct __CFArray { } *)a4 availableWidth:(double)a5 truncationSentinel:(id)a6 abortInsteadOfTruncating:(BOOL)a7;
+ (void)drawSecureHeaders:(id)a0 secureContents:(id)a1 inContexts:(struct __CFArray { } *)a2 traits:(id)a3 truncationSentinel:(id)a4;

@end
