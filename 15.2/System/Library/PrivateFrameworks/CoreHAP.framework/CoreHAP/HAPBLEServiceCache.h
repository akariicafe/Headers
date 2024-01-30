@class NSArray, NSUUID, NSMutableArray, NSNumber;

@interface HAPBLEServiceCache : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long serviceInstanceOrder;
@property (nonatomic) unsigned long long serviceProperties;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSMutableArray *cachedCharacteristics;
@property (readonly, nonatomic) NSUUID *serviceUUID;
@property (readonly, nonatomic) NSNumber *serviceInstanceId;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)updateWithService:(id)a0;
- (void)updateWithCharacteristic:(id)a0;
- (id)initWithServiceUUID:(id)a0 instanceId:(id)a1 instanceOrder:(unsigned long long)a2 serviceProperties:(unsigned long long)a3 linkedServices:(id)a4;

@end
