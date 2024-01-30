@class NSUUID, NSString;

@interface PKUndoCommand : NSObject

@property (readonly, nonatomic) NSUUID *drawingUUID;
@property (readonly, nonatomic) NSString *actionName;

- (id)strokes;
- (void).cxx_destruct;
- (id)inverted;
- (void)applyToDrawing:(id)a0;
- (void)registerWithUndoManager:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)invertedInDrawing:(id)a0;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1;

@end
