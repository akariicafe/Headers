@class Protocol, NSUUID, NSString, MKFHomeNetworkRouterManagingDeviceSettingDatabaseID, NSDate, _MKFDevice;
@protocol MKFHome, MKFDevice;

@interface _MKFHomeNetworkRouterManagingDeviceSetting : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterManagingDeviceSetting, MKFHomeNetworkRouterManagingDeviceSettingPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) id<MKFDevice> device;
@property (readonly, copy, nonatomic) MKFHomeNetworkRouterManagingDeviceSettingDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfHomeNetworkRouterManagingDeviceSetting;

@end
