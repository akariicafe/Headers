@class NSUUID, HAPCharacteristicMetadata, NSNumber;

@interface HAPBLECharacteristicCache : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long characteristicProperties;
@property (retain, nonatomic) HAPCharacteristicMetadata *characteristicMetadata;
@property (readonly, nonatomic) NSUUID *characteristicUUID;
@property (readonly, nonatomic) NSNumber *characteristicInstanceId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCharacteristicUUID:(id)a0 instanceId:(id)a1 characteristicProperties:(unsigned long long)a2 characteristicMetadata:(id)a3;
- (void)updateWithCharacteristic:(id)a0;

@end
