@class NSString, NSData;

@interface BTMagicPairingSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bluetoothAddress;
@property (retain, nonatomic) NSData *masterKey;
@property (retain, nonatomic) NSData *masterHint;
@property (retain, nonatomic) NSData *accessoryKey;
@property (retain, nonatomic) NSData *accessoryHint;
@property (retain, nonatomic) NSData *encryptionKey;
@property (retain, nonatomic) NSData *irk;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *vendorID;
@property (retain, nonatomic) NSString *buttonModes;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *deviceIDFeatureBitsV1;
@property (retain, nonatomic) NSString *deviceIDFeatureBitsV2;
@property (retain, nonatomic) NSString *listeningServices;
@property (retain, nonatomic) NSString *spatialAudio;
@property (retain, nonatomic) NSString *optimizedBatteryCharging;
@property (retain, nonatomic) NSString *optimizedBatteryFullChargeDeadline;
@property (retain, nonatomic) NSString *ratchet;
@property (retain, nonatomic) NSString *reserved;
@property (retain, nonatomic) NSString *settingsMask;
@property (retain, nonatomic) NSString *supportedServices;
@property (retain, nonatomic) NSString *version;

+ (id)magicSettingsWithBluetoothAddress:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBluetoothAddress:(id)a0;

@end
