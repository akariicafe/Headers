@class NSArray, NSUUID;

@interface PKModifyStrokesGroupIDCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) NSUUID *groupID;
@property (readonly, nonatomic) NSUUID *oldGroupID;

+ (id)commandForModifyingStrokes:(id)a0 drawing:(id)a1 groupID:(id)a2 actionName:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (id)applyToDrawingReturnInverted:(id)a0;
- (void)applyToDrawing:(id)a0;
- (id)invertedInDrawing:(id)a0;
- (id)initWithStrokes:(id)a0 drawingUUID:(id)a1 actionName:(id)a2 groupID:(id)a3 oldGroupID:(id)a4;

@end
