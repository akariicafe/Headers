@interface FigCDSCALayer : FigBaseCALayer {
    struct OpaqueFigCDSCALayerInternal { id x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned char x2; void *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; id x7; } *layerInternal;
}

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setCallbacks:(id)a0 userEvent:(void /* function */ *)a1 viewportChanged:(void /* function */ *)a2 drawInContext:(void /* function */ *)a3;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)init;
- (void)clear:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSublayers;

@end
