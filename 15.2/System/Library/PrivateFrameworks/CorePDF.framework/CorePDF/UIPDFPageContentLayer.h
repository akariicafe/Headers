@class CALayer;

@interface UIPDFPageContentLayer : CALayer <UIPDFSelectionLayer> {
    CALayer *_selectionLayer;
}

- (void)layoutSublayers;
- (id)init;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setSelectionNeedsDisplay;

@end
