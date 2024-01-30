@class NSSet, CHRecognitionSessionResult;
@protocol CHStrokeGroupBasedVisualizationDelegate;

@interface CHStrokeGroupBasedVisualization : CHVisualization

@property (retain, nonatomic) CHRecognitionSessionResult *resultDrawn;
@property (copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers;
@property (weak, nonatomic) id<CHStrokeGroupBasedVisualizationDelegate> delegate;
@property (readonly, nonatomic) BOOL newGroupsDefaultToActive;

- (void).cxx_destruct;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_markStrokeGroupsAsActive:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dirtyRectForStrokeGroup:(id)a0;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
