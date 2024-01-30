@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding> {
    SCNNode *_node;
    SCNPhysicsVehicle *_vehicle;
    int _wheelIndex;
    double _suspensionStiffness;
    double _suspensionCompression;
    double _suspensionDamping;
    double _maximumSuspensionTravel;
    double _frictionSlip;
    double _maximumSuspensionForce;
    struct SCNVector3 { float x; float y; float z; } _connectionPosition;
    struct SCNVector3 { float x; float y; float z; } _steeringAxis;
    struct SCNVector3 { float x; float y; float z; } _axle;
    double _radius;
    double _suspensionRestLength;
    BOOL _isFront;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) SCNNode *node;
@property double suspensionStiffness;
@property double suspensionCompression;
@property double suspensionDamping;
@property double maximumSuspensionTravel;
@property double frictionSlip;
@property double maximumSuspensionForce;
@property struct SCNVector3 { float x0; float x1; float x2; } connectionPosition;
@property struct SCNVector3 { float x0; float x1; float x2; } steeringAxis;
@property struct SCNVector3 { float x0; float x1; float x2; } axle;
@property double radius;
@property double suspensionRestLength;

+ (id)wheelWithNode:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setNode:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (BOOL)isFront;
- (void)encodeWithCoder:(id)a0;
- (void)setIsFront:(BOOL)a0;
- (void)_setVehicle:(id)a0;
- (void)_setWheelIndex:(int)a0;

@end
