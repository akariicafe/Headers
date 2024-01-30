@protocol _UITextViewCanvasViewContext;

@interface _UITextViewCanvasView : _UITextCanvasView

@property (weak, nonatomic) id<_UITextViewCanvasViewContext> context;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_extendedGlyphRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 maxGlyphIndex:(unsigned long long)a1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
