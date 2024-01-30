@interface ICPreviewLayoutManager : ICBaseLayoutManager

- (id)linkAttributesForLink:(id)a0 forCharacterAtIndex:(unsigned long long)a1;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)drawTodosForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)drawTodoItemForListRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphStyle:(id)a1 atOrigin:(struct CGPoint { double x0; double x1; })a2;
- (id)todoImageForParagraphStyle:(id)a0;

@end
