@class HMFPairingIdentity, NSString, HMFWiFiNetworkInfo, NSData, NSNumber, HMFSoftwareVersion, HMDDevice;

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSData *loggedInAccount;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;
@property (retain, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (retain, nonatomic) NSNumber *supportedStereoPairVersions;

+ (id)properties;
+ (id)appleMediaAccessoryModelWithChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;
+ (id)homePodAccessoryModelWithChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

- (id)_initWithObjectChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
