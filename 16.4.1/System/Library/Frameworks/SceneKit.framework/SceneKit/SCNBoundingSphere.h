@interface SCNBoundingSphere : NSObject

@property (nonatomic) struct SCNVector3 { float x; float y; float z; } center;
@property (nonatomic) double radius;

- (id)description;

@end
