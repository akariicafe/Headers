@interface CHStrokeGroupClassificationVisualization : CHStrokeGroupingVisualization

- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)layeringPriority;
- (struct CGColor { } *)_newColorForStroke:(id)a0 inGroup:(id)a1;
- (id)_attributedStringFromString:(id)a0 withColor:(struct CGColor { } *)a1 font:(struct __CTFont { } *)a2 paragraphStyle:(struct __CTParagraphStyle { } *)a3;

@end
