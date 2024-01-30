@class NSUUID, NSString;

@interface DNDSPairedDevice : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL supportsKettle;
@property (readonly, copy, nonatomic) NSUUID *pairingIdentifier;
@property (readonly, copy, nonatomic) NSString *pairingDataStore;
@property (readonly, nonatomic, getter=isIOS14EraOS) BOOL iOS14EraOS;
@property (nonatomic, getter=isICloudEnabled) BOOL iCloudEnabled;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *osBuild;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned long long deviceClass;
@property (readonly, nonatomic) unsigned long long syncProtocolVersion;
@property (readonly, nonatomic) unsigned long long syncServiceType;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithLocalDeviceIdentifier:(id)a0 deviceClass:(unsigned long long)a1 syncProtocolVersion:(unsigned long long)a2 iOS14EraOS:(BOOL)a3 pairingIdentifier:(id)a4 pairingDataStore:(id)a5;
- (id)initWithCloudDeviceIdentifier:(id)a0 deviceClass:(unsigned long long)a1 syncProtocolVersion:(unsigned long long)a2;

@end
