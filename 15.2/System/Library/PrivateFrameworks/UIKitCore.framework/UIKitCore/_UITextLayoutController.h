@class UITextInputController, UIColor, NSArray, NSTextContainer, UITextRange, NSTextStorage, UITextPosition, CUIStyleEffectConfiguration, _UITextInputControllerLayoutManagerConnection, NSLayoutManager;
@protocol NSLayoutManagerDelegate;

@interface _UITextLayoutController : NSObject {
    _UITextInputControllerLayoutManagerConnection *_textInputControllerConnection;
}

@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (readonly, nonatomic) UITextInputController *textInputController;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) UITextRange *documentRange;
@property (nonatomic, getter=isDocumentObscured) BOOL documentObscured;
@property (retain, nonatomic) UITextRange *unobscuredRange;
@property (readonly, copy, nonatomic) NSArray *textContainers;
@property (readonly, nonatomic) NSTextContainer *firstTextContainer;
@property (retain, nonatomic) Class classicCanvasViewClass;
@property (readonly, nonatomic) BOOL canAccessLayoutManager;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (weak, nonatomic) id<NSLayoutManagerDelegate> layoutManagerDelegate;
@property (nonatomic) BOOL allowsNonContiguousLayout;
@property (nonatomic) BOOL drawsDebugBaselines;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (copy, nonatomic) CUIStyleEffectConfiguration *styleEffectConfiguration;

+ (id)classicControllerWithTextContainer:(id)a0 textStorage:(id)a1;
+ (id)layoutControllerWithTextContainer:(id)a0;
+ (id)modernControllerWithTextStorage:(id)a0;

- (void)addGhostedRange:(id)a0;
- (void)removeAllGhostedRanges;
- (id)annotatedSubstringForRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForTextRange:(id)a0;
- (id)textRangeForLineEnclosingPosition:(id)a0 effectiveAffinity:(long long)a1;
- (void)addAnnotationAttribute:(id)a0 value:(id)a1 forRange:(id)a2;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (id)validatedPositionForPosition:(id)a0;
- (id)attributedTextInRange:(id)a0;
- (id)nearestTextRangeAtPoint:(struct CGPoint { double x0; double x1; })a0 inContainer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insertionRectForPosition:(id)a0 typingAttributes:(id)a1 placeholderAttachment:(id)a2 textContainer:(id *)a3;
- (id)attributesAtPosition:(id)a0 inDirection:(long long)a1;
- (id)annotationAttribute:(id)a0 atPosition:(id)a1;
- (long long)baseWritingDirectionAtPosition:(id)a0;
- (void)resetFontForExtraBulletRendering;
- (void)ensureLayoutForTextContainer:(id)a0;
- (id)previewRendererForRange:(id)a0 unifyRects:(BOOL)a1;
- (void)addInvisibleRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)textContainerForPosition:(id)a0;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (id)positionFromPosition:(id)a0 offset:(long long)a1 affinity:(long long)a2;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (id)baselineCalculatorForView:(id)a0 typingAttributes:(id)a1;
- (id)textRangeForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)dequeueCanvasViewForTextContainer:(id)a0;
- (void)removeInvisibleRange:(id)a0;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForRange:(id)a0;
- (id)selectionRectsForRange:(id)a0 fromView:(id)a1 forContainerPassingTest:(id /* block */)a2;
- (double)baselineOffsetForFirstGlyph;
- (id)initWithTextContainer:(id)a0 textStorage:(id)a1;
- (void)requestTextGeometryAtPosition:(id)a0 typingAttributes:(id)a1 resultBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)enumerateTextLineFragmentsInRange:(id)a0 usingBlock:(id /* block */)a1;
- (void)addRenderingAttributes:(id)a0 forRange:(id)a1;
- (void)removeAnnotationAttribute:(id)a0 forRange:(id)a1;
- (id)validatedRangeForRange:(id)a0;
- (id)emptyTextRangeAtPosition:(id)a0;
- (id)positionWithOffset:(long long)a0 affinity:(long long)a1;
- (id)textRangeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTextContainer:(id)a1 layoutIfNeeded:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })usedRectForTextContainer:(id)a0;
- (id)cursorPositionAtPoint:(struct CGPoint { double x0; double x1; })a0 inContainer:(id)a1;
- (void)ensureLayoutForRange:(id)a0;
- (void)invalidateLayoutForRange:(id)a0;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateLayoutForSizeChangeOfTextContainer:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCharacterClusterAtIndex:(unsigned long long)a0 type:(long long)a1;
- (long long)affinityForPosition:(id)a0;
- (id)initWithTextContainer:(id)a0;
- (id)nearestPositionAtPoint:(struct CGPoint { double x0; double x1; })a0 inContainer:(id)a1;
- (void)removeRenderingAttributes:(id)a0 forRange:(id)a1;

@end
