@class NSSet, CHRecognitionSessionResult;
@protocol CHStrokeGroupBasedVisualizationDelegate;

@interface CHStrokeGroupBasedVisualization : CHVisualization

@property (retain, nonatomic) CHRecognitionSessionResult *resultDrawn;
@property (copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers;
@property (nonatomic) id<CHStrokeGroupBasedVisualizationDelegate> delegate;
@property (readonly, nonatomic) BOOL newGroupsDefaultToActive;

- (void)dealloc;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dirtyRectForStrokeGroup:(id)a0;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_markStrokeGroupsAsActive:(id)a0;

@end
