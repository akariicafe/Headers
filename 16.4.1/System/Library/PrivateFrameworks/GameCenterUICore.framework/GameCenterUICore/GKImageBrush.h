@interface GKImageBrush : GKThemeBrush

@property (copy, nonatomic) id /* block */ inputTransform;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 input:(id)a2;
- (double)scaleForInput:(id)a0;

@end
