@interface FigFCRCALayerOutputNodeLayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererCALayerOutputNodeLayerInternal { id x0; struct CGImage *x1; double x2; id x3; id x4; BOOL x5; } *layerInternal;
}

- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setContents:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setCornerRadius:(double)a0;
- (void)setWindowOpacity:(double)a0;
- (void)dealloc;

@end
