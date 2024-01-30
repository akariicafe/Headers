@class NSUUID, NSString;

@interface DNDSPairedDevice : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL supportsKettle;
@property (readonly, copy, nonatomic) NSUUID *pairingIdentifier;
@property (readonly, copy, nonatomic) NSString *pairingDataStore;
@property (readonly, nonatomic, getter=isIOS14EraOS) BOOL iOS14EraOS;
@property (readonly, nonatomic) BOOL supportsSilenceLists;
@property (nonatomic, getter=isICloudEnabled) BOOL iCloudEnabled;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *osBuild;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned long long deviceClass;
@property (readonly, nonatomic) unsigned long long assertionSyncProtocolVersion;
@property (readonly, nonatomic) unsigned long long configurationSyncProtocolVersion;
@property (readonly, nonatomic) unsigned long long syncServiceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCloudDeviceIdentifier:(id)a0 deviceClass:(unsigned long long)a1 assertionSyncProtocolVersion:(unsigned long long)a2 configurationSyncProtocolVersion:(unsigned long long)a3 supportsSilenceLists:(BOOL)a4;
- (id)initWithLocalDeviceIdentifier:(id)a0 deviceClass:(unsigned long long)a1 assertionSyncProtocolVersion:(unsigned long long)a2 configurationSyncProtocolVersion:(unsigned long long)a3 iOS14EraOS:(BOOL)a4 supportsSilenceLists:(BOOL)a5 pairingIdentifier:(id)a6 pairingDataStore:(id)a7;

@end
