@class NSDictionary;

@interface PKSliceStrokesCommand : PKModifyStrokesCommand

@property (readonly, nonatomic) NSDictionary *substrokes;

- (id)description;
- (void).cxx_destruct;
- (void)applyToDrawing:(id)a0;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1 substrokes:(id)a2 strokesHidden:(id)a3 hiding:(BOOL)a4;
- (id)invertedInDrawing:(id)a0;

@end
