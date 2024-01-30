@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect

- (void)update;
- (void)updateColor:(unsigned long long)a0;
- (void)addSelection:(id)a0;
- (void)_generateRects;
- (id)initWithPDFPageLayer:(id)a0;
- (void)setSelections:(id)a0;

@end
