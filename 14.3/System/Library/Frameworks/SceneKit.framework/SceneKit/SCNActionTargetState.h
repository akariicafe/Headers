@interface SCNActionTargetState : NSObject

@property (nonatomic) struct SCNVector3 { float x; float y; float z; } position;
@property (nonatomic) struct SCNVector3 { float x; float y; float z; } euler;
@property (nonatomic) struct SCNVector3 { float x; float y; float z; } scale;
@property (nonatomic) struct SCNVector4 { float x; float y; float z; float w; } rotation;
@property (nonatomic) BOOL usesEuler;
@property (nonatomic) float opacity;

@end
