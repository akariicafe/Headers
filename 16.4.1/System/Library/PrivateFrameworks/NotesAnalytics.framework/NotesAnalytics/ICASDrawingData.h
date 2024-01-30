@class NSString, ICASDrawingActionType, ICASDrawingTool;

@interface ICASDrawingData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASDrawingActionType *drawingActionType;
@property (readonly, nonatomic) ICASDrawingTool *drawingTool;
@property (readonly, nonatomic) NSString *drawingID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDrawingActionType:(id)a0 drawingTool:(id)a1 drawingID:(id)a2;

@end
