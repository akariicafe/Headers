@class NSString, CMDeviceMotion;

@interface ARDeviceOrientationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CMDeviceMotion *deviceMotion;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { double m11; double m12; double m13; double m21; double m22; double m23; double m31; double m32; double m33; } rotationMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rotationMatrixENU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)a0;

@end
