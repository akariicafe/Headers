@interface PKSelectionInput : NSObject

@property (nonatomic) long long selectionType;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) long long inputType;

+ (id)inputWithType:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1 inputType:(long long)a2;

@end
