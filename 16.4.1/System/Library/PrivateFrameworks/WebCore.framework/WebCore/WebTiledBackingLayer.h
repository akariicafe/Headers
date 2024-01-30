@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { struct __compressed_pair<WebCore::TileController *, std::default_delete<WebCore::TileController>> { struct TileController *__value_; } __ptr_; } _tileController;
}

- (void)setContentsScale:(double)a0;
- (void)setOpaque:(BOOL)a0;
- (id)actionForKey:(id)a0;
- (BOOL)isOpaque;
- (id).cxx_construct;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplay;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (void)setBorderWidth:(double)a0;
- (void)dealloc;
- (double)contentsScale;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)invalidate;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)drawsAsynchronously;
- (void *)createTileController:(void *)a0;
- (void)setWantsDeepColorBackingStore:(BOOL)a0;
- (struct TiledBacking { void /* function */ **x0; } *)tiledBacking;
- (BOOL)wantsDeepColorBackingStore;

@end
