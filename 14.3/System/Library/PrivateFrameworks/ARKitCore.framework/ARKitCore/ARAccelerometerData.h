@class NSString;

@interface ARAccelerometerData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) struct { double x; double y; double z; } acceleration;
@property (nonatomic) double temperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)a0;

@end
