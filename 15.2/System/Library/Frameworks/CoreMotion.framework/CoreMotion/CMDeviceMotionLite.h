@class NSString, CMAttitude;

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { double x; double y; double z; } rawAcceleration;
@property (readonly, nonatomic) struct { double x; double y; double z; } rawRotationRate;
@property (readonly, nonatomic) unsigned long long machTimestamp;
@property (readonly, nonatomic) float gyroTemperature;
@property (readonly, nonatomic) float compassTemperature;
@property (readonly, nonatomic) struct { double x; double y; double z; } rawMagneticField;
@property (readonly, nonatomic) struct { double x; double y; double z; } gravity;
@property (readonly, nonatomic) struct { double x; double y; double z; } userAcceleration;
@property (readonly, nonatomic) float tip;
@property (readonly, nonatomic) float tilt;
@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) struct { double x; double y; double z; } rotationRate;
@property (readonly, nonatomic, getter=isUsingCompass) BOOL usingCompass;
@property (readonly, copy, nonatomic) NSString *physicalDeviceUniqueID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDeviceMotionLite:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; struct { float x0; float x1; float x2; } x4; unsigned long long x5; BOOL x6; float x7; float x8; struct { float x0; float x1; float x2; } x9; unsigned char x10[3]; })a0 andDeviceID:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)debugDescription;

@end
