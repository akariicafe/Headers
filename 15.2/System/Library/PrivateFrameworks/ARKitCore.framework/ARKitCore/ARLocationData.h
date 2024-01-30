@class NSString, CLLocation;

@interface ARLocationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) double undulation;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationLLA;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationECEF;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ecefFromlocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;

- (id)initWithLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)a0;
- (id)encodeToDictionary;
- (BOOL)isUndulationValid;
- (BOOL)isAltitudeValid;
- (void /* unknown type, empty encoding */)enuFromLocation:(id)a0;

@end
