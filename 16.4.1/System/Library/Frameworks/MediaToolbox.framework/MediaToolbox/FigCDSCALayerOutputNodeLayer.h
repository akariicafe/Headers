@interface FigCDSCALayerOutputNodeLayer : FigBaseCALayer {
    struct OpaqueFigCDSCALayerOutputNodeLayerInternal { id x0; id x1; id x2; } *layerInternal;
}

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setContents:(id)a0;

@end
