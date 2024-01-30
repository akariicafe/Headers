@class NSDictionary, NSString, CUWiFiDevice, HMFUnfairLock, NSData, NSNumber, NSUUID;

@interface HAPWACAccessory : HMFObject

@property (readonly, nonatomic) CUWiFiDevice *cuWiFiDevice;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (nonatomic) double discoveryTime;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSNumber *wacCategory;
@property (readonly, nonatomic) NSNumber *rssi;
@property (readonly, nonatomic) NSData *bssid;
@property (readonly, nonatomic) NSString *ssid;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) NSDictionary *rawScanResult;
@property (readonly, nonatomic) BOOL supportsAirPlay;
@property (readonly, nonatomic) BOOL supportsLegacyWAC;
@property (readonly, nonatomic) BOOL supportsWAC2;
@property (readonly, nonatomic) BOOL supportsTokenAuth;
@property (readonly, nonatomic) BOOL supportsCertAuth;
@property (readonly, nonatomic) BOOL requiresOwnershipToken;
@property (readonly, nonatomic) BOOL isHomeKitAccessory;
@property (readonly, nonatomic) BOOL isAirPlayAccessory;
@property (readonly, nonatomic) unsigned long long supportedWiFiBands;
@property (readonly, nonatomic) BOOL homeKitPaired;
@property (readonly, nonatomic) BOOL pairSetupWAC;
@property (readonly, nonatomic) unsigned long long authFeatures;
@property (readonly, nonatomic) unsigned long long version;

- (void)updateWithHAPWACAccessory:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWiFiDevice:(id)a0;
- (void)__setupSupportedFlags:(unsigned int)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 category:(id)a2 ssid:(id)a3 deviceId:(id)a4 flags:(unsigned int)a5;

@end
