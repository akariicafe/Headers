@interface _BlastDoorDrawingStrokePoint : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) double force;
@property (nonatomic) double velocity;

- (id)init;
- (id)createDKStrokePoint;

@end
