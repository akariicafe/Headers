@class NSString, WFSlotTemplateTextStorage;

@interface WFSlotTemplateLayoutManager : NSLayoutManager <NSLayoutManagerDelegate, WFTextAttachmentSizeProvider>

@property (nonatomic) WFSlotTemplateTextStorage *textStorage;
@property (readonly, nonatomic) unsigned long long numberOfLaidLines;
@property (nonatomic) BOOL isLayoutManagerForTextView;
@property (nonatomic) BOOL extendSlotBackgroundOffEdges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutManager:(id)a0 boundingBoxForControlGlyphAtIndex:(unsigned long long)a1 forTextContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 glyphPosition:(struct CGPoint { double x0; double x1; })a4 characterIndex:(unsigned long long)a5;
- (BOOL)layoutManager:(id)a0 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)a1;
- (long long)layoutManager:(id)a0 shouldUseAction:(long long)a1 forControlCharacterAtIndex:(unsigned long long)a2;
- (BOOL)layoutManager:(id)a0 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 baselineOffset:(inout double *)a3 inTextContainer:(id)a4 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (void)drawBackgroundForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)enumerateInsetEnclosingRectsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateEnclosingRectsForSlot:(id)a0 includeInsideSpacing:(BOOL)a1 insetForBackground:(BOOL)a2 usingBlock:(id /* block */)a3;
- (BOOL)shouldDrawTextAttachment:(id)a0 atCharacterIndex:(unsigned long long)a1;
- (double)preferredHeightForDrawingTextAttachment:(id)a0 atCharacterIndex:(unsigned long long)a1 withProposedHeight:(double)a2;
- (void)getPreferredLeadingSpacing:(double *)a0 trailingSpacing:(double *)a1 forDrawingTextAttachment:(id)a2 atCharacterIndex:(unsigned long long)a3;
- (void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 insetForBackground:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)getCalculatedLineHeight:(double *)a0 originalFontLineHeight:(double *)a1;

@end
