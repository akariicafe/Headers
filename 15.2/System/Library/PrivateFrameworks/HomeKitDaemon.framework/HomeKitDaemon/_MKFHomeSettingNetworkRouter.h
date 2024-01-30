@class Protocol, NSUUID, NSString, _MKFAccessoryHAP, NSDate, MKFHomeSettingNetworkRouterDatabaseID;
@protocol MKFAccessoryHAP, MKFHome;

@interface _MKFHomeSettingNetworkRouter : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeSettingNetworkRouter, MKFHomeSettingNetworkRouterPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (retain, nonatomic) _MKFAccessoryHAP *networkAccessory;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (retain, nonatomic) id<MKFAccessoryHAP> networkAccessory;
@property (readonly, copy, nonatomic) MKFHomeSettingNetworkRouterDatabaseID *databaseID;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfHomeSettingNetworkRouter;

@end
