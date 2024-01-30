@interface CHStrokeGroupBaselineLegacyVisualization : CHStrokeGroupBasedVisualization

- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_getOrientedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 length:(double *)a1 forStroke:(id)a2 atWritingDirectionIndex:(long long)a3 inGroup:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelBoundsForAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPath { } *)_newBaselinePathForStrokeGroup:(id)a0 outFirstPoint:(struct CGPoint { double x0; double x1; } *)a1 strokeProvider:(id)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_orientationTransformForStrokeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atWritingDirectionIndex:(long long)a1 inGroup:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dirtyRectForStrokeGroup:(id)a0;
- (long long)layeringPriority;

@end
