@interface ICASDrawingActionType : NSObject <AADataType>

@property (readonly, nonatomic) long long drawingActionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithDrawingActionType:(long long)a0;

@end
