@class HMFProductInfo, Protocol, NSDate, _MKFAppleMediaAccessory, MKFDeviceDatabaseID, _MKFHomeNetworkRouterManagingDeviceSetting, _MKFAccount, NSString, _MKFResident, HMDRPIdentity, NSArray, _MKFHome, HMDHomeKitVersion, NSUUID;
@protocol MKFAppleMediaAccessory, MKFHomeNetworkRouterManagingDeviceSetting, MKFResident, MKFAccount, MKFHome;

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
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFAppleMediaAccessory *accessoryAppleMedia;
@property (retain, nonatomic) _MKFAccount *account;
@property (retain, nonatomic) _MKFHome *primaryResidentOf;
@property (retain, nonatomic) _MKFResident *resident;
@property (retain, nonatomic) _MKFHomeNetworkRouterManagingDeviceSetting *settingRouterManager;
@property (retain, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFAppleMediaAccessory> accessoryAppleMedia;
@property (readonly, retain, nonatomic) id<MKFAccount> account;
@property (retain, nonatomic) id<MKFHome> primaryResidentOf;
@property (retain, nonatomic) id<MKFResident> resident;
@property (retain, nonatomic) id<MKFHomeNetworkRouterManagingDeviceSetting> settingRouterManager;
@property (readonly, copy, nonatomic) MKFDeviceDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfDevice;

@end
