@class HMFPairingIdentity, NSString, HMFWiFiNetworkInfo, NSData, NSNumber, HMFSoftwareVersion, HMDDevice;

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)_initWithObjectChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
