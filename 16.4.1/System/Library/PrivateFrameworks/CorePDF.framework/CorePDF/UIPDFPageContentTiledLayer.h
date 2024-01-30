@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer> {
    CALayer *_selectionLayer;
}

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void)setSelectionNeedsDisplay;

@end
