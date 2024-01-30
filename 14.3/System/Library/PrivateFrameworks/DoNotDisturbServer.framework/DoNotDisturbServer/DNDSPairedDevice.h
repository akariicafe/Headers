@class NSUUID, NSString;

@interface DNDSPairedDevice : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *pairingIdentifier;
@property (readonly, copy, nonatomic) NSString *pairingDataStore;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned long long deviceClass;
@property (readonly, nonatomic) unsigned long long syncProtocolVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0 deviceClass:(unsigned long long)a1 syncProtocolVersion:(unsigned long long)a2 pairingIdentifier:(id)a3 pairingDataStore:(id)a4;

@end
