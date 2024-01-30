@class NSString;

@interface ARMagnetometerData : NSObject <ARMutableSensorData, ARMetadataWrapperCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) struct { double x; double y; double z; } magneticField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)a0;

@end
