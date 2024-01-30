@class TSDBezierPath;

@interface TSWPRenderer : NSObject {
    struct CGContext { } *_context;
}

@property (nonatomic) BOOL flipShadows;
@property (nonatomic) double viewScale;
@property (retain, nonatomic) TSDBezierPath *interiorClippingPath;
@property (nonatomic) BOOL preventClipToColumn;

+ (struct __CTFont { } *)invisiblesFont;

- (void)dealloc;
- (id)initWithContext:(struct CGContext { } *)a0;
- (BOOL)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)a0 state:(const void *)a1;
- (struct CGSize { double x0; double x1; })convertSizeToDeviceSpace:(struct CGSize { double x0; double x1; })a0;
- (void)didRenderFragments;
- (void)drawAdornmentRects:(const void *)a0 forColumn:(id)a1 foreground:(BOOL)a2;
- (void)drawFragment:(const void *)a0 updateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawingState:(const void *)a2 runState:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; id x1; double x2; id x3[3]; unsigned int x4; struct TSWPDrawingState *x5; id x6; id x7; id x8; struct __CTFont *x9; struct CGColor *x10; id x11; BOOL x12; int x13; double x14; struct CGColor *x15; double x16; } *)a3 lineDrawFlags:(unsigned int)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getClipBoundingBox;
- (void)p_calculateMarkAdornments:(void *)a0 drawingState:(const void *)a1 lineFragment:(const void *)a2;
- (void)p_drawAdornmentGlyphs:(const void *)a0 lineFragment:(const void *)a1 state:(const void *)a2;
- (void)p_drawAdornmentLine:(const struct TSWPAdornmentLine { struct CGPoint { double x0; double x1; } x0; double x1; struct CGColor *x2; double x3; unsigned int x4; int x5; int x6; double x7; BOOL x8; id x9; } *)a0 drawingState:(const void *)a1 lineFragment:(const void *)a2 lineFragmentStart:(struct CGPoint { double x0; double x1; })a3 vertical:(BOOL)a4;
- (void)p_drawAdornmentLineBackgroundRect:(const struct TSWPAdornmentLine { struct CGPoint { double x0; double x1; } x0; double x1; struct CGColor *x2; double x3; unsigned int x4; int x5; int x6; double x7; BOOL x8; id x9; } *)a0 lineDrawFlags:(unsigned int)a1 drawingState:(const void *)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)p_drawAdornments:(const void *)a0 lineFragment:(const void *)a1 state:(const void *)a2;
- (void)p_drawAttachmentAdornments:(const void *)a0 lineFragment:(const void *)a1 state:(const void *)a2;
- (void)p_drawAttachmentGlyphAtPosition:(struct { unsigned long long x0; double x1; })a0 fragment:(const void *)a1;
- (void)p_drawAutocorrectionMarkingsFragment:(const void *)a0 drawingState:(const void *)a1;
- (void)p_drawDictationMarkingsFragment:(const void *)a0 drawingState:(const void *)a1;
- (void)p_drawHiddenDeletionsAdornments:(const void *)a0 lineFragment:(const void *)a1 state:(const void *)a2;
- (void)p_drawInvisiblesAdornments:(const void *)a0 lineFragment:(const void *)a1 state:(const void *)a2;
- (void)p_drawInvisiblesBreakLine:(const struct TSWPAdornmentLine { struct CGPoint { double x0; double x1; } x0; double x1; struct CGColor *x2; double x3; unsigned int x4; int x5; int x6; double x7; BOOL x8; id x9; } *)a0 lineFragment:(const void *)a1 state:(const void *)a2;
- (void)p_drawListLabelForFragment:(const void *)a0 drawingState:(const void *)a1 lineDrawFlags:(unsigned int)a2;
- (void)p_drawMisspelledWordMarkingsFragment:(const void *)a0 drawingState:(const void *)a1;
- (void)p_drawTextInRunsForLine:(struct __CTLine { } *)a0 fragment:(const void *)a1 state:(const void *)a2 tateChuYoko:(BOOL)a3 baseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 isFirstLineRef:(BOOL)a5;
- (void)p_drawUngrammaticMarkingsFragment:(const void *)a0 drawingState:(const void *)a1;
- (void)p_drawWordMarkingsForFragment:(const void *)a0 color:(id)a1 ranges:(const void *)a2 suppressRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 drawingState:(const void *)a4;
- (BOOL)p_shouldClipFragment:(const void *)a0 drawingState:(const void *)a1 lineDrawFlags:(unsigned int)a2 updateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (void)p_strokeLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 width:(double)a2;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 width:(double)a2;
- (void)willRenderFragmentsWithDrawingState:(const void *)a0;

@end
