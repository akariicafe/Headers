@class NSString;

@interface HMDHomeNetworkRouterSettingsModel : HMDHomeSettingsBaseModel

@property (copy, nonatomic) NSString *activeNetworkRouterAccessoryUUID;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;

+ (id)properties;
+ (id)defaultModelForHomeUUID:(id)a0;
+ (id)modelIDForHomeUUID:(id)a0;
+ (id)modelNamespace;

- (id)dependentUUIDs;

@end
