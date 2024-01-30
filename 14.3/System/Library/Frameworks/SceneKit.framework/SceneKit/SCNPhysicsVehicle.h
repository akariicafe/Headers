@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {
    SCNPhysicsBody *_chassisBody;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
    struct btRaycastVehicle { void /* function */ **x0; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x0; int x1; int x2; struct btVector3 *x3; BOOL x4; } x1; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x0; int x1; int x2; struct btVector3 *x3; BOOL x4; } x2; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x0; int x1; int x2; float *x3; BOOL x4; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x0; int x1; int x2; float *x3; BOOL x4; } x4; int x5; int x6; float x7; float x8; struct btVehicleRaycaster *x9; float x10; float x11; float x12; struct btRigidBody *x13; int x14; int x15; int x16; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x0; int x1; int x2; struct btWheelInfo *x3; BOOL x4; } x17; } *_vehicle;
    double _speedKmHour;
}

@property (readonly, nonatomic) double speedInKilometersPerHour;
@property (readonly, nonatomic) NSArray *wheels;
@property (readonly, nonatomic) SCNPhysicsBody *chassisBody;

+ (BOOL)supportsSecureCoding;
+ (id)vehicleWithChassisBody:(id)a0 wheels:(id)a1;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (id)valueForKeyPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)physicsWorld;
- (void)_addToPhysicsWorld:(id)a0;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (void)_handleCreateIfNeeded:(BOOL)a0;
- (BOOL)hasReferenceToPhysicsBody:(id)a0;
- (struct btRaycastVehicle { void /* function */ **x0; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x0; int x1; int x2; struct btVector3 *x3; BOOL x4; } x1; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x0; int x1; int x2; struct btVector3 *x3; BOOL x4; } x2; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x0; int x1; int x2; float *x3; BOOL x4; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x0; int x1; int x2; float *x3; BOOL x4; } x4; int x5; int x6; float x7; float x8; struct btVehicleRaycaster *x9; float x10; float x11; float x12; struct btRigidBody *x13; int x14; int x15; int x16; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x0; int x1; int x2; struct btWheelInfo *x3; BOOL x4; } x17; } *)btVehicle;
- (void)applyEngineForce:(double)a0 forWheelAtIndex:(long long)a1;
- (void)setSteeringAngle:(double)a0 forWheelAtIndex:(long long)a1;
- (void)applyBrakingForce:(double)a0 forWheelAtIndex:(long long)a1;
- (void)_initializeWheelsArray;
- (id)initWithChassisBody:(id)a0 wheels:(id)a1;
- (void)_createWheel:(id)a0;
- (id)wheelAtIndex:(unsigned long long)a0;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)a0;

@end
