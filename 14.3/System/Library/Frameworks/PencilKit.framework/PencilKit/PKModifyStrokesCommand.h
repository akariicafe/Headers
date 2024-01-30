@class NSArray;

@interface PKModifyStrokesCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) BOOL hide;

+ (id)commandForMakingStrokesVisible:(id)a0 drawing:(id)a1 hiding:(BOOL)a2;
+ (id)commandForErasingStrokes:(id)a0 drawing:(id)a1;
+ (id)commandForMakingStrokeVisible:(id)a0 drawing:(id)a1 hiding:(BOOL)a2;
+ (id)commandForErasingAllStrokesInDrawing:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)applyToDrawing:(id)a0;
- (id)invertedInDrawing:(id)a0;
- (id)initWithStrokes:(id)a0 drawingUUID:(id)a1 actionName:(id)a2 hiding:(BOOL)a3;

@end
