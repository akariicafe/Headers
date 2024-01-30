@interface SBIconDraggingEditContext : NSObject

@property (retain, nonatomic) id draggingUniqueIdentifier;
@property (nonatomic) struct CGPoint { double x; double y; } enteredScreenLocation;
@property (nonatomic) BOOL enteredScreenLocationNeedsUpdate;

- (void).cxx_destruct;

@end
