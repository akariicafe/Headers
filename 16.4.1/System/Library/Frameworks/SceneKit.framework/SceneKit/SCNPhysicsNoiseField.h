@interface SCNPhysicsNoiseField : SCNPhysicsField {
    double _smoothness;
    double _animationSpeed;
}

@property (nonatomic) double smoothness;
@property (nonatomic) double animationSpeed;

+ (BOOL)supportsSecureCoding;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *)_createField;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;

@end
