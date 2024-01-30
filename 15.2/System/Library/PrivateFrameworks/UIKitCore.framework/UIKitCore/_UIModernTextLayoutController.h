@class NSString, NSTextContentStorage, NSMutableSet, NSMapTable, NSTextLayoutManager;

@interface _UIModernTextLayoutController : _UITextLayoutController <NSTextLayoutManagerDelegate> {
    NSTextContentStorage *_textContentStorage;
    NSTextLayoutManager *_textLayoutManager;
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSMapTable *_textCanvasViews;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGhostedRange:(id)a0;
- (void)removeAllGhostedRanges;
- (id)textStorage;
- (id)annotatedSubstringForRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForTextRange:(id)a0;
- (id)textRangeForLineEnclosingPosition:(id)a0 effectiveAffinity:(long long)a1;
- (void)addAnnotationAttribute:(id)a0 value:(id)a1 forRange:(id)a2;
- (id)beginningOfDocument;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (id)validatedPositionForPosition:(id)a0;
- (id)attributedTextInRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insertionRectForPosition:(id)a0 typingAttributes:(id)a1 placeholderAttachment:(id)a2 textContainer:(id *)a3;
- (id)attributesAtPosition:(id)a0 inDirection:(long long)a1;
- (id)annotationAttribute:(id)a0 atPosition:(id)a1;
- (id)documentRange;
- (id)textLayoutManager:(id)a0 renderingAttributesForLink:(id)a1 atLocation:(id)a2 defaultAttributes:(id)a3;
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
- (id)textRangeForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)endOfDocument;
- (id)dequeueCanvasViewForTextContainer:(id)a0;
- (void)removeInvisibleRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForRange:(id)a0;
- (id)selectionRectsForRange:(id)a0 fromView:(id)a1 forContainerPassingTest:(id /* block */)a2;
- (void)setDocumentObscured:(BOOL)a0;
- (double)baselineOffsetForFirstGlyph;
- (void)requestTextGeometryAtPosition:(id)a0 typingAttributes:(id)a1 resultBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_updateSelectionWithTextRange:(id)a0 affinity:(long long)a1 typingAttributes:(id)a2;
- (id)_locationWithOffset:(long long)a0;
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
- (id)initWithTextStorage:(id)a0;
- (void)invalidateLayoutForRange:(id)a0;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateLayoutForSizeChangeOfTextContainer:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCharacterClusterAtIndex:(unsigned long long)a0 type:(long long)a1;
- (long long)affinityForPosition:(id)a0;
- (id)initWithTextContainer:(id)a0;
- (id)nearestPositionAtPoint:(struct CGPoint { double x0; double x1; })a0 inContainer:(id)a1;
- (id)textContainers;
- (void)removeRenderingAttributes:(id)a0 forRange:(id)a1;
- (void)setUnobscuredRange:(id)a0;

@end
