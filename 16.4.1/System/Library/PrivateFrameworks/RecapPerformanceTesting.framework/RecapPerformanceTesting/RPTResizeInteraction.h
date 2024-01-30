@class RPTCoordinateSpaceConverter;

@interface RPTResizeInteraction : NSObject <_RPTCoordinateSpaces, RPTInteraction>

@property (nonatomic) struct CGPoint { double x; double y; } dragPoint;
@property (nonatomic) struct CGVector { double dx; double dy; } delta;
@property (readonly, nonatomic) struct CGSize { double width; double height; } initialSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } finalSize;
@property (nonatomic) BOOL shouldLift;
@property (nonatomic) BOOL shouldPress;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0 destinationSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithDragPoint:(struct CGPoint { double x0; double x1; })a0 delta:(struct CGVector { double x0; double x1; })a1 sourceSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithDragPoint:(struct CGPoint { double x0; double x1; })a0 sourceSize:(struct CGSize { double x0; double x1; })a1 destinationSize:(struct CGSize { double x0; double x1; })a2;
- (id)interactionByScalingBy:(double)a0;
- (void)invokeWithComposer:(id)a0 duration:(double)a1;
- (id)reversedInteraction;

@end
