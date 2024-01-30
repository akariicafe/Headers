@class NSString, HAPBLEPeripheralInfo, NSNumber, NSMutableArray;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo;
@property (readonly, nonatomic) NSNumber *metadataVersion;
@property (readonly, nonatomic) NSString *pairingIdentifier;
@property (readonly, nonatomic) NSMutableArray *cachedServices;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)updateWithService:(id)a0;
- (id)initWithPairingIdentifier:(id)a0;
- (void)updateWithPeripheralInfo:(id)a0;
- (id)getCachedServiceWithUUID:(id)a0;

@end
