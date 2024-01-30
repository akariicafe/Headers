@class NSDictionary;
@protocol NSCoreTypesetterDelegateInternal, NSCoreTypesetterDelegate;

@interface NSCoreTypesetter : NSTypesetter {
    double _lineFragmentOriginYOffset;
    id<NSCoreTypesetterDelegateInternal> _delegate;
    BOOL _delegateSupportsTextContainer;
}

@property (class, readonly) BOOL _allowsFontOverridingTextAttachmentVerticalMetricsForStringDrawing;

@property (copy) NSDictionary *_extraLineFragmentAttributes;
@property long long layoutOrientation;
@property BOOL allowsFontOverridingTextAttachmentVerticalMetrics;
@property struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property struct CGSize { double width; double height; } textContainerSize;
@property long long maximumNumberOfLines;
@property long long containerBreakMode;
@property BOOL enforcesMinimumTextLineFragment;
@property BOOL wantsExtraLineFragment;
@property (copy) id /* block */ laidOutLineFragment;
@property (weak) id<NSCoreTypesetterDelegate> delegate;
@property BOOL usesDefaultHyphenation;
@property BOOL allowsFontSubstitutionAffectingVerticalMetrics;
@property BOOL limitsLayoutForSuspiciousContents;
@property (getter=isBeginningOfDocument) BOOL beginningOfDocument;
@property (copy) id /* block */ validateLineBreakIndex;

+ (void)_lineMetricsForAttributes:(id)a0 typesetterBehavior:(long long)a1 usesFontLeading:(BOOL)a2 applySpacings:(BOOL)a3 usesSystemFontLeading:(BOOL)a4 usesNegativeFontLeading:(BOOL)a5 layoutOrientation:(long long)a6 lineHeight:(double *)a7 baselineOffset:(double *)a8 spacing:(double *)a9;
+ (void)_minMaxPositionsForLineFragmentWithParagraphStyle:(id)a0 baseWidth:(double)a1 writingDirection:(long long)a2 isBeginningOfParagraph:(BOOL)a3 minPosition:(double *)a4 maxPosition:(double *)a5;
+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray { } *)a0 ascender:(double *)a1 descender:(double *)a2;

- (id)delegate;
- (const struct __CTLine { } *)_createLayoutLineFragmentStartingWithCharacterIndex:(inout long long *)a0 proposedLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 baseLineRef:(inout const struct __CTLine **)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 paragraphStyle:(id)a4 paragraphArbitrator:(id)a5 lineBreakMode:(long long)a6 hasAttachments:(BOOL)a7 lineFragmentRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a8 glyphOrigin:(out struct CGPoint { double x0; double x1; } *)a9 hyphenated:(out BOOL *)a10 forcedClusterBreak:(out BOOL *)a11;
- (struct { double x0; double x1; double x2; })_getLineMetricsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attributes:(id)a1 attributedString:(id)a2 applySpacing:(BOOL)a3 usesSystemFontLeading:(BOOL)a4 usesNegativeFontLeading:(BOOL)a5;
- (void)layout;
- (id)_paragraphStyleFromAttributes:(id)a0;
- (void)layoutWithYOrigin:(double)a0;
- (void)setDelegate:(id)a0;
- (BOOL)isSimpleRectangularTextContainerForStartingCharacterAtIndex:(long long)a0;
- (id)softHyphen;
- (void)dealloc;
- (void)endLine;
- (int)_NSFastDrawString:(id)a0 length:(unsigned long long)a1 attributes:(id)a2 paragraphStyle:(id)a3 typesetterBehavior:(long long)a4 lineBreakMode:(long long)a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 padding:(double)a7 graphicsContext:(id)a8 baselineRendering:(BOOL)a9 usesFontLeading:(BOOL)a10 usesScreenFont:(BOOL)a11 scrollable:(BOOL)a12 syncAlignment:(BOOL)a13 mirrored:(BOOL)a14 boundingRectPointer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a15 baselineOffsetPointer:(double *)a16 drawingContext:(id)a17;
- (id)init;
- (const struct __CTLine { } *)_createLineRefForParentLineRef:(inout const struct __CTLine **)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 availableWidth:(double)a2 offset:(double)a3 paragraphArbitrator:(id)a4 lineBreakMode:(long long)a5 hyphenated:(out BOOL *)a6 forcedClusterBreak:(out BOOL *)a7;
- (long long)_getFirstOverflowTabStopIndexInLineRef:(struct __CTLine { } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 string:(id)a2 paragraphStyle:(id)a3 availableWidth:(double)a4 offset:(double)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(long long)a1 writingDirection:(long long)a2 remainingRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (void)beginLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stringDrawingCoreTextEngineWithOriginalString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 padding:(double)a2 graphicsContext:(id)a3 forceClipping:(BOOL)a4 attributes:(id)a5 stringDrawingOptions:(long long)a6 drawingContext:(id)a7 stringDrawingInterface:(struct { unsigned char x0; long long x1; BOOL x2; BOOL x3; } *)a8;

@end
