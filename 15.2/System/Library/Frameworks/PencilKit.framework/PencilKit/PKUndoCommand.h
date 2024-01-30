@class NSUUID, NSString;

@interface PKUndoCommand : NSObject

@property (readonly, nonatomic) NSUUID *drawingUUID;
@property (copy, nonatomic) NSString *actionName;
@property (readonly, nonatomic) BOOL changesVisibleStrokes;

- (id)strokes;
- (void).cxx_destruct;
- (id)inverted;
- (void)registerWithUndoManager:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)applyToDrawingReturnInverted:(id)a0;
- (void)applyToDrawing:(id)a0;
- (id)invertedInDrawing:(id)a0;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1 changesVisibleStrokes:(BOOL)a2;

@end
