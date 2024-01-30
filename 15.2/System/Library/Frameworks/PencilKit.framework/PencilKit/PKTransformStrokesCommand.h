@class NSArray;

@interface PKTransformStrokesCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } strokeTransform;

+ (id)commandForTransforming:(id)a0 drawing:(id)a1 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

- (id)description;
- (void).cxx_destruct;
- (void)applyToDrawing:(id)a0;
- (id)invertedInDrawing:(id)a0;
- (id)initWithStrokes:(id)a0 drawingUUID:(id)a1 actionName:(id)a2 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;

@end
