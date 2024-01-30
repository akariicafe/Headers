@class NSArray;

@interface PKModifyStrokeInkCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) NSArray *inks;
@property (readonly, nonatomic) NSArray *oldInks;

+ (id)commandForModifyingStrokes:(id)a0 drawing:(id)a1 inks:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)applyToDrawingReturnInverted:(id)a0;
- (void)applyToDrawing:(id)a0;
- (id)invertedInDrawing:(id)a0;
- (id)initWithStrokes:(id)a0 drawingUUID:(id)a1 actionName:(id)a2 inks:(id)a3 oldInks:(id)a4;

@end
