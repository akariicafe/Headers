@protocol CHStrokeProvider;

@interface CHStrokeVisualization : CHVisualization

@property (retain, nonatomic) id<CHStrokeProvider> _strokeProviderDrawn;

- (void)dealloc;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)drawStrokesFromStrokeProvider:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;

@end
