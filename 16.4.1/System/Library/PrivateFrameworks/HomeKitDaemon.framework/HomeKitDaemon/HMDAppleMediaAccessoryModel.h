@class NSData, NSString, NSUUID, HMFPairingIdentity, HMDDevice, HMFWiFiNetworkInfo, HMDDeviceAddress, HMFSoftwareVersion, NSNumber;

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
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (retain, nonatomic) NSNumber *variant;
@property (retain, nonatomic) NSData *accessoryCapabilities;
@property (retain, nonatomic) HMDDeviceAddress *deviceAddress;
@property (retain, nonatomic) NSData *deviceIRKData;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;
@property (retain, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (retain, nonatomic) NSNumber *supportedStereoPairVersions;
@property (retain, nonatomic) NSNumber *productColor;
@property (retain, nonatomic) NSUUID *idsIdentifier;

- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;

@end
