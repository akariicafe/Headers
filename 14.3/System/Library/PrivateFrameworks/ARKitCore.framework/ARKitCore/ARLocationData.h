@class NSString, CLLocation;

@interface ARLocationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationLLA;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationECEF;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ecefFromlocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setLocation:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)a0;
- (void /* unknown type, empty encoding */)enuFromLocation:(id)a0;

@end
