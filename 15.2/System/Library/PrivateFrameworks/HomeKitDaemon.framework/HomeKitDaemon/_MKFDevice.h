@class HMFProductInfo, Protocol, _MKFHomeSettingNetworkRouterManagingDevice, NSDate, MKFDeviceDatabaseID, _MKFAccount, _MKFDeviceCapabilities, NSString, NSSet, _MKFResident, HMDRPIdentity, _MKFAccessoryMediaApple, NSArray, _MKFHome, HMDHomeKitVersion, NSUUID;
@protocol MKFAccessoryMediaApple, MKFHome, MKFHomeSettingNetworkRouterManagingDevice, MKFResident, MKFAccount, MKFDeviceCapabilities;

@interface _MKFDevice : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDevice, MKFDevicePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (retain, nonatomic) _MKFAccessoryMediaApple *accessoryAppleMedia;
@property (retain, nonatomic) _MKFAccount *account;
@property (retain, nonatomic) NSSet *bulletinRegistrations_;
@property (retain, nonatomic) _MKFDeviceCapabilities *capabilities;
@property (retain, nonatomic) _MKFHome *primaryResidentOf;
@property (retain, nonatomic) _MKFResident *resident;
@property (retain, nonatomic) _MKFHomeSettingNetworkRouterManagingDevice *settingRouterManager;
@property (retain, nonatomic) NSSet *triggers_;
@property (retain, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (readonly, retain, nonatomic) id<MKFAccessoryMediaApple> accessoryAppleMedia;
@property (readonly, retain, nonatomic) id<MKFAccount> account;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (retain, nonatomic) id<MKFDeviceCapabilities> capabilities;
@property (retain, nonatomic) id<MKFHome> primaryResidentOf;
@property (retain, nonatomic) id<MKFResident> resident;
@property (retain, nonatomic) id<MKFHomeSettingNetworkRouterManagingDevice> settingRouterManager;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) MKFDeviceDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfDevice;
- (id)materializeOrCreateCapabilitiesRelation:(BOOL *)a0;
- (id)characteristicBulletinRegistrationFrom:(id)a0 accessory:(id)a1 context:(id)a2;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationCharacteristicWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationCameraSignificantEventWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationCameraReachabilityWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationCameraAccessModeWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateBulletinRegistrationsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationCameraAccessModeWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationCameraReachabilityWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationCameraSignificantEventWithModelID:(id)a0;
- (id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationCharacteristicWithModelID:(id)a0;

@end
