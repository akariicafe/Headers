@interface SCNBoundingBox : NSObject

@property (nonatomic) struct SCNVector3 { float x; float y; float z; } min;
@property (nonatomic) struct SCNVector3 { float x; float y; float z; } max;

- (id)description;

@end
