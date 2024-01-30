@interface TSCHReferenceLineRenderer : TSCHRenderer

- (void)addSelection:(id)a0 toCGPath:(struct CGPath { } *)a1 useWrapWidth:(BOOL)a2;
- (BOOL)canRenderSelectionPath:(id)a0;
- (int)chunkPlane;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_renderLabelsIntoContext:(struct CGContext { } *)a0 forRefLineLabelsLayout:(id)a1;
- (void)p_renderLabelsIntoContext:(struct CGContext { } *)a0 forRefLineLabelsLayout:(id)a1 forSelection:(id)a2;
- (void)p_renderLinesIntoContext:(struct CGContext { } *)a0 linesToRender:(id)a1;
- (void)renderIntoContext:(struct CGContext { } *)a0 selection:(id)a1;

@end
