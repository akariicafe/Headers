@class PKPhysicsBody;

@interface SKUICircleRepellor : NSObject

@property (nonatomic) double bufferSize;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (retain, nonatomic) PKPhysicsBody *physicsBody;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (id)description;

@end
