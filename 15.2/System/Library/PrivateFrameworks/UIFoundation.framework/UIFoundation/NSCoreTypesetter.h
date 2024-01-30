@class NSDictionary;
@protocol NSCoreTypesetterDelegate;

@interface NSCoreTypesetter : NSTypesetter

@property (class, readonly) BOOL _allowsFontOverridingTextAttachmentVerticalMetricsForStringDrawing;

@property (copy) NSDictionary *_extraLineFragmentAttributes;
@property long long layoutOrientation;
@property BOOL allowsFontOverridingTextAttachmentVerticalMetrics;
@property struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property struct CGSize { double width; double height; } textContainerSize;
@property BOOL wantsExtraLineFragment;
@property (copy) id /* block */ laidOutLineFragment;
@property (weak) id<NSCoreTypesetterDelegate> delegate;
@property BOOL usesDefaultHyphenation;
@property BOOL allowsFontSubstitutionAffectingVerticalMetrics;
@property BOOL limitsLayoutForSuspiciousContents;
@property (copy) id /* block */ validateLineBreakIndex;

+ (void)_lineMetricsForAttributes:(id)a0 typesetterBehavior:(long long)a1 usesFontLeading:(BOOL)a2 applySpacings:(BOOL)a3 usesSystemFontLeading:(BOOL)a4 usesNegativeFontLeading:(BOOL)a5 layoutOrientation:(long long)a6 lineHeight:(double *)a7 baselineOffset:(double *)a8 spacing:(double *)a9;
+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray { } *)a0 ascender:(double *)a1 descender:(double *)a2;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stringDrawingCoreTextEngineWithOriginalString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 padding:(double)a2 graphicsContext:(id)a3 forceClipping:(BOOL)a4 attributes:(id)a5 stringDrawingOptions:(long long)a6 drawingContext:(id)a7 stringDrawingInterface:(struct { unsigned char x0; long long x1; BOOL x2; BOOL x3; } *)a8;
- (int)_NSFastDrawString:(id)a0 length:(unsigned long long)a1 attributes:(id)a2 paragraphStyle:(id)a3 typesetterBehavior:(long long)a4 lineBreakMode:(long long)a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 padding:(double)a7 graphicsContext:(id)a8 baselineRendering:(BOOL)a9 usesFontLeading:(BOOL)a10 usesScreenFont:(BOOL)a11 scrollable:(BOOL)a12 syncAlignment:(BOOL)a13 mirrored:(BOOL)a14 boundingRectPointer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a15 baselineOffsetPointer:(double *)a16 drawingContext:(id)a17;
- (id)softHyphen;
- (void).cxx_destruct;
- (id)init;
- (void)layout;
- (void)dealloc;
- (struct { double x0; double x1; double x2; })_getLineMetricsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attributes:(id)a1 attributedString:(id)a2 applySpacing:(BOOL)a3 usesSystemFontLeading:(BOOL)a4 usesNegativeFontLeading:(BOOL)a5;

@end
