@class NSString, NSUUID, NSData, NSNumber;

@interface HAPBLEPeripheral : HMFObject

@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSUUID *peripheralUUID;
@property (retain, nonatomic) NSNumber *hkType;
@property (retain, nonatomic) NSNumber *advInterval;
@property (retain, nonatomic) NSNumber *pairingStatusFlag;
@property (retain, nonatomic) NSString *pairingIdentifier;
@property (retain, nonatomic) NSNumber *category;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSNumber *compatibleVersion;
@property (copy, nonatomic) NSData *encryptedPayload;
@property (retain, nonatomic) NSNumber *averageRSSI;
@property (readonly, nonatomic) NSData *setupHash;
@property (nonatomic) double lastSeen;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)updateStateNumber:(id)a0;
- (BOOL)updateWithPeripheral:(id)a0;
- (id)initWithName:(id)a0 peripheralUUID:(id)a1 hkType:(id)a2 advInterval:(id)a3 pairingStatusFlag:(id)a4 pairingIdentifier:(id)a5 category:(id)a6 stateNumber:(id)a7 configNumber:(id)a8 hapBLECompatibleVersion:(id)a9 setupHash:(id)a10 encryptedPayload:(id)a11;
- (void)_resetAverageRSSI;

@end
