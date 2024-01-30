@class NSString, CHVisualizationManager;

@interface PKRecognitionOverlayView : UIView <CHVisualizationManagerDelegate>

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } drawingTransform;
@property (readonly, nonatomic) CHVisualizationManager *visualizationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualizationManager:(id)a1;
- (void)visualizationManager:(id)a0 needsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)visualizationManagerNeedsDisplay:(id)a0;

@end
