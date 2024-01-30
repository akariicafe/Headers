@interface FigFCRCALayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererCALayerInternal { id x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; void *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; id x6; } *layerInternal;
}

- (void)setCallbacks:(id)a0 userEvent:(void /* function */ *)a1 viewportChanged:(void /* function */ *)a2 drawInContext:(void /* function */ *)a3;
- (void)layoutSublayers;
- (void)compose;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)clear:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
