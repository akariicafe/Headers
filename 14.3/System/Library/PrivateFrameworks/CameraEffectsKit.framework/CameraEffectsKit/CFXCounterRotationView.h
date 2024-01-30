@interface CFXCounterRotationView : UIView

@property (nonatomic) double zRotation;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;

+ (Class)layerClass;

- (id)snapshotLayer;

@end
