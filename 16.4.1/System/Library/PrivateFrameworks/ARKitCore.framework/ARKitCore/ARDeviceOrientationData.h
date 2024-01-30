@class NSString, CMDeviceMotion;

@interface ARDeviceOrientationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CMDeviceMotion *deviceMotion;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { double m11; double m12; double m13; double m21; double m22; double m23; double m31; double m32; double m33; } rotationMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rotationMatrixENU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)grabNextFromReader:(id)a0 timestamp:(double *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)appendToWriter:(id)a0;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)a0;
- (id)initWithMotionData:(id)a0;
- (id)initWithTimestamp:(double)a0 rotationMatrix:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a1;

@end
